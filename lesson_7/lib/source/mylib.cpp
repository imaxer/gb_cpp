/*
 * Created by Maksim Paramonov on 25.02.2021.
*/
#include <iostream>

#include "../include/mylib.h"

using namespace std;

namespace myLib {
    void fillArray(float *arr, int size) {
        for (int i = 0; i < size; i++) {
            cout << "Please, enter element " << i << endl;
            cin >> arr[i];
        }
    }

    void printArray(float *arr, int size) {
        cout << "[";
        for (int i = 0; i < size; i++) {
            cout << arr[i] << (i == size - 1 ? "" : ", ");
        }
        cout << "]" << endl;
    }

    void printArray(int *arr, int size) {
        cout << "[";
        for (int i = 0; i < size; i++) {
            cout << arr[i] << (i == size - 1 ? "" : ", ");
        }
        cout << "]" << endl;
    }

    ContNumbers countPositiveAndNegative(const float *arr, int size) {
        ContNumbers result;
        for (int i = 0; i < size; i++) {
            if (arr[i] > 0) {
                result.positive += 1;
            } else if (arr[i] < 0) {
                result.negative += 1;
            }
        }
        return result;
    }

    void outEmployee(Employee *emp, std::ostream &ostream) {
        ostream << "{" << std::endl;
        ostream << "\tid: " << emp->id << ";" << std::endl;
        ostream << "\tage: " << emp->age << ";" << std::endl;
        ostream << "\tsalary: " << emp->salary << ";" << std::endl;
        ostream << "}" << std::endl;
    }
}
