//
// Created by Tianyang HUANG on 18/01/2022.
//

#include <iostream>
#include <map>
#include <unordered_map>
using namespace std;

int main() {

    map<int,string> m =  {{2014, "iOS"},{2015, "Android"},};
    cout << m[2014]<<endl;

    m[2016] ="Google";

    m.insert({{2017,"Mi"}, {2018,"Harmony"}});

    cout<< "size = "<< m.size() <<endl;

    for(pair<int,string> v:m){
        cout<<v.first << " = "<<v.second<<endl;
    }

}