/*
 * Created by Maksim Paramonov on 18.02.2021.
*/
#include <iostream>
#include <string>
#include <fstream>
#include <time.h>

#include "lesson6lib.h"

using namespace std;

int main() {
    srand(time(0));
    // Выделить в памяти динамический одномерный массив типа int. Размер массива запросить у пользователя.
    // Инициализировать его числами степенями двойки: 1, 2, 4, 8, 16, 32, 64, 128 … Вывести массив на экран.
    // Не забыть освободить память. =) Разбить программу на функции.
    unsigned int iArraySize;
    cout << "Please, enter size of array..." << endl;
    cin >> iArraySize;

    if (iArraySize > 0) {
        auto pArray = new(std::nothrow) int[iArraySize];

        fillWithPow2(pArray, iArraySize);

        printArray(pArray, iArraySize);

        deleteAndNull(pArray, true);
    }

    // Динамически выделить матрицу 4х4 типа int. Инициализировать ее псевдослучайными числами через функцию rand.
    // Вывести на экран. Разбейте вашу программу на функции которые вызываются из main.
    const int SIZE = 4;

    auto pMatrix = new (std::nothrow) int*[SIZE];

    for (auto i = 0; i < SIZE; i++) {
        pMatrix[i] = new (std::nothrow) int[SIZE];
        for (auto j = 0; j < SIZE; j++){
            pMatrix[i][j] = rand();
        }
    }

    for (auto i = 0; i < SIZE; i++) {
        printArray(pMatrix[i], SIZE);
    }

    for (auto i = 0; i < SIZE; i++) {
        deleteAndNull(pMatrix[i], true);
    }

    deleteAndNull(pMatrix, true);

    // Написать программу c 2-я функциями, которая создаст два текстовых файла (*.txt),
    // примерно по 50-100 символов в каждом (особого значения не имеет с каким именно содержимым).
    // Имена файлов запросить у польлзователя.
    const string FILE_EXTENSION = "txt";

    string filename1;
    string filename2;

    cout << "Please, enter filename..." << endl;
    cin >> filename1;
    filename1.append("." + FILE_EXTENSION);

    cout << "Please, enter filename..." << endl;
    cin >> filename2;
    filename2.append("." + FILE_EXTENSION);

    ofstream fout(filename1);

    if (fout.is_open()) {
        fout << getRandomText(50, 100) << endl;
        fout.close();
    } else {
        exit(1);
    }

    fout.open(filename2);
    if (fout.is_open()) {
        fout << getRandomText(50, 100) << endl;
        fout.close();
    } else {
        exit(1);
    }

    //* Написать функцию, «склеивающую» эти файлы в третий текстовый файл (имя файлов спросить у пользователя).
    string filename3;

    cout << "Please, enter filename..." << endl;
    cin >> filename3;
    filename3.append("." + FILE_EXTENSION);

    ifstream fin(filename1);
    fout.open(filename3);

    if (fout.is_open()) {
        if (fin.is_open()) {
            fout << fin.rdbuf();
            fin.close();
        }

        fin.open(filename2);
        if (fin.is_open()) {
            fout << fin.rdbuf();
            fin.close();
        }

        fout.close();
    } else {
        exit(1);
    }

    //* Написать программу, которая проверяет присутствует ли указанное пользователем при запуске программы
    // слово в указанном пользователем файле (для простоты работаем только с латиницей).

    string word;
    cout << "Please, enter word..." << endl;
    cin >> word;
    cout << "Please, enter filename..." << endl;
    cin >> filename3;
    filename3.append("." + FILE_EXTENSION);

    fin.open(filename3);

    size_t isWordExist = string::npos;

    if (fin.is_open()) {
        string content((istreambuf_iterator<char>(fin)), istreambuf_iterator<char>());
        isWordExist = content.find(word);
        fin.close();
    } else {
        exit(1);
    }

    cout << (isWordExist == string::npos ? "not founded" : "founded") << endl;

    return 0;
}

