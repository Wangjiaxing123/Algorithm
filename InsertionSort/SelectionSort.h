//
// Created by Newterk on 2018/2/11.
//

#ifndef INSERTIONSORT_SELECTIONSORT_H
#define INSERTIONSORT_SELECTIONSORT_H

#include <iostream>

using namespace std;
/**
 * 选择排序
 * @tparam T
 * @param arr
 * @param n
 */
template <typename T>
void selectionSort(T arr[],int n){
    for (int i = 0; i < n; ++i) {
        int minIndex = i;
        for (int j = i+1; j <n ; ++j) {
            if(arr[minIndex]>arr[j]){
                minIndex = j;
            }
        }
        if(minIndex!=i){
            swap(arr[i],arr[minIndex]);
        }
    }
}
#endif //INSERTIONSORT_SELECTIONSORT_H
