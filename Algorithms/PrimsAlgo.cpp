#include<unordered_map>
#include<list>
#include<climits>
#include<vector>
using namespace std;
vector<pair<pair<int, int>, int>> calculatePrimsMST(int n, int m, vector<pair<pair<int, int>, int>> &g)
{
    //sabse phle adjacency list bnao
    unordered_map<int,list<pair<int,int>> > adj;    //bhai weighths bhi toh chahiye na
    for(int i=0; i<g.size(); i++){
        int u = g[i].first.first;
        int v = g[i].first.second;
        int w = g[i].second;
        
        adj[u].push_back(make_pair(v,w));
        adj[v].push_back(make_pair(u,w));
    }
    
    //since we require 3 data structure
    vector<int> key(n+1);    
    //n+1 kyu? because mai node ko same index se point kr rha hu
    vector<int> parent(n+1);
    vector<int> mst(n+1);
    
    //initialise krdo 
    for(int i=0; i<=n; i++){
        key[i] = INT_MAX;
        parent[i] = -1;
        mst[i] = false;
    }
    
    //algorithm start krte hai
    //jaha se start ho rha hai uski key ko 0 mark kro
    key[1] = 0;
    parent[1] = -1;
    
    for(int i=1; i<n; i++){
        //mini ko max kardo
        int mini = INT_MAX;
        //min vali node ko dekho key mai kaha hai
        int u;
        for(int v=1; v<=n; v++){
            //mst ko mark bhi toh karna hai kb kroge
            if(mst[v] == false && key[v] < mini){
                u = v;
                //key ko update krdo mini se
                mini = key[v];
            }
        }
        // mst ko true update krdo
        mst[u] = true;
        
        //neighbours toh nikalo mere bhai
        for(auto neighbour:adj[u]){
            int v = neighbour.first;
            int w = neighbour.second;
            if(mst[v] == false && w < key[v]){
                parent[v] = u;
                key[v] = w;
            }
        }
    }
    
    //ans bna lo
    vector<pair<pair<int, int>, int>> ans;
    for(int i=2; i<=n; i++){
        //2 se kyu? kyoki 1 mai toh already -1 pada hai
        ans.push_back({{parent[i],i}, key[i]});
    }
    return ans;
}
