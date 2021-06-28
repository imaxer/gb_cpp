/*
 * Created by Maksim Paramonov on 28.06.2021.
*/

#include "../include/Person.h"

std::ostream &operator<<(std::ostream &ostream, const Person &person) {
    ostream << std::setw(15) << person.surname << std::setw(15) << person.name << std::setw(20) << person.patronymic.value_or("");

    return ostream;
}

bool operator<(const Person &left, const Person &right) {
    return std::tie(left.surname, left.name, left.patronymic) < std::tie(right.surname, right.name, right.patronymic);
}

bool operator==(const Person &left, const Person &right) {
    return std::tie(left.surname, left.name, left.patronymic) == std::tie(right.surname, right.name, right.patronymic);
}

std::string Person::getSurname() const {
    return this->surname;
}

