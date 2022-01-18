//
// Created by Tianyang HUANG on 18/01/2022.
//
#include <iostream>
#include <queue>
using namespace std;

int main() {
    priority_queue<int> pq;
    pq.emplace(3);
    pq.push(2);
    pq.push(6);

    cout<< pq.top();


}