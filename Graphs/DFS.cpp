#include<unordered_map>
#include<list>
#include<iostream>
#include<vector>
using namespace std;
void DFS(int node, unordered_map<int,bool> &visited, unordered_map<int,list<int>> &adjList,  vector<int> &component){
    //sabse phle jo node ayi hai ans mai ya component mai store kra lo
    component.push_back(node);
    //us node ko visited mark krdo
    visited[node] = true;
    
    //her connected node ke liye recursive call mar do
    for(auto i:adjList[node]){
        if(!visited[i]){
            DFS(i,visited,adjList,component);
        }
    }
}

vector<vector<int>> depthFirstSearch(int V, int E, vector<vector<int>> &edges)
{
   unordered_map<int,list<int>> adjList;
    for(int i=0; i<edges.size(); i++){
        int u = edges[i][0];
        int v = edges[i][1];
        
        adjList[u].push_back(v);
        adjList[v].push_back(u);
    }
    
    vector<vector<int>> ans;
    unordered_map<int,bool> visited;
    
    for(int i=0; i<V; i++){
        if(!visited[i]){
            vector<int> component;
            DFS(i,visited,adjList,component);
            ans.push_back(component);
        }
    }
    return ans;
}