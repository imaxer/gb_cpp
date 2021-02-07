/*
 * Created by Maksim Paramonov on 07.02.2021.
*/
#include <iostream>
#include "lesson3lib.h"

using namespace std;

int main() {
    // 1. Написать программу, вычисляющую выражение a * (b + (c / d)) и выводящую результат с плавающей точкой,
    // где a, b, c, d – целочисленные константы. Используйте static_cast или С-Style cast к float чтобы выполнить
    // точное деление.
    int a, b, c, d;
    cout << "Введите a" << endl;
    cin >> a;
    cout << "Введите b" << endl;
    cin >> b;
    cout << "Введите c" << endl;
    cin >> c;
    cout << "Введите d" << endl;
    cin >> d;

    ex1(a, b, c, d);

    // 2. Дано целое число. Если оно меньше или равно 21, то выведите на экран разницу между этим числом и числом 21.
    // Если же заданное число больше, чем 21, необходимо вывести удвоенную разницу между этим числом и 21.
    // При выполнении задания следует использовать тернарный оператор (?:).

    cout << "Введите целое число" << endl;
    cin >> a;

    ex2(a);

    // 3. Со звездочкой. Описать трёхмерный целочисленный массив, размером 3х3х3 и указатель на значения внутри массива
    // и при помощи операции разыменования вывести на экран значение центральной ячейки получившегося куба [1][1][1].

    int arr[3][3][3];

    int count = 0;
    for (auto & i : arr) {
        for (auto & j : i) {
            for (int & k : j) {
                k = ++count;
            }
        }
    }

    int (*pArr)[3][3] = arr;

    ex3(pArr);

    return EXIT_SUCCESS;
}