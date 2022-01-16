//
// Created by Tianyang HUANG on 06/01/2022.
//

#include "StdDeque.h"
#include <iostream>
#include <deque>

using namespace std;


int main() {

    deque <int> c1;
    c1.push_back(10);
    c1.push_front(20);
    c1.push_front(30);
    c1.push_front(40);

    const int& i = c1.at(0);  // returns a reference !!!
    int vi = c1.at(0);
    // i = 3; interdit de modifier la valeur d'une référence constante

    int& j = c1.at(2);
    cout << "The first element is " << i << " = " <<vi << endl; // 40=40
    cout << "The Third element is " << j << endl; // 20

    cout << "the last element : " << c1.back() <<endl;
    cout << "the first element : " << c1.front()<<endl;
    cout << "deque size of : " << c1.size()<<endl;
    // cout << c1.clear()

    { // deque::crbegin: Returns a const iterator to the first element in a reversed deque
        deque <int> v1;
        deque <int>::iterator Iter;
        deque <int>::const_reverse_iterator v1_rIter;

        v1.push_back(1);
        v1.push_back(2);
        v1.push_back(3);

        Iter = v1.begin();
        cout << "v1 =";
        for (Iter = v1.begin(); Iter != v1.end(); Iter++)
            cout << " " << *Iter;
        cout << endl;

        v1_rIter = v1.crbegin();  //v1.rbegin()
        cout << "The first element of the reversed deque is "
             << *v1_rIter << "." << endl;

        std::deque<int> first;                                // empty deque of ints
        std::deque<int> second(4, 100);                       // four ints with value 100
        std::deque<int> third(second.begin(), second.end());  // iterating through second
        std::deque<int> fourth(third);                       // a copy of third

        cout << "deque size of : " << c1.size()<<endl;
        c1.assign(7, 100);  // reassign
        cout << "the first element : " << c1.front()<<endl;
        cout << "deque size of : " << c1.size()<<endl;

        int MyInts[] = { 1776, 7, 4 , 6,99};
        third.assign(MyInts, MyInts + 3);   // assigning from array.
        cout << "the first element : " << third.back()<<endl;
        cout << "deque size of : " << third.size()<<endl;
    }


    { // deque::emplace: c++11, Construct and insert element
        // the next space following the pointer
        std::deque<int> mydeque = { 10, 20, 30 };

        auto it = mydeque.emplace(mydeque.begin() + 1, 100);
        mydeque.emplace(mydeque.begin(), 0);
        std::cout << "mydeque contains:";
        for (auto& x : mydeque)
            std::cout << ' ' << x;
        std::cout << '\n';
        mydeque.emplace(it, 200);
        mydeque.emplace(it , 90);
        std::cout << "mydeque contains:";
        for (auto& x : mydeque)
            std::cout << ' ' << x;
        std::cout << '\n';
        mydeque.emplace(it+1, 190);  !!!
        mydeque.emplace(mydeque.end(), 300);

        std::cout << "mydeque contains:";
        for (auto& x : mydeque)
            std::cout << ' ' << x;
        std::cout << '\n';
    }



    { // deque::emplace_back: c++11, Construct and insert element at the end
        std::deque<int> mydeque = { 10, 20, 30 };

        mydeque.emplace_back(100);
        mydeque.emplace_back(200);

        std::cout << "mydeque contains:";
        for (auto& x : mydeque)
            std::cout << ' ' << x;
        std::cout << '\n';
    }


}