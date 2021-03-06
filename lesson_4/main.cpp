/*
 * Created by Maksim Paramonov on 11.02.2021.
*/
#include <iostream>

#include "lib/include/lesson4lib.h"

using namespace std;

int main () {
    // Написать программу, проверяющую что сумма двух (введенных с клавиатуры) чисел лежит в пределах
    // от 10 до 20 (включительно), если да – вывести строку "true", в противном случае – "false";
    int a, b;
    cout << "Введите первое число" << endl;
    cin >> a;
    cout << "Введите второе число" << endl;
    cin >> b;

    cout << (ex1(a, b) ? "true" : "false") << endl;

    // Написать программу, выводящую на экран строку “true”, если две целочисленные константы,
    // объявленные в её начале либо обе равны десяти сами по себе, либо их сумма равна десяти. Иначе "false".
    ex2(10, 10);

    // Написать программу которая выводит на экран список всех нечетных чисел он 1 до 50.
    // Например: "Your numbers: 1 3 5 7 9 11 13 …". Для решения используйте любой С++ цикл.
    ex3(1, 50);

    // Со звёздочкой. Написать программу, проверяющую, является ли некоторое число - простым.
    // Простое число — это целое положительное число, которое делится без остатка только на единицу и себя само.
    cout << "Введите число" << endl;
    cin >> b;

    auto isSimple = ex4(b);

    cout << isSimple << endl;

    return 0;
}

