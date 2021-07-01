/*
 * Created by Maksim Paramonov on 01.07.2021.
*/
#include <iostream>
#include <fstream>
#include <utility>
#include <vector>
#include <algorithm>
#include <chrono>

using namespace std;

class Timer
{
private:
    using clock_t = std::chrono::high_resolution_clock;
    using second_t = std::chrono::duration<double, std::ratio<1> >;

    std::string m_name;
    std::chrono::time_point<clock_t> m_beg;
    [[nodiscard]] double elapsed() const
    {
        return std::chrono::duration_cast<second_t>(clock_t::now() -m_beg).count();
    }

public:
    Timer() : m_beg(clock_t::now()) { }
    explicit Timer(std::string name) : m_name(std::move(name)), m_beg(clock_t::now()) { }

    void start(std::string name) {
        m_name = std::move(name);
        m_beg = clock_t::now();
    }
    void print() const {
        std::cout << m_name << ":\t" << elapsed() * 1000 << " ms" << '\n';
    }
};


template<typename T>
void Swap(T *left, T *right) {
    T temp = *left;
    *left = *right;
    *right = temp;
}

template<typename T>
void SortPointers(std::vector<T*> &vector) {
    std::sort(
        vector.begin(),
        vector.end(),
        [](T *left, T *right) -> bool {
            return *left < *right;
        }
    );
}

void varint1(const string& content) {
    Timer timer("count_if find");
    string chars = "аАоОэЭеЕиИыЫуУёЁюЮяЯ";

    auto count = std::count_if(content.begin(), content.end(), [chars](char bookChar) -> bool {
        return chars.find(bookChar) != std::string::npos;
    });

    timer.print();
    cout << "result: " << count << endl;
}

void varint2(const string& content) {
    Timer timer("count_if for");
    string chars = "аАоОэЭеЕиИыЫуУёЁюЮяЯ";

    auto count = std::count_if(content.begin(), content.end(), [chars](char bookChar) -> bool {
        bool result = false;
        for (auto c : chars) {
            if (c == bookChar) {
                result = true;
                break;
            }
        }

        return result;
    });

    timer.print();
    cout << "result: " << count << endl;
}

void varint3(const string& content) {
    Timer timer("for find");
    string chars = "аАоОэЭеЕиИыЫуУёЁюЮяЯ";

    long long count = 0;

    for (auto bookChar : content) {
        if (chars.find(bookChar) != std::string::npos) {
            count++;
        }
    }

    timer.print();
    cout << "result: " << count << endl;
}

void varint4(const string& content) {
    Timer timer("for for");
    string chars = "аАоОэЭеЕиИыЫуУёЁюЮяЯ";

    long long count = 0;

    for (auto bookChar : content) {
        for (auto c : chars) {
            if (c == bookChar) {
                count++;
                break;
            }
        }
    }

    timer.print();
    cout << "result: " << count << endl;
}

int main() {
    ifstream file("txttolstoy_voyna-i-mir.txt");

    if (file.is_open()) {
        file.seekg(0, std::ios::end);
        size_t size = file.tellg();
        file.seekg(0);
        string content(size, ' ');
        file.read(&content[0], size);

        varint1(content);
        varint2(content);
        varint3(content);
        varint4(content);

        file.close();
    }
    return EXIT_SUCCESS;
}
