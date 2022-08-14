#include<unordered_map>
#include<list>
#include<queue>
#include<vector>
using namespace std;
int detectCycleInDirectedGraph(int n, vector < pair < int, int >> & edges){
    unordered_map<int,list<int>>adj;
    for(int i=0; i<edges.size(); i++){
        int u = edges[i].first -1;
        int v = edges[i].second -1;
        //since there is a direct edge
        adj[u].push_back(v);
    }
    
    //neighbour dekh lo ya find all indegree
    vector<int> inDegree(n);
    for(auto i:adj){
        for(auto j:i.second){
            inDegree[j]++;
        }
    }
    
    //uske baad check kro kya 0 hai if yes push into queue
    queue<int> q;
    for(int i=0; i<n; i++){
          if(inDegree[i] == 0){
              q.push(i);
          }
    }
    
    //BFS call krdo
    int count = 0;
    while(!q.empty()){
        int frontNode = q.front();
        q.pop();
        
        //increment krte jao bus
        count++;
        
        //indegree ko update krdo mtlb -- krdo
        for(auto neighbour: adj[frontNode]){
            inDegree[neighbour]--;
            if(inDegree[neighbour] == 0){
                q.push(neighbour);
            }
        }
    }
    if(count == n)
        return false;    //cycle is not present i.e valid topo sort
    else
        return true;
} 
  
