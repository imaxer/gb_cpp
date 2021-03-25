/*
 * Created by Maksim Paramonov on 22.03.2021.
*/

#ifndef CPP_CAR_H
#define CPP_CAR_H

#include <iostream>
#include <string>

class Car {
private:
    std::string company;
    std::string model;
public:
    Car(std::string company, std::string model) : company(company), model(model) {
        std::cout << "create a car " << company << ", " << model << std::endl;
    };
};

#endif //CPP_CAR_H
