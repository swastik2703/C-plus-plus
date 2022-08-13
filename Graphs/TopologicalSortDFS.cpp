#include<unordered_map>
#include<list>
#include<stack>
#include<vector>
using namespace std;

void topoSort(int node,vector<bool> &visited,stack<int> &s, unordered_map<int,list<int>> &adj){
    visited[node] = 1;
    
    //neighbour nikalo
    for(auto neighbour:adj[node]){
        if(!visited[neighbour]){
            topoSort(neighbour,visited,s,adj);
        }
    }
    //bhr aake 
    s.push(node);
}

vector<int> topologicalSort(vector<vector<int>> &edges, int v, int e)  {
    //create a adjacency list
    unordered_map<int,list<int>> adj;
    for(int i=0; i<e; i++){
        int u = edges[i][0];
        int v = edges[i][1];
        
        adj[u].push_back(v);
    }
    
    //dfs topological sort
    vector<bool> visited(v);
    stack<int> s;
    for(int i=0; i<v; i++){
        if(!visited[i]){
            topoSort(i,visited,s,adj);
        }
    }
        
        //hame toh vector ki form mai ans lana hai
        vector<int> ans;
        while(!s.empty()){
            ans.push_back(s.top());
            s.pop();
        }
    return ans;
}