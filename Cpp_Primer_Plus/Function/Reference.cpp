//
// Created by Tianyang HUANG on 04/01/2022.
// 8.2.1

#include "Reference.h"
#include <iostream>
using namespace std;

int main(){
    string Elle = "Jane";
    string& MonAmour = Elle; // 铁索连环
    string* const ptr = &Elle; // 不能改变指向
    cout << Elle << " " << MonAmour << endl;
    cout << &Elle << " " << &MonAmour << endl;

    Elle += "ee";
    cout << Elle << " " << MonAmour << endl;
    cout << &Elle << " " << &MonAmour << endl;

    MonAmour += ".";
    cout << Elle << " " << MonAmour << endl;
    cout << &Elle << " " << &MonAmour << endl;

    string GreenTea = "Song";
    MonAmour = GreenTea; // reference 只能通过初始化来设置 不能后期赋值
    // ptr = &GreenTea;
    *ptr = GreenTea;
    cout << GreenTea << " " << MonAmour << " " << Elle << endl;
    cout << *ptr << " " << &MonAmour << endl;
    cout << ptr << " " << &GreenTea << endl;

    MonAmour = "Red";
    cout << Elle <<" "<< MonAmour<<" "<< GreenTea <<endl;
    GreenTea = "Pink";
    cout << Elle <<" "<< MonAmour<<" "<< GreenTea <<endl;

    string detective = MonAmour; // value
    detective = "Ming";
    cout << detective << " at " << &detective<<endl;
    cout << Elle <<" "<< MonAmour<<" "<< GreenTea <<endl;

    string& chocolate = MonAmour;
    chocolate = "King";
    cout << Elle <<" "<< MonAmour<<" "<< GreenTea << " "<<chocolate <<endl;
}