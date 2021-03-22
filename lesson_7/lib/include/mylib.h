/*
 * Created by Maksim Paramonov on 25.02.2021.
*/

#ifndef CPP_MYLIB_H
#define CPP_MYLIB_H

namespace myLib {
    #pragma pack(push, 1)
    typedef struct EMPLOYEE {
        long id;
        int age;
        float salary;
    } Employee;
    #pragma pack(pop)

    typedef struct COUNT_NUMBERS {
        int positive = 0;
        int negative = 0;
    } ContNumbers;

    void fillArray(float *arr, int size);

    void printArray(float *arr, int size);

    void printArray(int *arr, int size);

    ContNumbers countPositiveAndNegative(const float *arr, int size);

    void outEmployee(Employee *emp, std::ostream &ostream);
}

#endif //CPP_MYLIB_H
