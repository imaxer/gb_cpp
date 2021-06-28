/*
 * Created by Maksim Paramonov on 28.06.2021.
*/

#ifndef CPP_PERSON_H
#define CPP_PERSON_H

#include <string>
#include <optional>
#include <iostream>
#include <tuple>
#include <iomanip>
#include <utility>

class Person {
private:
    std::string surname;
    std::string name;
    std::optional<std::string> patronymic;

public:
    Person(std::string surname, std::string name, std::optional<std::string> patronymic)
    : surname(std::move(surname)), name(std::move(name)), patronymic(std::move(patronymic)) {}

    ~Person() = default;

    friend std::ostream &operator <<(std::ostream &ostream, const Person &person);

    friend bool operator <(const Person &left, const Person &right);

    friend bool operator ==(const Person &left, const Person &right);

    [[nodiscard]] std::string getSurname() const;
};


#endif //CPP_PERSON_H
