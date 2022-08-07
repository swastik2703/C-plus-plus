#include<iostream>
#include<vector>
using namespace std;
vector < vector < int >> printAdjacency(int n, int m, vector < vector < int >> & edges) {
     //jitni bhi neighbouring nodes hai sari nikal lo
    vector<vector<int>> ans(n);
    for(int i=0; i<m; i++){
        int u = edges[i][0];
        int v = edges[i][1];
        
        // ans mai push krdo
        ans[u].push_back(v);
        ans[v].push_back(u);
    }
    
    //adjacency list bna lo
    vector<vector<int>> adj(n);
    for(int i=0; i<n; i++){
        //0 ke liye 0 list 1 ke liye 1 list and so on therefore
        adj[i].push_back(i);
    //jitne bhi neighbours hai ab vo daal do
    //neighbouring nodes kaha hongi ans array mai
    for(int j=0; j<ans[i].size(); j++){
        adj[i].push_back(ans[i][j]);
    }
    }
    return adj;
}