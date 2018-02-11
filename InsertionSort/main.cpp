#include <iostream>
#include "SortTestHelper.h"
#include "SelectionSort.h"
#include "BubbleSort.h"
#include "ShellSort.h"

using namespace std;


/**
 * 插入排序  每次选到位置都要交换
 * @tparam T
 * @param arr
 * @param n
 */
template <typename T>
void insertionSort(T arr[] ,int n){
    for (int i=0;i<n;i++){
        //寻找arr[i]插入的合适的位置
        for (int j = i; j >0 && arr[j]<arr[j-1]; j--) {
            swap(arr[j],arr[j-1]);
        }
    }
}



/**
 * 插入排序  每次选到位置都要交换
 * @tparam T
 * @param arr
 * @param n
 */
template <typename T>
void insertionSort2(T arr[] ,int n){
    for (int i=0;i<n;i++){
        // 临时保存应该插入的值
        T e = arr[i];
        int j;//j保存e应该插入的位置
        // 判断e是否能插入到j的位置，如果j-1比e大，就不行，就移动j-1的值到j
        for (j = i; j>0 && arr[j-1] > e; j--) {
            arr[j]=arr[j-1];
        }
           arr[j]=e;
    }
}


int main() {
    int n=10000;
    int* arr = SortTestHelper::generateNearlyOrderdArray(n,100);
    int* arr2 = SortTestHelper::copyIntArray(arr,n);
    int* arr3 = SortTestHelper::copyIntArray(arr,n);
    int* arr4 = SortTestHelper::copyIntArray(arr,n);
    int* arr5 = SortTestHelper::copyIntArray(arr,n);

    SortTestHelper::testSort("InsertionSort ",insertionSort,arr,n);
    SortTestHelper::testSort("SelectionSort",selectionSort,arr2,n);
    SortTestHelper::testSort("InsertionSort2",insertionSort2,arr3,n);
    SortTestHelper::testSort("BubbleSort ",bubbleSort,arr4,n);
    SortTestHelper::testSort("ShellSort ",shellSort,arr5,n);

    delete[](arr);
    delete[](arr2);
    delete[](arr3);
    delete[](arr4);
    delete[](arr5);

    cout<<endl;
    return 0;
}