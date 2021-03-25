/*
 * Created by Maksim Paramonov on 22.03.2021.
*/

#include "../include/Student.h"

bool Student::setEducationYear(int year) {
    if (year < 0) {
        return false;
    }
    this->educationYear = year;
    return true;
}

void Student::incrementEducationYear() {
    this->educationYear++;
}
