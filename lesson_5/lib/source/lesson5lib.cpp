/*
 * Created by Maksim Paramonov on 15.02.2021.
*/
#include "../include/lesson5lib.h"
#include "../include/utils.h"

using namespace std;

void swapValues(int *pArr, int size) {
    arrForEach(pArr, size, [](int *pItem, int index) -> void {
        *pItem = *pItem > 0 ? 0 : 1;
    });
}

void fillArray(int *pArr) {
    int iArr[8] = { 1, 4, 7, 10, 13, 16, 19, 22 };
    arrForEach(iArr, 8, [pArr](const int *pItem, int index) -> void {
        *(pArr + index) = *pItem;
    });
}

void shiftArray(int *pArr, int size, int shift) {
    int s = shift >= 0 ? size - shift % size : -1 * (shift % size);
    reverseArray(pArr, 0, s - 1);
    reverseArray(pArr, s, size - 1);
    reverseArray(pArr, 0, size - 1);
}

bool checkBalance(int *pArr, int size) {
    for (auto i = 0; i < size - 1; i++) {
        if (sumArray(pArr, i + 1) == sumArray(pArr + i + 1, size - i - 1)) {
            return true;
        }
    }
    return false;
}