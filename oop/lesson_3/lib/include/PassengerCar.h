/*
 * Created by Maksim Paramonov on 22.03.2021.
*/

#ifndef CPP_PASSENGERCAR_H
#define CPP_PASSENGERCAR_H

#include <iostream>
#include <string>

#include "Car.h"

class PassengerCar : virtual public Car {
public:
    PassengerCar(std::string company, std::string model) : Car(company, model) {
        std::cout << "create a passenger car " << company << ", " << model << std::endl;
    };
};

#endif //CPP_PASSENGERCAR_H
