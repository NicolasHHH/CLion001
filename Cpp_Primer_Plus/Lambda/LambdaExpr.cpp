//
// Created by Tianyang HUANG on 15/01/2022.
//

#include "LambdaExpr.h"

#include <iostream>
#include <cmath>
#include <vector>

using namespace std;

// functor example
class Linear{
private:
    double b; // intercept
    double k; // slope
public:
    Linear(double slope = 1, double intercept = 0) : k(slope), b(intercept) {}
    double operator()(double x) { return b + k * x;}
};

// functions
bool f3(int x){return x%3 == 0;}
bool f13(int x){return x%13 == 0;}

// functor
class f_mod{
private:
    int dev;
public:
    f_mod(int d):dev(d){}
    bool operator()(int x){ return x%dev == 0;}
};


int main() {
    Linear f1;
    Linear f2(5,10);
    cout << f1(3)<<" "<<f2(3)<< endl;

    vector<int> numbers(1000);
    generate(numbers.begin(),numbers.end(),rand);
    cout << numbers[0] << " " << numbers[1] <<endl;

    // functions
    int count3 =  count_if(numbers.begin(),numbers.end(),f3);
    int count13 =  count_if(numbers.begin(),numbers.end(),f13);
    cout << "count3 : "<< count3 << " count13 : " << count13 <<endl;

    // functor
    count3 =  count_if(numbers.begin(),numbers.end(),f_mod(3));
    count13 =  count_if(numbers.begin(),numbers.end(),f_mod(13));
    cout << "count3 : "<< count3 << " count13 : " << count13 <<endl;

    // Lambda Expr
    count3 =  count_if(numbers.begin(),numbers.end(), [](int x){return x%3==0;});
    count13 =  count_if(numbers.begin(),numbers.end(),[](int x){return x%13==0;});
    cout << "count3 : "<< count3 << " count13 : " << count13 <<endl;

    // the auto-determination of return value is valid iif there's only one return phrase.
    cout << [](double x)->double{int y = x;return x-y;}(3.8)<<endl; // decimal part

    // we can assign a name to Lambda Expr for repeated use
    auto Lambda_mod7 = [](int x){return x%7==0;};
    int count7 =  count_if(numbers.begin(),numbers.end(), Lambda_mod7);
    cout << "count7 : "<< count7<<endl;

    count7 = 0;
    std::for_each(numbers.begin(),numbers.end(),[&count7](int x){count7 += x%7==0;});
    cout << "count7 : "<< count7<<endl;


}

