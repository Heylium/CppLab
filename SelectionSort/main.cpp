#include <future>
#include <iostream>

#include "SortTestHelper.h"
#include "Student.h"


template<typename T>
void selectionSort(T arr[], int n) {
    for (int i = 0; i < n; i++) {
        int minIndex = i;
        for (int j = i + 1; j < n; j++) {
            if (arr[j] < arr[minIndex])
                minIndex = j;
        }
        std::swap(arr[i], arr[minIndex]);
    }
}

int main() {
    std::cout << "Hello, World!" << std::endl;
    // int a[10] = { 10, 9, 8,7,6,5,4,3,2,1};
    int n = 10000;
    int *arr = SortTestHelper::generateRandomArray(n, 0, n);
    SortTestHelper::testSort("Selection Sort", selectionSort, arr, n);

    // selectionSort(arr, n);
    // SortTestHelper::printArray(arr, n);
    // std::cout << std::endl;
    delete[] arr;

    // Student d[4] = { {"D", 90}, {"C", 100}, {"B", 95}, {"A", 95} };
    // selectionSort(d, 4);
    // for (int i = 0; i < 4; i++) {
    //     std::cout << d[i];
    // }
    // std::cout << endl;

    return 0;
}
