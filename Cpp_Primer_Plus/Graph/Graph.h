//
// Created by Tianyang HUANG on 18/01/2022.
//

#ifndef LION001_GRAPH_H
#define LION001_GRAPH_H

using namespace std;
#include <vector>;
#include <map>;
#include <list>;

class Graph {
public:
    Graph(vector<vector<int>> mat);
    Graph(map<int,list<int>> adj);
    void show();

    vector<int> neighbors(int vertex);

    vector<int> out(int vertex);
    vector<int> in(int vertex);

private:
    vector<vector<int>> matrix; // element as weight
    map<int,list<int>> adjacent; // change list to < , >
    void mat_adj();
    void adj_mat();
};


#endif //LION001_GRAPH_H
