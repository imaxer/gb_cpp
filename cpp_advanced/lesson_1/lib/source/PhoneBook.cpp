/*
 * Created by Maksim Paramonov on 28.06.2021.
*/

#include "../include/PhoneBook.h"

PhoneBook::PhoneBook(std::ifstream &stream) {
    this->list = new std::vector<std::pair<Person, PhoneNumber>>();

    while (!stream.eof()) {
        std::string s;
        std::getline(stream, s);

        std::regex regex{R"(;)"};
        std::sregex_token_iterator it{s.begin(), s.end(), regex, -1};
        std::vector<std::string> words{it, {}};

        Person person(words[0], words[1],  words[2].empty() ? std::nullopt : std::make_optional(words[2]));

        std::optional<int> additionalNumber = words[6].empty() ? std::nullopt : std::make_optional(std::stoi(words[6]));

        PhoneNumber phoneNumber(std::stoi( words[3]), std::stoi( words[4]),  words[5], additionalNumber);

        this->list->push_back(std::pair(person, phoneNumber));
    }
}

PhoneBook::~PhoneBook() {
    this->list->clear();
    delete this->list;
}

std::ostream &operator<<(std::ostream &ostream, const PhoneBook &phoneBook) {
    for (auto &value : *phoneBook.list) {
        ostream << value.first << "   " << value.second << std::endl;
    }
    return ostream;
}

void PhoneBook::sortByPhone() {
    std::sort(
            this->list->begin(),
            this->list->end(),
            [] (const std::pair<Person, PhoneNumber> &left, const std::pair<Person, PhoneNumber> &right) -> bool {
                return left.second < right.second;
            }
    );
}

void PhoneBook::sortByName() {
    std::sort(
            this->list->begin(),
            this->list->end(),
            [] (const std::pair<Person, PhoneNumber> &left, const std::pair<Person, PhoneNumber> &right) -> bool {
                return left.first < right.first;
            }
    );
}

std::pair<std::string, std::string> PhoneBook::getPhoneNumber(const std::string& surname) {
    std::pair<std::string, std::string> result("not found", "");

    std::for_each(
            this->list->begin(),
            this->list->end(),
            [surname, &result](const std::pair<Person, PhoneNumber> &pair) {
                if (result.first != "found more than 1") {
                    if (surname == pair.first.getSurname()) {
                        if (result.first.empty()) {
                            result.first = "found more than 1";
                            result.second = "";
                        }
                        result.first = "";
                        std::stringstream stream;
                        stream << pair.second;
                        result.second = stream.str();
                    }
                }
            }
    );

    return result;
}

void PhoneBook::changePhoneNumber(const Person& person, const PhoneNumber& phoneNumber) {
    auto founded{
            std::find_if(
                    this->list->begin(),
                    this->list->end(),
                    [person](const std::pair<Person, PhoneNumber> &pair) -> bool {
                        return person == pair.first;
                    }
            )
    };

    if (founded != this->list->end()) {
        founded->second = phoneNumber;
    }
}
