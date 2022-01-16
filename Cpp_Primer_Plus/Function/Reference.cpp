//
// Created by Tianyang HUANG on 04/01/2022.
//

#include "Reference.h"
#include <iostream>
using namespace std;

int main(){
    string Elle = "Jane";
    string& MonAmour = Elle;
    string* const ptr = &Elle;
    cout << Elle << " " << MonAmour << endl;
    cout << &Elle << " " << &MonAmour << endl;

    Elle += "ee";
    cout << Elle << " " << MonAmour << endl;
    cout << &Elle << " " << &MonAmour << endl;

    MonAmour += ".";
    cout << Elle << " " << MonAmour << endl;
    cout << &Elle << " " << &MonAmour << endl;

    string GreenTea = "Song";
    MonAmour = GreenTea;
    // ptr = &GreenTea;
    *ptr = GreenTea;
    cout << GreenTea << " " << MonAmour << endl;
    cout << *ptr << " " << &MonAmour << endl;
    cout << ptr << " " << &GreenTea << endl;

}