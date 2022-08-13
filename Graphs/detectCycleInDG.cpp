#include<unordered_map>
#include<list>
#include<vector>
using namespace std;

//function toh bnao uncle
bool isCycle(int node, unordered_map<int,bool> &visited, unordered_map<int,bool> &dfsVisited, unordered_map<int, list<int> > &adjList){
    visited[node] = true;
    dfsVisited[node] = true;
    
    //neighbours check kro
    for(auto neighbour: adjList[node]){
        if(!visited[neighbour]){  
             bool isCycleDetected = isCycle(neighbour,visited,dfsVisited,adjList);
             if(isCycleDetected)
                return true;    
        }
            else if(dfsVisited[neighbour]){
                return true;
            }
    }
    //jab vapis aao toh dfs ko false krdena
    dfsVisited[node] = false;
    return false;
}


int detectCycleInDirectedGraph(int n, vector < pair < int, int >> & edges){
    unordered_map<int, list<int> > adjList;
    for(int i=0; i<edges.size(); i++){
        int u = edges[i].first;
        int v = edges[i].second;
    
        adjList[u].push_back(v);
    }
    
    unordered_map<int,bool> visited;
    unordered_map<int,bool> dfsVisited;
    for(int i=1; i<=n; i++){
        if(!visited[i]){
            bool ansFound = isCycle(i,visited,dfsVisited,adjList);
            if(ansFound)
                return true;
        }
    }
    return false;
} 
  
