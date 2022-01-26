//
// Created by Tianyang HUANG on 26/01/2022.
// LeetCode 684

#include <vector>
#include <iostream>
using namespace std;
#include <unordered_set>


vector<int> findRedundantConnectionFalse(vector<vector<int>>& edges) {
    int size = edges.size();
    unordered_set<int> visited = {};
    vector<int> result = {};
    for(int i = 0;i<size;i++){
        bool v1 = (visited.find(edges[i][0])==visited.end()); // true is not visited
        bool v2 = (visited.find(edges[i][1])==visited.end());
        //cout << v1 << " "<<v2<<endl;
        if (v1 == false && v2 == false){
            result = edges[i];
        }
        else{
            if (v1 == true){
                visited.insert(edges[i][0]);
            }
            if(v2 == true){
                visited.insert(edges[i][1]);
            }
        }
    }
    return result;
}

int find(vector<int>& uf,int i){
    if (i == uf[i]){
        return i;
    }
    else{
        uf[i] =  find(uf,uf[i]);
        return uf[i];
    }
}

vector<int> findRedundantConnection(vector<vector<int>>& edges) {

    int size = 0;
    size = edges.size();
    vector<int> UF(size+1);
    for (int i = 0; i < size+1; i++) {
        UF[i]=i;
    }
    vector<int> result = {};
    for (int i = 0; i < size; i++) {
        if(find(UF,edges[i][0]) == find(UF,edges[i][1])){
            result = edges[i];
        }
        else{
            UF[find(UF,edges[i][0])] = find(UF,edges[i][1]); // parent 1 = parent 2
        }
    }
    return result;
}


int main(){
    vector<vector<int>> edges = {{9,10},{5,8},{2,6},{1,5},{3,8},{4,9},{8,10},{4,10},{6,8},{7,9}};
    vector<int> result = findRedundantConnection(edges);
    cout<<result[0]<<" "<<result[1];
}