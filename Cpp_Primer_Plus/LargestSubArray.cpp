//
// Created by Tianyang HUANG on 09/12/2021.
//

#include "LargestSubArray.h"
#include <iostream>
using namespace std;
int largestSum(int arr[],int len);
int max(int  ,int );
int main() {
    int arr[] = {1,2,-6,10,-5,5,4};
    int len = sizeof(arr)/sizeof(arr[0]);
    cout << largestSum(arr,len);
    return 0;
}

int largestSum(int arr[],int len){
    int sum =0;
    int F[len];
    int S[len];
    F[0] = 1;
    S[0] = 0;
    for(int i =1;i<len;i++){
        F[i] = max(arr[i],F[i-1]+arr[i]) ;
        S[i] = max(S[i-1],F[i]);
    }
    return S[len-1];
}
int max(int a, int b){
    if (a>b) return a;
    else return b;
}
