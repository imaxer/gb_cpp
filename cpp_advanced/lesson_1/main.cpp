/*
 * Created by Maksim Paramonov on 28.06.2021.
*/
#include <iostream>
#include <fstream>

#include "Person.h"
#include "PhoneBook.h"
#include "PhoneNumber.h"

using namespace std;

int main() {
    ifstream file("db.txt");

    if (file.is_open()) {
        PhoneBook book(file);

        cout << book;

        cout << "------SortByPhone-------" << endl;
        book.sortByPhone();
        cout << book;

        cout << "------SortByName--------" << endl;
        book.sortByName();
        cout << book;

        cout << "-----GetPhoneNumber-----" << endl;
        // лямбда функция, которая принимает фамилию и выводит номер телефона этого    	человека, либо строку с ошибкой
        auto print_phone_number = [&book](const string& surname) {
            cout << surname << "\t";
            auto answer = book.getPhoneNumber(surname);
            if (get<0>(answer).empty())
                cout << get<1>(answer);
            else
                cout << get<0>(answer);
            cout << endl;
        };

        // вызовы лямбды
        print_phone_number("Ivanov");
        print_phone_number("Petrov");

        cout << "----ChangePhoneNumber----" << endl;
        book.changePhoneNumber(Person{ "Kotov", "Vasilii", "Eliseevich" }, PhoneNumber{7, 123, "15344458", nullopt});
        book.changePhoneNumber(Person{ "Mironova", "Margarita", "Vladimirovna" }, PhoneNumber{ 16, 465, "9155448", 13 });
        cout << book;


        file.close();
    }
    return EXIT_SUCCESS;
}
