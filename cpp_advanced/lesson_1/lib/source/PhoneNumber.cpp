/*
 * Created by Maksim Paramonov on 28.06.2021.
*/

#include "../include/PhoneNumber.h"

std::ostream &operator<<(std::ostream &ostream, const PhoneNumber &phoneNumber) {
    ostream << "+" << phoneNumber.countyCode;
    ostream << "(" << phoneNumber.cityCode << ")";
    ostream << phoneNumber.number;
    if (phoneNumber.additionalNumber) {
        ostream << " " << *phoneNumber.additionalNumber;
    }
    return ostream;
}

bool operator<(const PhoneNumber &left, const PhoneNumber &right) {
    return std::tie(left.countyCode, left.cityCode, left.number, left.additionalNumber) <
    std::tie(right.countyCode, right.cityCode, right.number, right.additionalNumber);
}
