//
// Created by Newterk on 2018/2/10.
//

#ifndef DEMO1_SORTTESTHELPER_H
#define DEMO1_SORTTESTHELPER_H
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <cassert>

using namespace std;
namespace SortTestHelper{
    // 生成n个元素的随机数组,每个元素的随机范围为[rangeL,rangeR]

    int* generateRandomArray(int n,int rangeL,int rangeR){

        assert(rangeL<rangeR);

        int *arr = new int[n];
        srand(time(NULL));
        for(int i=0;i<n;i++){
            arr[i]=rand()%(rangeR-rangeL+1)+rangeL;
        }
        return arr;
    }
    // 打印数组
    template <typename T>
    void printArray(T arr[],int n){
        for (int i=0;i<n;i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }
    // 数组是否已排序
    template <typename T>
    bool isSorted(T arr[],int n){
        for(int i=0;i<n;i++){
            if((i!=n-1)&&(arr[i]>arr[i+1])){
                cout<<"有情况！"<<endl;
                return false;
            }
        }
        return  true;
    }

    //测试排序时间
    template <typename T>
    void testSort(string sortName,void (*sort)(T[], int),T arr[],int n){

        clock_t startTime = clock();
        sort(arr,n);
        clock_t endTime = clock();
        assert(isSorted(arr,n));
        cout<<sortName<<" cost :  "<<double(endTime-startTime)/CLOCKS_PER_SEC<<" s \n";
    }

    // 拷贝数组
    int* copyIntArray(int a[],int n){
        int* arr = new int[n];
        copy(a,a+n,arr);
        return arr;
    }

    // 生成几乎有序的数组
    int* generateNearlyOrderdArray(int n,int swapTimes){
        int* arr = new int[n];
        for(int i=0;i<n;i++){
            arr[i]=i;
        }
        srand(time(NULL));
        for (int i = 0; i < swapTimes; ++i) {
            int posx = rand()%n;
            int posy = rand()%n;
            swap(arr[posx],arr[posy]);
        }
        return arr;
    }

}

#endif //DEMO1_SORTTESTHELPER_H
