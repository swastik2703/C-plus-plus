#include<unordered_map>
#include<list>
#include<queue>
using namespace std;
bool isCyclicDFS(int node, int parent, unordered_map<int,bool> &visited, unordered_map<int,list<int> > &adjList){
    //visited node ko true mark karo
    visited[node] = true;
    
    //neighbours nikalo
    for(auto neighbour:adjList[node]){
        //if not visited
        if(!visited[neighbour]){
            bool detectCycle = isCyclicDFS(neighbour,node,visited,adjList);
            if(detectCycle){
                return true;
            }
        }
        else if(neighbour != parent){
                return true;
            }
    }
    return false;
}

string cycleDetection (vector<vector<int>>& edges, int n, int m)
{
    unordered_map<int,list<int> > adjList;
    //create adjacency list
    for(int i=0; i<m; i++){
        int u = edges[i][0];
        int v = edges[i][1];
        
        adjList[u].push_back(v);
        adjList[v].push_back(u);
    }
    
    unordered_map<int,bool> visited;
    //to handle disconnected component
    for(int i=0; i<n; i++){
        if(!visited[i]){
            bool ans = isCyclicDFS(i,-1,visited,adjList);
            if(ans == 1){
                return "Yes";
            }
        }
        
    }
    return "No";
}
