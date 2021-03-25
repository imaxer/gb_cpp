/*
 * Created by Maksim Paramonov on 22.03.2021.
*/

#ifndef CPP_STUDENT_H
#define CPP_STUDENT_H

#include <string>
#include "./Person.h"

class Student : public Person {
private:
    int educationYear;
public:
    Student(
            std::string name, int age, Gender gender, float weight, int year
            ): Person(name, age, gender, weight), educationYear(year) {
        Student::instancesCount++;
    }
    ~Student() {
        Student::instancesCount--;
    }
    bool setEducationYear(int year);
    void incrementEducationYear();
    static size_t instancesCount;
};

size_t Student::instancesCount = 0;

#endif //CPP_STUDENT_H
