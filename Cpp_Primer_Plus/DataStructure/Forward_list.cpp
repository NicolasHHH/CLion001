//
// Created by Tianyang HUANG on 18/01/2022.
//


#include <iostream>

#include <forward_list> //
using namespace std;

void show(forward_list<string> l){
    for(auto i : l){
        cout << i<<" ";
    }
    cout << endl;
}

int main() {
    // declaration and initialization
    forward_list<string> words{"hello", "list"};

    words.push_front("push_front");
    words.emplace_front("emplace_front");
    // words.push_back("push_back");
    // words.emplace_back("emplace_back");
    show(words);

    auto count = distance(begin(words),end(words));
    cout << count<<endl;

    words.insert_after(words.begin(),"before 2");
    words.insert_after(words.before_begin(),"before 1");
    show(words);
}