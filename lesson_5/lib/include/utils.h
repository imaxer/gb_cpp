/*
 * Created by Maksim Paramonov on 15.02.2021.
*/

#ifndef CPP_UTILS_H
#define CPP_UTILS_H

#include <iostream>
#include <string>

using namespace std;

template <typename T, typename C> inline void arrForEach(T *pArr, int size, C pCallback) {
    for (int i = 0; i < size; i++) {
        pCallback(pArr + i, i);
    }
}

template <typename T, typename C, typename R> inline R arrReduce(T *pArr, int size, C pCallback, R accumulator) {
    for (int i = 0; i < size; i++) {
        accumulator = pCallback(accumulator, pArr + i, i);
    }
    return accumulator;
}

template <typename T> inline void swapArrayValues(T *pArr, int first, int second) {
    T buffer = pArr[second];
    pArr[second] = pArr[first];
    pArr[first] = buffer;
}

template <typename T> inline void reverseArray(T *pArr, int start, int end) {
    for (auto i = start; i <= (end - start + 1) / 2 + start - 1; i++) {
        swapArrayValues(pArr, i, end - i + start);
    }
}

template <typename T> inline T sumArray(T *pArr, int size) {
    return arrReduce(
        pArr,
        size,
        [](T acc, T *pItem, int index) -> T {
            return acc + *pItem;
        },
        0
    );
}

#endif //CPP_UTILS_H
