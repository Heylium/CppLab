//
// Created by TuanHsiang on 24-7-22.
//

#ifndef SELECTIONSORT_SORTTESTHELPER_H
#define SELECTIONSORT_SORTTESTHELPER_H

#include <cassert>
#include <iostream>
#include <ctime>

using namespace std;

namespace SortTestHelper {
    /**
     *
     * @param n element count
     * @param rangeL left close range
     * @param rangeR right close range
     * @return
     */
    int* generateRandomArray(int n, int rangeL, int rangeR) {
        assert(rangeL <= rangeR);

        int *arr = new int[n];
        srand(time(nullptr));
        for (int i = 0; i < n; ++i) {
            arr[i] = rand() % (rangeR - rangeL + 1) + rangeL;
        }
        return arr;
    }

    template<typename T>
    void printArray(T arr[], int n) {
        for (int i = 0; i < n; ++i) {
            cout<< arr[i] << " ";
        }
        cout<<endl;
    }

    template<typename T>
    bool isSorted(T arr[], int n) {
        for (int i = 0; i < n -1; ++i) {
            if (arr[i] > arr[i+1]) {
                return false;
            }
        }
        return true;
    }

    template<typename T>
    void testSort(const string &sortName, void(*sort)(T[], int), T arr[], int n) {

        const clock_t startTime = clock();
        sort(arr, n);
        const clock_t endTime = clock();

        assert(isSorted(arr, n));
        cout<< sortName << ": " << double(endTime - startTime) / CLOCKS_PER_SEC << " s" << endl;
    }



}

#endif //SELECTIONSORT_SORTTESTHELPER_H
