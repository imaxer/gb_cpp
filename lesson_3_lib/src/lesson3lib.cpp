/*
 * Created by Maksim Paramonov on 07.02.2021.
*/

#include "../include/lesson3lib.h"

#include <iostream>

using namespace std;

float ex1(const int a, const int b, const int c, const int d) {
    float result =  a * (b + (static_cast<float>(c) / d));

    cout << "a * (b + (c / d)) = " << result << endl;

    return result;
}

int ex2(const int a) {
    int result = a <= 21 ? a - 21 : 2 * (a - 21);
    cout << result << endl;
    return result;
}

int ex3(int (*pArray)[3][3]) {
    int result = *(*(*(pArray + 1) + 1) + 1);
    cout << "Центральный элемент массива 3 * 3 * 3 = " << result << endl;
    return result;
}
