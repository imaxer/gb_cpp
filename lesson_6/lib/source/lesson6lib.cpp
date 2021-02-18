/*
 * Created by Maksim Paramonov on 15.02.2021.
*/
#include "../include/lesson6lib.h"
#include "../include/utils.h"

using namespace std;

void fillWithPow2(int *pArr, unsigned int size) {
    int val = 1;
    arrForEach(pArr, size, [&val](int *pItem, int index) -> void {
        *pItem = index == 0 ? val : val = val * 2;
    });
}

string getRandomText(int start, int end) {
    int length = start + rand() % (end - start);
    string str;
    while (length > 0) {
        str.append(sizeof(char), static_cast<char>(32 + (rand() % (122 - 32))));
        length--;
    }
    return str;
}