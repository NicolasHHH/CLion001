//
// Created by Tianyang HUANG on 04/01/2022.
//

#include "ConstAndPointer.h"
#include <iostream>
using namespace std;

int main(){

    // const int* ================================================================================
    //  int -> const int* ----------------
    int age = 39;
    int num = 100;
    const int* ptr = &age;  // 不能通过*ptr赋值，但是可以改变指向，也可以通过变量名赋值。
    cout << ptr <<endl;
    cout << *ptr <<endl;

    age = 38;
    cout << ptr <<endl;
    cout << *ptr <<endl;

    // *ptr = 36 ;

    ptr = &num;
    cout << num <<endl;
    cout << ptr <<endl;
    cout << *ptr <<endl;

    // const int -> const int* --------------
    const int id = 310;
    const int* ptr_id = &id;
    cout << ptr_id <<endl;
    cout << *ptr_id <<endl;

    // id = 200; // invalid
    // *ptr_id = 200; // invalid

    // const int ->  int* -----------------
    // int* ptr_inv = &id;

    // indirect const pointer =========================================================================
    int* ptr_age = &age;
    const int* ptr_ptr_age = ptr_age;
    cout << "ptr_age:  " << ptr_age <<endl;
    cout << "*ptr_age: " << *ptr_age <<endl;
    cout << "ptr_ptr_age:  " << ptr_ptr_age <<endl;
    cout << "*ptr_ptr_age: " << *ptr_ptr_age <<endl;

    // int* const ptr =========================================================================
    int sloth = 3;
    int* const ptr_const = &sloth; // 不能改变指向，但是通道已经建立：可以通过指针赋值
    cout << "ptr_const:  " << ptr_const <<endl;
    cout << "*ptr_const: " << *ptr_const <<endl;

    sloth = 4;
    *ptr_const = 5;
    cout << "ptr_const:  " << ptr_const <<endl;
    cout << "*ptr_const: " << *ptr_const <<endl;

    // ptr_const = &age; // invalid

}