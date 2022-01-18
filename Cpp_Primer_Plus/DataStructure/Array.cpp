//
// Created by Tianyang HUANG on 18/01/2022.
//

#include <iostream>

#include <array> // std::array : fixed size list

using namespace std;

int main(){
    // declaration and initialization
    array<int,5> a;
    a = {2,4,6,8,10};

    // enumerate
    cout <<"Enumerate : ";
    for (const auto i : a) {
        cout << i<<" " ;
    }
    cout << endl << endl;

    cout << "Get array size :" <<endl;
    cout << "Size = "<< a.size() << endl<<endl;

    cout << "Check if its empty :" <<endl;
    cout << "a.empty() :  "<< a.empty() << endl<<endl;

    cout << "Access element value : "<<endl;
    cout << "a[0] = " << a[0]<< endl;
    cout << "a.at(0)" << a.at(0) << endl;
    cout << "prefer .at() as it checks the bounds"<<endl<<endl;
}