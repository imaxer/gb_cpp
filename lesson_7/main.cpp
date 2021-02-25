/*
 * Created by Maksim Paramonov on 25.02.2021.
*/
#include <iostream>
#include <fstream>

#include "mylib.h"

#define IN_RANGE(a, b) (a >= 0 && a < b)

#define SORT_ARRAY_SIZE 5

#define SwapINT(a, b)   int temp = sortArr[j]; \
                        sortArr[j] = sortArr[j + 1]; \
                        sortArr[j + 1] = temp; \

int main() {
    // Создайте проект из 2х cpp файлов и заголовочного (main.cpp, mylib.cpp, mylib.h) во втором модуле mylib
    // объявить 3 функции: для инициализации массива (типа float), печати его на экран и подсчета количества
    // отрицательных и положительных элементов. Вызывайте эти 3-и функции из main для работы с массивом.
    // * Сделайте задание 1 добавив свой неймспейс во втором модуле (первое задание тогда можно не делать).
    const int SIZE = 5;

    auto *arr = new (std::nothrow) float [SIZE];

    myLib::fillArray(arr, SIZE);

    myLib::printArray(arr, SIZE);

    auto result = myLib::countPositiveAndNegative(arr, SIZE);

    delete[] arr;
    arr = nullptr;

    std::cout << "Positive = " << result.positive << ", " << "negative = " << result.negative << std::endl;

    // Описать макрокоманду (через директиву define), проверяющую, входит ли переданное ей число
    // (введенное с клавиатуры) в диапазон от нуля (включительно) до переданного ей второго аргумента (исключительно)
    // и возвращает true или false, вывести на экран «true» или «false».
    int number;

    std::cout << "Please, enter a number" << std::endl;
    std::cin >> number;
    std::cout << (IN_RANGE(number, 10) ? "true" : "false") << std::endl;

    // Задайте массив типа int. Пусть его размер задается через директиву препроцессора #define.
    // Инициализируйте его через ввод с клавиатуры. Напишите для него свою функцию сортировки (например Пузырьком).
    // Реализуйте перестановку элементов как макрокоманду SwapINT(a, b). Вызывайте ее из цикла сортировки.
    auto *sortArr = new (std::nothrow) int [SORT_ARRAY_SIZE];

    for (int i = 0; i < SORT_ARRAY_SIZE; i++) {
        std::cout << "Please, enter element " << i << std::endl;
        std::cin >> sortArr[i];
    }

    for (int i = 0; i < SORT_ARRAY_SIZE - 1; i++) {
        for (int j = 0; j < SORT_ARRAY_SIZE - i - 1; j++) {
            if (sortArr[j] > sortArr[j + 1]) {
                SwapINT(j, j + 1)
            }
        }
    }

    myLib::printArray(sortArr, SORT_ARRAY_SIZE);

    delete[] sortArr;
    sortArr = nullptr;

    // * Объявить структуру Сотрудник с различными полями. Сделайте для нее побайтовое выравнивание с помощью
    // директивы pragma pack. Выделите динамически переменную этого типа. Инициализируйте ее.
    // Выведите ее на экран и ее размер с помощью sizeof. Сохраните эту структуру в текстовый файл.
    auto *emp = new myLib::Employee;

    emp->id = 1;
    emp->age = 20;
    emp->salary = 1000.15;

    std::cout << sizeof(*emp) << std::endl;

    myLib::outEmployee(emp, std::cout);

    std::ofstream fout("employee.txt");

    if (fout.is_open()) {
        myLib::outEmployee(emp, fout);

        fout.close();
    } else {
        return EXIT_FAILURE;
    }

    delete emp;
    return EXIT_SUCCESS;
}

