/*
 * Created by Maksim Paramonov on 15.02.2021.
*/
#include <iostream>
#include <string>

#include "lesson5lib.h"

using namespace std;

int main() {
    // Написать функцию которая выводит массив double чисел на экран. Параметры функции это сам массив и его размер.
    // Вызвать эту функцию из main.
    double arr[3] = { 1.1, 2.2, 3.3 };

    printArray<double>(arr, 3, [](double item) { return to_string(item); });

    printArray<double>(arr, 3);

    // Задать целочисленный массив, состоящий из элементов 0 и 1. Например: [ 1, 1, 0, 0, 1, 0, 1, 1, 0, 0 ].
    // Написать функцию, заменяющую в принятом массиве 0 на 1, 1 на 0. Выводить на экран массив до изменений и после.
    int iArr[10] = { 1, 1, 0, 0, 1, 0, 1, 1, 0, 0 };

    printArray(iArr, 10);

    swapValues(iArr, 10);

    printArray(iArr, 10);

    // Задать пустой целочисленный массив размером 8. Написать функцию, которая с помощью цикла заполнит его
    // значениями 1 4 7 10 13 16 19 22 (объявить второй массив с этими числами внутри функции.
    // Копировать его в цикле в принятый массив (параметр функции))
    int empty[8];
    fillArray(empty);

    printArray(empty, 8);

    // * Написать функцию, которой на вход подаётся одномерный массив и число n (может быть положительным,
    // или отрицательным), при этом метод должен циклически сместить все элементы массива на n позиций.
    int iShiftArr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };

    cout << "====================================================" << endl;
    for (auto shift = 0; shift < 10; shift ++) {
        shiftArray(iShiftArr, 10, -21);
        printArray(iShiftArr, 10);
    }

    //** Написать метод, в который передается не пустой одномерный целочисленный массив, метод должен вернуть
    // истину если в массиве есть место, в котором сумма левой и правой части массива равны.
    // Примеры: checkBalance([1, 1, 1, || 2, 1]) → true, checkBalance ([2, 1, 1, 2, 1]) → false,
    // checkBalance ([10, || 1, 2, 3, 4]) → true. Абстрактная граница показана символами ||, эти символы в массив не входят.

    int checkArr1[5] = { 1, 1, 1, 2, 1 };

    cout << checkBalance(checkArr1, 5) << endl;

    int checkArr2[5] = { 2, 1, 1, 2, 1 };

    cout << checkBalance(checkArr2, 5) << endl;

    int checkArr3[5] = { 10, 1, 2, 3, 4 };

    cout << checkBalance(checkArr3, 5) << endl;

    return 0;
}

