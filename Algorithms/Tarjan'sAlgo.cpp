#include<iostream>
#include<vector>
#include<unordered_map>
#include<list>
using namespace std;

int min(int a, int b){
    if(a<b)
        return a;
    return b;
}

void dfs(int node, int parent, int &timer, vector<int> &dis, vector<int> &low, unordered_map<int,list<int>> &adj, unordered_map<int,bool> &vis, vector<int> &AP){
    vis[node] = true;
    int child = 0;
    dis[node] = low[node] = timer++; 
    //neighbour nikalo
    for(auto nbr:adj[node]){
        if(nbr == parent)
            continue;
        if(!vis[nbr]){
            dfs(nbr,node,timer,dis,low,adj,vis,AP);
            //low ko update kro
            low[node] = min(low[node], low[nbr]);
            //check whether its a articulation point or not
            if(low[nbr] >= dis[node] && parent != -1){
                AP[node] = 1;
            }
            child++;
        }
        else{
            //back edge hai
            low[node] = min(low[node], dis[nbr]);
        }
    }
    if(parent == -1 && child > 1){
        AP[node] = 1;
    }
}

int main(){

    int n = 5;
    int e = 5;
    vector<pair<int,int>> edges;
    edges.push_back(make_pair(0,3));
    edges.push_back(make_pair(3,4));
    edges.push_back(make_pair(0,4));
    edges.push_back(make_pair(0,1));
    edges.push_back(make_pair(1,2));

    //adjacency list bano
    unordered_map<int,list<int>> adj;
    for(int i=0; i<edges.size(); i++){
        int u = edges[i].first;
        int v = edges[i].second;

        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    //jo bhi DS ka use hai likho
    int timer = 0;
    vector<int> dis(n);
    vector<int> low(n);
    int parent = -1;
    unordered_map<int,bool> vis;
    vector<int> AP(n,0);

    //initialize karo
    for(int i=0; i<n; i++){
        dis[i] = -1;
        low[i] = -1;
    }

    //dfs call krdo
    for(int i=0; i<n; i++){
        if(!vis[i]){
            dfs(i,-1,timer,dis,low,adj,vis,AP);
        }
    }

    //articulation points ko print karao
    for(int i=0; i<n; i++){
        if(AP[i] != 0)
            cout<<i<<" ";
    }cout<<endl;
    
    return 0;
}