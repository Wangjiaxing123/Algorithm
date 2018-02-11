//
// Created by Newterk on 2018/2/11.
//

#ifndef INSERTIONSORT_SHELLSORT_H
#define INSERTIONSORT_SHELLSORT_H

#include <iostream>
using  namespace std;
/**
 * 希尔排序
 * @tparam T
 * @param arr
 * @param n
 */
template <typename T>
void shellSort(T arr[],int n){
    for (int step = n/2;step>0;step/=2){//步长逐渐减小
        for(int i=0;i<step;++i){//根据步长分组
            //对每组进行插入排序
            for(int j=i;j<n-step;j+=step){
                for(int k=j;k<n ;k+=step){
                    if(arr[j]>arr[k]){
                        swap(arr[j],arr[k]);
                    }
                }
            }
        }
    }
}
#endif //INSERTIONSORT_SHELLSORT_H
