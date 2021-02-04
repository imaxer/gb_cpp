/*
 * Created by Maksim Paramonov on 04.02.2021.
*/
#include <iostream>

using namespace std;

// 2. Создать перечисление (enum) с возможными вариантами символов для игры в крестики-нолики.
typedef enum {
    CROSS = '+',
    TOE = '0',
    NOT_SET = ' ',
} TIC_TAC_TOE_SYMBOLS;

// 4. ДЗ со звездочкой. Создать структуру (struct) данных «Поле для игры в крестики-нолики» и снабдить его всеми
// необходимыми свойствами (подумайте что может понадобиться).
typedef struct {
    TIC_TAC_TOE_SYMBOLS cells[3][3] = {
            { TIC_TAC_TOE_SYMBOLS::NOT_SET, TIC_TAC_TOE_SYMBOLS::NOT_SET, TIC_TAC_TOE_SYMBOLS::NOT_SET },
            { TIC_TAC_TOE_SYMBOLS::NOT_SET, TIC_TAC_TOE_SYMBOLS::NOT_SET, TIC_TAC_TOE_SYMBOLS::NOT_SET },
            { TIC_TAC_TOE_SYMBOLS::NOT_SET, TIC_TAC_TOE_SYMBOLS::NOT_SET, TIC_TAC_TOE_SYMBOLS::NOT_SET }
    };
} TIC_TAC_TOE_BOARD;

// 5. ДЗ с двумя звездочками. Создать структуру (struct) объединяющую: union (int, float, char) и
// 3-и битовых поля (флага) указывающими какого типа значение в данный момент содержится в объединении
// (isInt, isFloat, isChar). Продемонстрировать пример использования в коде этой структуры.
typedef struct {
    union {
        int intValue;
        float floatValue;
        char charValue;
    } value;
    unsigned char isInt : 1;
    unsigned char isFloat : 1;
    unsigned char isChar : 1;
} VALUE_CONTAINER;

int main () {
    // 1. Создать и инициализировать переменные пройденных типов данных
    // (short int, int, long long, char, bool, float, double).
    short int si = 1;
    int i = 1;
    long long ll = 1;
    char ch = 'a';
    bool flag = true;
    float f = 1.2;
    double d = 1.1111;

    // 3. Создать массив, способный содержать значения такого перечисления и инициализировать его.
    TIC_TAC_TOE_SYMBOLS testArr[] = {
            TIC_TAC_TOE_SYMBOLS::NOT_SET, TIC_TAC_TOE_SYMBOLS::NOT_SET, TIC_TAC_TOE_SYMBOLS::NOT_SET
    };

    TIC_TAC_TOE_BOARD bord;

    for (auto & cell : bord.cells) {
        cout << '|';
        for (auto & jj : cell) {
            cout << (char)jj << '|';
        }
        cout << endl;
    }

    VALUE_CONTAINER container;
    container.value.charValue = 'd',
    container.isChar = true;

    cout << sizeof(VALUE_CONTAINER) << endl;

    return 0;
}

