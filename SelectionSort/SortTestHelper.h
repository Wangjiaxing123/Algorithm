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
    // ����n��Ԫ�ص��������,ÿ��Ԫ�ص������ΧΪ[rangeL,rangeR]

    int* generateRandomArray(int n,int rangeL,int rangeR){

        assert(rangeL<rangeR);

        int *arr = new int[n];
        srand(time(NULL));
        for(int i=0;i<n;i++){
            arr[i]=rand()%(rangeR-rangeL+1)+rangeL;
        }
        return arr;
    }
    // ��ӡ����
    template <typename T>
    void printArray(T arr[],int n){
        for (int i=0;i<n;i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }
    // �����Ƿ�������
    template <typename T>
    bool isSorted(T arr[],int n){
        for(int i=0;i<n;i++){
            if((i!=n-1)&&(arr[i]>arr[i+1])){
                cout<<"�������"<<endl;
                return false;
            }
        }
        return  true;
    }

    //��������ʱ��
    template <typename T>
    void testSort(string sortName,void (*sort)(T[], int),T arr[],int n){

        clock_t startTime = clock();
        sort(arr,n);
        clock_t endTime = clock();
        assert(isSorted(arr,n));
        cout<<sortName<<" cost :  "<<double(endTime-startTime)/CLOCKS_PER_SEC<<" s";
    }

}

#endif //DEMO1_SORTTESTHELPER_H
