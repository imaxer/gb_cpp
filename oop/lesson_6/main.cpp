/*
 * Created by Maksim Paramonov on 05.04.2021.
*/
#include <iostream>
#include <regex>

#include "Card.h"
#include "Player.h"
#include "GenericPlayer.h"
#include "Suit.h"
#include "House.h"

using namespace std;

inline ostream &endll(ostream &ostream) {
    ostream << "\n\n";
    return ostream.flush();
}


int main() {
    // Ex 1. Создать программу, которая считывает целое число типа int. И поставить «защиту от дурака»:
    // если пользователь вводит что-то кроме одного целочисленного значения, нужно вывести сообщение об ошибке
    // и предложить ввести число еще раз. Пример неправильных введенных строк:
    //  rbtrb
    //  nj34njkn
    //  1n
    string i;

    regex r("(-|\\+)?\\d+");

    while (!regex_match(i, r)) {
        cout << "Please, enter an integer..." << endll;
        cin >> i;
    }

    cout << i << endll;

    // Ex 2. Создать собственный манипулятор endll для стандартного потока вывода,
    // который выводит два перевода строки и сбрасывает буфер.

    // Ex 3. Реализовать класс Player, который наследует от класса GenericPlayer. У этого класса будет 4 метода:
    //  virtual bool IsHitting() const - реализация чисто виртуальной функции базового класса.
    //      Метод спрашивает у пользователя, нужна ли ему еще одна карта и возвращает ответ пользователя в виде true
    //      или false.
    //  void Win() const - выводит на экран имя игрока и сообщение, что он выиграл.
    //  void Lose() const - выводит на экран имя игрока и сообщение, что он проиграл.
    //  void Push() const - выводит на экран имя игрока и сообщение, что он сыграл вничью.
    //
    // Ex 4. Реализовать класс House, который представляет дилера. Этот класс наследует от класса GenericPlayer.
    // У него есть 2 метода:
    //  virtual bool IsHitting() const - метод указывает, нужна ли дилеру еще одна карта.
    //      Если у дилера не больше 16 очков, то он берет еще одну карту.
    //  void FlipFirstCard() - метод переворачивает первую карту дилера.
    //
    // Ex 5. Написать перегрузку оператора вывода для класса Card.
    // Если карта перевернута рубашкой вверх (мы ее не видим), вывести ХХ, если мы ее видим,
    // вывести масть и номинал карты. Также для класса GenericPlayer написать перегрузку оператора вывода,
    // который должен отображать имя игрока и его карты, а также общую сумму очков его карт.

    Card card(Suit::CLUB, TWO);
    Card card1(Suit::DIAMOND, ACE);
    Card card2(Suit::HEART, KING);
    Card card3(Suit::SPADE, JACK);

    GenericPlayer *player1 = new Player("Max");

    player1->add(&card);
    player1->add(&card1);
    player1->add(&card2);
    player1->add(&card3);

    player1->isHitting();

    cout << *player1 << endl;

    delete player1;


    return EXIT_SUCCESS;
}
