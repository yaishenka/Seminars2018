/*
Дан отсортированный массив целых чисел A[0..n-1] и массив целых чисел B[0..m-1].
 Для каждого элемента массива B[i] найдите минимальный индекс k минимального элемента массива A,
 равного или превосходящего B[i]: A[k] >= B[i]. Если такого элемента нет, выведите n.
 Время работы поиска k для каждого элемента B[i]: O(log(k)). n, m ≤ 10000.
*/

/** @author Yaishenka
    @date 03.09.2018. */

#include <iostream>
#include <assert.h>

void readArray (int* arr, size_t size) {
    for (size_t i{0}; i < size; ++i) {
        std::cin >> arr[i];
    }
}

template <typename T>
void printArray(T* arr, size_t size) {
    for (size_t i{0}; i < size; ++i) {
        std::cout << arr[i] << " ";
    }
}

size_t middleIndex (size_t left, size_t right) {
    return (right + left) / 2;
}

void minIndexArray (int* A, int* B, size_t aSize, size_t bSize) {
    size_t minIndexArray [bSize];
    for (size_t bIterator{0}; bIterator < bSize; ++bIterator) {
        int currentB = B[bIterator];

        if (currentB > A[aSize - 1]) {
            minIndexArray[bIterator] = aSize;
            continue;
        }

        size_t right{1};
        while (right < aSize && currentB > A[right]) {
            right *= 2;
        }

        size_t left = right / 2;

        if (right > aSize) {
            right = aSize - 1;
        }

        while (right - left > 1) {
            size_t middle = middleIndex(left, right);
            if (A[middle] >= currentB) {
                right = middle;
            } else {
                left = middle;
            }
        }

        minIndexArray[bIterator] = A[left] >= currentB ? left : right;
    }
    printArray(minIndexArray, bSize);
}



int main() {
    int n, m;

    std::cin >> n >> m;
    assert(n <= 10000);
    assert(m <= 10000);

    int A[n];
    int B[m];

    readArray(A, n);
    readArray(B, m);

    minIndexArray(A, B, n, m);
}
