//
// Created by Tianyang HUANG on 18/01/2022.
//

#include <iostream>
#include <stack>

using namespace std;


int main(){

    stack<int> s;

    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);

    s.pop();

    cout << "top=" << s.top() << endl;

    cout << s.size()<<endl;

}