/*
 * Created by Maksim Paramonov on 22.03.2021.
*/

#ifndef CPP_MINIVAN_H
#define CPP_MINIVAN_H

#include <iostream>
#include <string>

#include "PassengerCar.h"
#include "Bus.h"

class Minivan : public PassengerCar, public Bus {
public:
    Minivan(std::string company, std::string model) : Car(company, model), PassengerCar(company, model), Bus(company, model) {
        std::cout << "create a minivan " << company << ", " << model << std::endl;
    };
};

#endif //CPP_MINIVAN_H
