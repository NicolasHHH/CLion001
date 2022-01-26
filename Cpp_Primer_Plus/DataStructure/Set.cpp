//
// Created by Tianyang HUANG on 18/01/2022.
//

#include <iostream>
#include <set>
#include <unordered_set>
using namespace std;

int main() {
    set<int> s = {7, 3, 4};
    s.insert(5);

    for (auto v: s) {
        cout << v <<" ";
    }
    cout <<  endl;

    unordered_set<int> us = {7, 3, 4};
    us.insert(5);

    for (auto v: us) {
        cout << v << " ";
    }
    cout<<  endl;

}