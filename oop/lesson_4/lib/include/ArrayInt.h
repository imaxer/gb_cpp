/*
 * Created by Maksim Paramonov on 29.03.2021.
*/

#ifndef CPP_ARRAYINT_H
#define CPP_ARRAYINT_H

#include <cassert> // для assert()
#include <string>

class ArrayInt
{
private:
    int m_length;
    int *m_data;

    int& get(int index);

public:
    ArrayInt(): m_length(0), m_data(nullptr) {};

    ArrayInt(int length):
            m_length(length)
    {
        assert(length >= 0);

        if (length > 0)
            m_data = new int[length];
        else
            m_data = nullptr;
    }

    ~ArrayInt()
    {
        delete[] m_data;
    }

    void erase();
    int getLength();
    void resize(int newLength);
    void insertBefore(int value, int index);
    void push_back(int value);
    int &pop_back();
    int &pop_front();
    void sort();
    std::string *print();

    int& operator[](int index) {
        assert(index >= 0 && index < m_length);
        return m_data[index];
    };
};

#endif //CPP_ARRAYINT_H
