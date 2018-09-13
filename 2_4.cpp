/*
 В круг выстроено N человек, пронумерованных числами от 1 до N. Будем исключать каждого k-ого до тех пор, пока не уцелеет только один человек.
Например, если N=10, k=3, то сначала умрет 3-й, потом 6-й, затем 9-й, затем 2-й, затем 7-й, потом 1-й, потом 8-й, за ним - 5-й, и потом 10-й. Таким образом, уцелеет 4-й.
Необходимо определить номер уцелевшего.
N, k ≤ 10000.
*/

/** @author Yaishenka
    @date 03.09.2018. */

#include <iostream>
#include <assert.h>

void fullArrayWithOrderNumbers(int* arr, size_t size) {
    for (int i{0}; i < size; ++i) {
        arr[i] = i+1;
    }
}

template <typename T>
class ArrayWrapper {
    public:
        ArrayWrapper(T* arr, size_t size);
        ArrayWrapper(size_t size);

        size_t size() const {return _size; }

        int find(T el);
        void erase(int it);

        void fullArrayWithOrderNumbers();

        T operator[](int i) {return arr[i]; }

        T* arr;
    private:
        size_t _size;
};

template <typename T>
std::ostream& operator<<(std::ostream& os, ArrayWrapper<T>& arr) {
    for (int i{0}; i < arr.size(); ++i) {
        os << arr[i] << " ";
    }
    return os;
}

int counting(int* arr, size_t size, size_t k) {
    size_t currentIt{k};
    ArrayWrapper<int> arrInWrapper(arr,size);
    while (arrInWrapper.size() != 1) {
        if (currentIt >= arrInWrapper.size()) {
            currentIt -= arrInWrapper.size();
            continue;
        } else {
            arrInWrapper.erase(currentIt);
            std::cout << std::endl;
            currentIt += k;
        }
    }
    return arrInWrapper[0];
}

int main() {
    int n, k;
    std::cin >> n >> k;
    assert(n <= 10000);
    assert(k <= 10000);
    int* arr = new int[n];
    fullArrayWithOrderNumbers(arr, n);
    k--;
    std::cout << counting(arr, n, k) << std::endl;
    return 0;
}

template <typename T>
ArrayWrapper<T>::ArrayWrapper(T* arr, size_t size) : arr(arr), _size(size)
{}

template <typename T>
ArrayWrapper<T>::ArrayWrapper(size_t size) : _size(size) {
    arr = new T(size);
}

template <typename T>
int ArrayWrapper<T>::find(T el) {
    for (int i{0}; i < _size; ++i) {
        if (arr[i] == el) {
            return i;
        }
    }
    return -1;
}

template <typename T>
void ArrayWrapper<T>::erase(int it) {
    if (it == -1) {
        return;
    }

    _size--;
    int* newArr  = new int [_size];

    for (int i{0}; i < it; ++i) {
        newArr[i] = arr[i];
    }
    for (int i{it}; i < _size; ++i) {
        newArr[i] = arr[i + 1];
    }

    delete (arr);
    arr = newArr;
}

template <typename T>
void ArrayWrapper<T>::fullArrayWithOrderNumbers() {
    for (int i{0}; i < _size; ++i) {
        arr[i] = i+1;
    }
}



