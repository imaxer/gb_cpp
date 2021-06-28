/*
 * Created by Maksim Paramonov on 28.06.2021.
*/

#ifndef CPP_PHONEBOOK_H
#define CPP_PHONEBOOK_H

#include <vector>
#include <fstream>
#include <regex>
#include <iostream>
#include <optional>

#include "Person.h"
#include "PhoneNumber.h"

class PhoneBook {
private:
    std::vector<std::pair<Person, PhoneNumber>> *list;

public:
    explicit PhoneBook(std::ifstream &stream);
    ~PhoneBook();

    friend std::ostream &operator <<(std::ostream &ostream, const PhoneBook &phoneBook);

    void sortByPhone();

    void sortByName();

    std::pair<std::string, std::string> getPhoneNumber(const std::string& surname);

    void changePhoneNumber(const Person& person, const PhoneNumber& phoneNumber);
};


#endif //CPP_PHONEBOOK_H
