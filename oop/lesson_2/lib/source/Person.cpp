/*
 * Created by Maksim Paramonov on 22.03.2021.
*/

#include "../include/Person.h"

#include <string>

using namespace std;

void Person::setName(string name) {
    this->name = name;
}

bool Person::setAge(int age) {
    if (age < 0) {
        return false;
    }
    this->age = age;
    return true;
}

bool Person::setWeight(float weight) {
    if (weight < 0) {
        return false;
    }
    this->weight = weight;
    return true;
}

std::string Person::getName() {
    return this->name;
}
