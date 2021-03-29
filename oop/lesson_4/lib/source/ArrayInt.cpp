/*
 * Created by Maksim Paramonov on 29.03.2021.
*/

#include "../include/ArrayInt.h"

void ArrayInt::erase() {
    delete[] m_data;

    // Здесь нам нужно указать m_data значение nullptr, чтобы на выходе не было висячего указателя
    m_data = nullptr;
    m_length = 0;
}

int ArrayInt::getLength() {
    return m_length;
}

void ArrayInt::resize(int newLength)
{
    // Если массив уже нужной длины — return
    if (newLength == m_length)
        return;

    // Если нужно сделать массив пустым — делаем это и затем return
    if (newLength <= 0)
    {
        erase();
        return;
    }

    // Теперь знаем, что newLength >0
    // Выделяем новый массив
    int *data = new int[newLength];

    // Затем нужно разобраться с количеством копируемых элементов в новый массив
    // Нужно скопировать столько элементов, сколько их есть в меньшем из массивов
    if (m_length > 0)
    {
        int elementsToCopy = (newLength > m_length) ? m_length : newLength;

        // Поочередно копируем элементы
        for (int index=0; index < elementsToCopy ; ++index)
            data[index] = m_data[index];
    }

    // Удаляем старый массив, так как он нам уже не нужен
    delete[] m_data;

    // И используем вместо старого массива новый! Обратите внимание, m_data указывает
    // на тот же адрес, на который указывает наш новый динамически выделенный массив. Поскольку
    // данные были динамически выделенные — они не будут уничтожены, когда выйдут из области видимости
    m_data = data;
    m_length = newLength;
}

void ArrayInt::insertBefore(int value, int index)
{
    // Проверка корректности передаваемого индекса
    assert(index >= 0 && index <= m_length);

    // Создаем новый массив на один элемент больше старого массива
    int *data = new int[m_length+1];

    // Копируем все элементы до index-а
    for (int before=0; before < index; ++before)
        data[before] = m_data[before];

    // Вставляем новый элемент в новый массив
    data [index] = value;

    // Копируем все значения после вставляемого элемента
    for (int after=index; after < m_length; ++after)
        data[after+1] = m_data[after];

    // Удаляем старый массив и используем вместо него новый
    delete[] m_data;
    m_data = data;
    ++m_length;
}

void ArrayInt::push_back(int value) {
    insertBefore(value, m_length);
}

int &ArrayInt::get(int index) {
    assert(index >= 0 && index < m_length);

    int &result = this->m_data[index];

    int *data = new int[m_length - 1];

    for (int before = 0; before < index; ++before)
        data[before] = m_data[before];

    for (int after=index; after < m_length; ++after)
        data[after - 1] = m_data[after];

    delete[] m_data;
    m_data = data;
    --m_length;
    return result;
}

int &ArrayInt::pop_back() {
    assert(this->getLength() > 0);
    return this->get(this->getLength() - 1);
}

int &ArrayInt::pop_front() {
    return this->get(0);
}

void ArrayInt::sort() {
    // пузырек по возрастанию
    for (int outer = 0; outer < this->getLength() - 1; outer++) {
        for (int inner = 0; inner < this->getLength() - outer - 1; inner++) {
            if (m_data[inner] > m_data[inner + 1]) {
                int temp = m_data[inner];
                m_data[inner] = m_data[inner + 1];
                m_data[inner + 1] = temp;
            }
        }
    }
}

std::string *ArrayInt::print() {
    auto *str = new std::string();
    str->append("[");
    for (int i = 0; i < this->getLength(); i++) {
        str->append(std::to_string(m_data[i]));
        if (i != this->getLength() - 1) {
            str->append(", ");
        }
    }
    str->append("]");
    return str;
}

