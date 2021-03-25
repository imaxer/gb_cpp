/*
 * Created by Maksim Paramonov on 22.03.2021.
*/

#ifndef CPP_PERSON_H
#define CPP_PERSON_H

#include <string>

#include "./Gender.h"

class Person {
private:
    std::string name;
    int age;
    const Gender gender;
    float weight;

public:
    Person(std::string name, int age, Gender gender, float weight) : name(name), age(age), gender(gender), weight(weight){};
    void setName(std::string name);
    bool setAge(int age);
    bool setWeight(float weight);

    std::string getName();
};


#endif //CPP_PERSON_H
