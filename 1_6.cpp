/*Дан массив целых чисел A[0..n).
 Не используя других массивов переставить элементы массива A в обратном порядке за O(n). n ≤ 10000.
*/
/** @author Yaishenka
    @date 03.09.2018. */
#include <iostream>
#include <assert.h>
#include <algorithm>

void readArray (int* arr, size_t size) {
    for (size_t i{0}; i < size; ++i) {
        std::cin >> arr[i];
    }
}

void printArray(int* arr, size_t size) {
    for (size_t i{0}; i < size; ++i) {
        std::cout << arr[i] << " ";
    }
}

void reverseArray (int* arr, size_t size) {
    for (size_t i{0}; i < size/2; ++i) {
        std::swap(arr[i], arr[size-i-1]);
    }
}

int main() {
    size_t n;

    std::cin >> n;
    assert(n <= 10000);

    int* arr = new int (n);

    readArray(arr, n);
    reverseArray(arr, n);
    printArray(arr, n);

    delete (arr);

    return 0;
}