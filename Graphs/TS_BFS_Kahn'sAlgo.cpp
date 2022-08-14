#include<unordered_map>
#include<list>
#include<queue>
#include<vector>
using namespace std;
vector<int> topologicalSort(vector<vector<int>> &edges, int v, int e)  {
    //create a adjacency list
    unordered_map<int,list<int>>adj;
    for(int i=0; i<e; i++){
        int u = edges[i][0];
        int v = edges[i][1];
        //since there is a direct edge
        adj[u].push_back(v);
    }
    
    //neighbour dekh lo ya find all indegree
    vector<int> inDegree(v);
    for(auto i:adj){
        for(auto j:i.second){
            inDegree[j]++;
        }
    }
    
    //uske baad check kro kya 0 hai if yes push into queue
    queue<int> q;
    for(int i=0; i<v; i++){
          if(inDegree[i] == 0){
              q.push(i);
          }
    }
    
    //DFS call krdo
    vector<int> ans;
    while(!q.empty()){
        int frontNode = q.front();
        q.pop();
        
        ans.push_back(frontNode);
        
        //indegree ko update krdo mtlb -- krdo
        for(auto neighbour: adj[frontNode]){
            inDegree[neighbour]--;
            if(inDegree[neighbour] == 0){
                q.push(neighbour);
            }
        }
    }
    return ans;
}