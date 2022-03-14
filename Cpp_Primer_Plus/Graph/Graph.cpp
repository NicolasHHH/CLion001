//
// Created by Tianyang HUANG on 18/01/2022.
//

#include "Graph.h"
#include <iostream>
using namespace std;

Graph::Graph(vector <vector<int>> mat):matrix(mat) {
    // mat_adj();
}
Graph::Graph(map<int, list<int>> adj):adjacent(adj) {
    // adj_mat();
}

vector<int> Graph::neighbors(int vertex){
    vector<int> neighbors = {};
    for(int i = 0; i<matrix[0].size();i++){
        if (matrix[vertex][i]!=0){
            neighbors.push_back(i);
        }
    }
    return neighbors;
}

vector<int> Graph::out(int vertex){
    vector<int> neighbors = {};
    for(int i = 0; i<matrix[0].size();i++){
        if (matrix[vertex][i]!=0){
            neighbors.push_back(i);
        }
    }
    return neighbors;
}

vector<int> Graph::in(int vertex){
    vector<int> neighbors = {};
    for(int i = 0; i<matrix[0].size();i++){
        if (matrix[i][vertex]!=0){
            neighbors.push_back(i);
        }
    }
    return neighbors;
}

int main(){
    vector<vector<int>> demo = {  {0,1,0,0},
                                  {0,0,1,0},
                                  {0,1,0,0},
                                  {1,0,1,0}};
    Graph G = Graph(demo);
    



}
