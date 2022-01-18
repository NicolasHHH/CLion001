//
// Created by Tianyang HUANG on 18/01/2022.
//
#include <iostream>

#include <vector> // std::vector

using namespace std;

void show(vector<int> vect){
    for(auto i : vect){
        cout << i<<" ";
    }
    cout << endl;
}

int main(){
    vector<int> v;
    v.reserve(20);
    vector<int> v2 = {2,4,5,7};
    vector<int> v3 = {std::begin(v2),std::end(v2)};

    show(v);
    show(v2);
    show(v3);

    cout << "v.size()  = "<< v.size() << endl;
    cout << "v2.size() = "<< v2.size() << endl<<endl;

    cout << "v.empty()  : " << v.empty() << endl;
    cout << "v2.empty() : " << v2.empty() << endl<<endl;

    cout << "v2[0] : "<<v2[0]<<" v2.at(1) : "<<v2.at(1) <<endl<<endl;

    v2.push_back(9);
    v2.emplace_back(11);
    show(v2);

    v2.erase(v2.begin());
    show(v2);
    v2.pop_back();
    show(v2);

    v2.insert(v2.begin(),3);
    v2.insert(v2.end(),13);
    show(v2);

}