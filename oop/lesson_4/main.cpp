/*
 * Created by Maksim Paramonov on 29.03.2021.
*/
#include <iostream>
#include <set>
#include <vector>

#include "ArrayInt.h"
#include "Card.h"
#include "Hand.h"

using namespace std;

int main() {
    // Ex 1. Добавить в контейнерный класс, который был написан в этом уроке, методы:
    //  для удаления последнего элемента массива (аналог функции pop_back() в векторах)
    //  для удаления первого элемента массива (аналог pop_front() в векторах)
    //  для сортировки массива
    //  для вывода на экран элементов.
    ArrayInt vector;

    vector.push_back(2);
    vector.push_back(1);
    vector.push_back(10);
    vector.push_back(7);
    vector.push_back(1);

    cout << *vector.print() << endl;

    vector.sort();

    cout << *vector.print() << endl;

    // Ex 2. Дан вектор чисел, требуется выяснить, сколько среди них различных.
    // Постараться использовать максимально быстрый алгоритм.
    auto vector1 = new std::vector<int>({ 1, 1, 1, 3, 10, 10 });

    auto *uniq = new set<int>();

    for(int & it : *vector1) {
        uniq->insert(it);
    }

    cout << "uniq numbers count = " << uniq->size() << endl;

    delete uniq;

    delete vector1;

    // Ex 3. Реализовать класс Hand, который представляет собой коллекцию карт.
    // В классе будет одно поле: вектор указателей карт (удобно использовать вектор,
    // т.к. это по сути динамический массив, а тип его элементов должен быть - указатель на объекты класса Card).
    // Также в классе Hand должно быть 3 метода:
    //  метод Add, который добавляет в коллекцию карт новую карту, соответственно он принимает в качестве параметра указатель на новую карту
    //  метод Clear, который очищает руку от карт
    //  метод GetValue, который возвращает сумму очков карт руки (здесь предусмотреть возможность того, что туз может быть равен 11).

    auto card1 = new Card(Suit::CLUB, Rank::KING);
    auto card2 = new Card(Suit::CLUB, Rank::NINE);
    auto card3 = new Card(Suit::CLUB, Rank::ACE);
    auto card4 = new Card(Suit::CLUB, Rank::TWO);

    auto hand = new Hand();

    hand->add(card1);
    hand->add(card2);
    hand->add(card3);
    hand->add(card4);

    cout << hand->getValue() << endl;

    hand->clear();

    cout << hand->getValue() << endl;

    delete card1;
    delete card2;
    delete card3;
    delete card4;
    delete hand;

    return EXIT_SUCCESS;
}
