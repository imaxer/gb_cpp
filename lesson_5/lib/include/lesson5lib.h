/*
 * Created by Maksim Paramonov on 15.02.2021.
*/

#ifndef CPP_LESSON4LIB_H
#define CPP_LESSON4LIB_H

#include "utils.h"

template <typename T> void printArray(T *arr, int size){
    cout << "[";

    auto callback = [size](T *item, int index) {
        cout << *item << (index != size - 1 ? ", " : "");
    };

    arrForEach(arr, size, callback);
    cout << "]" << endl;
}

template <typename T> void printArray(T *arr, int size, string(*pFormatter)(T)){
    cout << "[";

    auto callback = [size, pFormatter](T *item, int index) {
        cout << pFormatter(*item) << (index != size - 1 ? ", " : "");
    };

    arrForEach(arr, size, callback);
    cout << "]" << endl;
}

void swapValues(int *pArr, int size);

void fillArray(int *pArr);

void shiftArray(int *pArr, int size, int shift);

bool checkBalance(int *pArr, int size);

#endif //CPP_LESSON4LIB_H
