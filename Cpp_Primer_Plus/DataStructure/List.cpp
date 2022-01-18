//
// Created by Tianyang HUANG on 18/01/2022.
//
#include <iostream>

#include <list> // std::list
using namespace std;

void show(list<string> l){
    for(auto i : l){
        cout << i<<" ";
    }
    cout << endl;
}

int main(){
    // declaration and initialization
   list<string> words{"hello","list"};

    words.push_front("push_front");
    words.emplace_front("emplace_front");
    words.push_back("push_back");
    words.emplace_back("emplace_back");
    show(words);

    words.insert(words.begin(), "insert1");
    words.insert(++words.begin(), "insert2");
    show(words);

    words.remove("push_front");
    show(words);

    list<string>::iterator beg_iter = words.begin();
    list<string>::iterator end_iter = words.end();

    cout<<"  beg_iter:"<< *beg_iter <<endl;
    cout<<"++beg_iter:"<< *(++beg_iter) <<endl;
    cout<<"  end_iter:"<< *end_iter <<endl;
    cout<<"--end_iter:"<< *(--end_iter) <<endl;
    cout<<"  end_iter:"<< *end_iter <<endl;

    list<string> ps{"merci","au revoir"};
    words.merge(ps);
    show(words);
    show(ps);
}