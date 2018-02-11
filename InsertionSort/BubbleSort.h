//
// Created by Newterk on 2018/2/11.
//

#ifndef INSERTIONSORT_BUBBLESORT_H
#define INSERTIONSORT_BUBBLESORT_H

#include <iostream>
using namespace std;
/**
 * 冒泡排序
 * @tparam T
 * @param arr
 * @param n
 */
template <typename T>
void bubbleSort(T arr[],int n){
    for (int i = 0; i < n-1; ++i) {
        // 从左到右能移动就移动
        for (int j = 0; j<(n-1-i); ++j) {
            if(arr[j]>arr[j+1])
            swap(arr[j],arr[j+1]);
        }
    }
}

#endif //INSERTIONSORT_BUBBLESORT_H
