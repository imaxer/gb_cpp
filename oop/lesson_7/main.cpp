/*
 * Created by Maksim Paramonov on 05.04.2021.
*/
#include <iostream>
#include <vector>
#include <string>
#include <memory>

#include "Game.h"

using namespace std;

class Date {
private:
    unsigned int year;
    unsigned int month;
    unsigned int day;

public:
    Date(unsigned int year, unsigned int month, unsigned int day) : year(year), month(month), day(day) {};

    [[nodiscard]] unsigned int getYear() const {
        return year;
    }

    [[nodiscard]] unsigned int getMonth() const {
        return month;
    }

    [[nodiscard]] unsigned int getDay() const {
        return day;
    }

    friend ostream &operator<< (ostream &ostream, const Date *date);
};

ostream &operator<< (ostream &ostream, const Date *date) {
    ostream << "{ " << "year: " << date->getYear() << ", month: " << date->getMonth() << ", day: " << date->getDay() << " }";
    return ostream;
}

Date &max(Date *o1, Date *o2) {
    if (o1->getYear() > o2->getYear()) {
        return *o1;
    } else if (o1->getYear() < o2->getYear()){
        return *o2;
    }
    if (o1->getMonth() > o2->getMonth()) {
        return *o1;
    } else if (o1->getMonth() < o2->getMonth()){
        return *o2;
    }
    if (o1->getDay() > o2->getDay()) {
        return *o1;
    } else if (o1->getDay() < o2->getDay()){
        return *o2;
    }
    return *o1;
}

void swap(Date *o1, Date *o2) {
    std::swap(o1, o2);
}

int main() {
    // 1. Создайте класс Date с полями день, месяц, год и методами доступа к этим полям.
    // Перегрузите оператор вывода для данного класса. Создайте два "умных" указателя today и date.
    // Первому присвойте значение сегодняшней даты. Для него вызовите по отдельности методы доступа к полям класса Date,
    // а также выведите на экран данные всего объекта с помощью перегруженного оператора вывода.
    // Затем переместите ресурс, которым владеет указатель today в указатель date.
    // Проверьте, являются ли нулевыми указатели today и date и выведите соответствующую информацию об этом в консоль.

    auto today = make_unique<Date>(2021, 4, 8);
    unique_ptr<Date> date;

    cout << today->getYear() << endl;
    cout << today->getMonth() << endl;
    cout << today->getDay() << endl;
    cout << today.get() << endl;

    date = move(today);

    cout << (today == nullptr ? "true" : "false") << endl;
    cout << (date == nullptr ? "true" : "false") << endl;

    // 2. По условию предыдущей задачи создайте два умных указателя date1 и date2.
    //  Создайте функцию, которая принимает в качестве параметра два умных указателя типа Date и сравнивает их между собой (сравнение происходит по датам). Функция должна вернуть более позднюю дату.
    //  Создайте функцию, которая обменивает ресурсами (датами) два умных указателя, переданных в функцию в качестве параметров.
    //  Примечание: обратите внимание, что первая функция не должна уничтожать объекты, переданные ей в качестве параметров.

    auto date1 = make_unique<Date>(2021, 4, 8);
    auto date2 = make_unique<Date>(2022, 4, 8);

    cout << max(date1, date2).get() << endl;

    // 3. Создать класс Deck, который наследует от класса Hand и представляет собой колоду карт. Класс Deck имеет 4 метода:
    //  vold Populate() - Создает стандартную колоду из 52 карт, вызывается из конструктора.
    //  void Shuffle() - Метод, который тасует карты, можно использовать функцию из алгоритмов STL random_shuffle
    //  vold Deal (Hand& aHand) - метод, который раздает в руку одну карту
    //  void AddltionalCards (GenericPlayer& aGenerlcPlayer) - раздает игроку дополнительные карты до тех пор, пока он может и хочет их получать
    //  Обратите внимание на применение полиморфизма. В каких методах применяется этот принцип ООП?
    // 4. Реализовать класс Game, который представляет собой основной процесс игры. У этого класса будет 3 поля:
    //  колода карт
    //  рука дилера
    //  вектор игроков.
    //  Конструктор класса принимает в качестве параметра вектор имен игроков и создает объекты самих игроков. В конструкторе создается колода карт и затем перемешивается.
    //  Также класс имеет один метод play(). В этом методе раздаются каждому игроку по две стартовые карты, а первая карта дилера прячется.
    //  Далее выводится на экран информация о картах каждого игра, в т.ч. и для дилера. Затем раздаются игрокам дополнительные карты.
    //  Потом показывается первая карта дилера и дилер набирает карты, если ему надо. После этого выводится сообщение, кто победил, а кто проиграл.
    //  В конце руки всех игроков очищаются.
    // 5. Написать функцию main() к игре Блекджек. В этой функции вводятся имена игроков.
    // Создается объект класса Game и запускается игровой процесс. Предусмотреть возможность повторной игры.

    string more = "n";

    do {
        int count = 0;

        cout << "Please, enter a number of players" << endl;
        cin >> count;

        vector<string> names;

        for (int i = 0; i < count; i++) {
            string name;
            cout << "Please, enter a name player " << i + 1 << endl;
            cin >> name;
            names.push_back(name);
        }

        Game *game = new Game(names);

        game->play();

        delete game;

        cout << "One more? (y/n)" << endl;
        cin >> more;
    } while (more == "y");

    return EXIT_SUCCESS;
}
