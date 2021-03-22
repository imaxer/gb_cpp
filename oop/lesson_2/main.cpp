/*
 * Created by Maksim Paramonov on 22.03.2021.
*/
#include <iostream>
#include <map>

#include "Student.h"
#include "Apple.h"
#include "Banana.h"
#include "GrannySmith.h"

using namespace std;

int main() {
    // Ex 1. Создать класс Person (человек) с полями: имя, возраст, пол и вес. Определить методы переназначения имени,
    // изменения возраста и веса. Создать производный класс Student (студент), имеющий поле года обучения.
    // Определить методы переназначения и увеличения этого значения. Создать счетчик количества созданных студентов.
    // В функции main() создать несколько студентов. По запросу вывести определенного человека.
    Student student1("Max", 32, Gender::MALE, 90.1, 1);
    Student student2("Dmitrii", 14, Gender::MALE, 50, 2);
    Student student3("Jane", 49, Gender::FEMALE, 72, 3);
    Student student4("Ann", 17, Gender::FEMALE, 32, 4);
    Student student5("Elena", 44, Gender::FEMALE, 145, 5);

    map<string, Student> map;

    map.insert(make_pair(student1.getName(), student1));
    map.insert(make_pair(student2.getName(), student2));
    map.insert(make_pair(student3.getName(), student3));
    map.insert(make_pair(student4.getName(), student4));
    map.insert(make_pair(student5.getName(), student5));

    cout << "Students count = " << Student::instancesCount << endl;

    string founded;

    cout << "Enter a student name..." << endl;
    cin >> founded;

    auto it = map.find(founded);

    if (it == map.end()) {
        cout << "student not found" << endl;
    } else {
        Student foundedStudent = it->second;
        cout << foundedStudent.getName() << endl;
    }

    // Ex 2. Создать классы Apple (яблоко) и Banana (банан), которые наследуют класс Fruit (фрукт).
    // У Fruit есть две переменные-члена: name (имя) и color (цвет). Добавить новый класс GrannySmith,
    // который наследует класс Apple.

    Apple a(Color::RED);
    Banana b;
    GrannySmith c;

    std::cout << "My " << a.getName() << " is " << a.getColor() << ".\n";
    std::cout << "My " << b.getName() << " is " << b.getColor() << ".\n";
    std::cout << "My " << c.getName() << " is " << c.getColor() << ".\n";

    return EXIT_SUCCESS;
}
