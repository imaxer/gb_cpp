/*
 * Created by Maksim Paramonov on 11.02.2021.
*/
#include "../include/lesson4lib.h"

using namespace std;

bool ex1(const int a, const int b) {
    auto sum = a + b;
    return sum >= 10 && sum <=20;
}

void ex2(const int a, const int b) {
    cout << ((a == 10 && b == 10) || (a + b) == 10 ? "true" : "false") << endl;
}

void ex3(int start, int end) {
    for (int i = start % 2 != 0 ? start : start + 1; i <= end; i += 2) {
        cout << i << " ";
    }
    cout << endl;
}

bool ex4(int a) {
    if (a == 1) {
        return true;
    }
    for (int i = 2; i < a - 1; i++) {
        if (a % i == 0) {
            return false;
        }
    }
    return true;
}