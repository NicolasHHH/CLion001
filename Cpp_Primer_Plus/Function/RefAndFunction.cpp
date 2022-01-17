//
// Created by Tianyang HUANG on 17/01/2022.
// 8.2.2
// reference as params of a function 按引用传递

#include "RefAndFunction.h"
#include <iostream>
using namespace std;
void swapR(int& a, int& b); // alias
void swapP(int* a, int* b); // pointers
void swapS(int* a, int* b); // address values
void swapV(int a, int b);  // values ?

int main(){

    // compare pointer and reference with the SWAP function
    int x = 3;
    int y = 6;
    int z = 9;

    swapR(x,y);
    cout << x<<y<<z<<endl; // 639

    swapP(&y,&z);
    cout << x<<y<<z<<endl; // 693

    swapS(&y,&z);
    cout << x<<y<<z<<endl; // 693

    swapV(x,z);
    cout << x<<y<<z<<endl; // 693
}
void swapR(int& a, int& b){
    int c = a;
    a = b;
    b = c;
}
void swapP(int* a, int* b){
    int c = *a;
    *a = *b;
    *b = c;
}
void swapS(int* a, int* b){
    int* c = a;
    a = b;
    b = c;
}
void swapV(int a, int b){
    int c = a;
    a = b;
    b = c;
}



