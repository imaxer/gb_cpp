/*
 * Created by Maksim Paramonov on 28.06.2021.
*/

#ifndef CPP_PHONENUMBER_H
#define CPP_PHONENUMBER_H

#include <optional>
#include <iostream>
#include <tuple>
#include <string>
#include <utility>

class PhoneNumber {
private:
    int countyCode;
    int cityCode;
    std::string number;
    std::optional<int> additionalNumber;

public:
    PhoneNumber(int countyCode, int cityCode, std::string number, std::optional<int> additionalNumber)
    : countyCode(countyCode), cityCode(cityCode), number(std::move(number)), additionalNumber(additionalNumber) {}

    ~PhoneNumber() = default;

    friend std::ostream &operator <<(std::ostream &ostream, const PhoneNumber &phoneNumber);

    friend bool operator <(const PhoneNumber &left, const PhoneNumber &right);
};


#endif //CPP_PHONENUMBER_H
