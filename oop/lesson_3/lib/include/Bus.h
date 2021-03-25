/*
 * Created by Maksim Paramonov on 22.03.2021.
*/

#ifndef CPP_BUS_H
#define CPP_BUS_H

#include <iostream>
#include <string>

#include "Car.h"

class Bus : virtual public Car {
public:
    Bus(std::string company, std::string model) : Car(company, model) {
        std::cout << "create a bus " << company << ", " << model << std::endl;
    };
};

#endif //CPP_BUS_H
