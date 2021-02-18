/*
 * Created by Maksim Paramonov on 15.02.2021.
*/

#ifndef CPP_UTILS_H
#define CPP_UTILS_H

#include <iostream>
#include <string>

using namespace std;

template <typename T, typename C> inline void arrForEach(T *pArr, unsigned int size, C pCallback) {
    for (int i = 0; i < size; i++) {
        pCallback(pArr + i, i);
    }
}

template <typename T> void printArray(T *arr, unsigned int size){
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

template <typename T> inline void deleteAndNull(T *&p, bool isArray = false) {
    if (isArray) {
        delete[] p;
    } else {
        delete p;
    }
    p = nullptr;
}

#endif //CPP_UTILS_H
