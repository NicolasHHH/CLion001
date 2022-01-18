//
// Created by Tianyang HUANG on 18/01/2022.
//

#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

void show(vector<int> vect){
    for(auto i : vect){
        cout << i<<" ";
    }
    cout << endl;
}

int main(){

    vector<int> nums = {6,20,7,3,5};
    make_heap(nums.begin(),nums.end());
    show(nums);

    nums.push_back(40);
    show(nums);
    push_heap(nums.begin(),nums.end());
    show(nums);

    pop_heap(nums.begin(),nums.end());
    show(nums);
    nums.pop_back();
    show(nums);

    // specify compare
    make_heap(nums.begin(),nums.end(),[](int a,int b){return a>b;});
    show(nums);

}