//
// Created by Tianyang HUANG on 18/01/2022.
//

#include <iostream>

#include <queue> // can not enumerate
using namespace std;

int main(){
    queue<int> s;
    s.push(1);
    cout << s.front()<<" "<<s.back()<<endl;
    s.push(2);
    cout << s.front()<<" "<<s.back()<<endl;
    s.push(3);
    cout << s.front()<<" "<<s.back()<<endl;
    s.push(4);
    cout << s.front()<<" "<<s.back()<<endl;

    s.pop();
    cout << s.front()<<" "<<s.back()<<endl;

    cout << s.size()<<endl;

}
