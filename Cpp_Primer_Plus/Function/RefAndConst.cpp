//
// Created by Tianyang HUANG on 17/01/2022.
// 8.2.3

#include "RefAndConst.h"
#include <iostream>
using namespace std;

double Cube(double& x){
    return x*x*x;
}

double refCube(const double& x){
    return x*x*x;
}

int main(){
    double x = 2.0;
    cout << refCube(x)<<endl;
    // double z = refCube(x+3.0); invalid : x+3.0 is not a variable

    cout << refCube(7.0)<<endl; // valid, x is a temporary variable


    const double y = 5.0;
    // cout << Cube(y);  invalid : lose const qualification
    cout << refCube(y)<<endl;

    // 3 reasons for using const &:
    //   - avoid unintentional modification of referenced params
    //   - such functions can deal with const and non-const variables
    //   - allow functions to correctly generate and use temporary variables

}