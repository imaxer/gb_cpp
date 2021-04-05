/*
 * Created by Maksim Paramonov on 29.03.2021.
*/
#include <iostream>

#include "Pair1.h"
#include "Pair.h"
#include "StringValuePair.h"

using namespace std;

int main() {
    Pair1<int> p1(6, 9);
    cout << "Pair: " << p1.first() << ' ' << p1.second() << '\n';

    const Pair1<double> p2(3.4, 7.8);
    cout << "Pair: " << p2.first() << ' ' << p2.second() << '\n';

    Pair<int, double> p11(6, 7.8);
    cout << "Pair: " << p11.first() << ' ' << p11.second() << '\n';

    const Pair<double, int> p22(3.4, 5);
    cout << "Pair: " << p22.first() << ' ' << p22.second() << '\n';

    StringValuePair<int> svp("Amazing", 7);
    std::cout << "Pair: " << svp.first() << ' ' << svp.second() << '\n';

    // Ex 4. Согласно иерархии классов, которая представлена в методичке к уроку 3,
    // от класса Hand наследует класс GenericPlayer, который обобщенно представляет игрока,
    // ведь у нас будет два типа игроков - человек и компьютер. Создать класс GenericPlayer,
    // в который добавить поле name - имя игрока. Также добавить 3 метода:
    //  IsHitting() - чисто виртуальная функция, возвращает информацию, нужна ли игроку еще одна карта.
    //  IsBoosted() - возвращает bool значение, есть ли у игрока перебор
    //  Bust() - выводит на экран имя игрока и объявляет, что у него перебор.

    return EXIT_SUCCESS;
}
