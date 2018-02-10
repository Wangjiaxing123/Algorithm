#include <iostream>
#include "SortTestHelper.h"
#include "Student.h"
using namespace std;

// 选择排序
template <typename T>
void selectionSort(T arr[],int n){
    for(int i=0;i<n;i++){
        int minIndex = i;
        // 找出最小值的索引
        for (int j=i+1;j<n;j++){
            if (arr[j]<arr[minIndex]){
                minIndex = j;
            }
        }
        if(i!=minIndex){
        swap(arr[i],arr[minIndex]);
        }
    }
}

int main() {

    int n=100000;
    int* arr = SortTestHelper::generateRandomArray(n,1,10);
    SortTestHelper::testSort("SelectSort",selectionSort,arr,n);
    delete[] arr;
    cout << endl;
    return 0;
}