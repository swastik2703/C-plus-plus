#include<algorithm>
#include<vector>
using namespace std;
bool cmp(vector<int> &a, vector<int> &b){
    return a[2] < b[2];    //2 ka mtlb weight hai jo 2nd index pe hai
}

//make set function
void makeSet(vector<int> &parent, vector<int> &rank, int n){
    //yeh initialize vala function hai
    for(int i=0; i<n; i++){
        parent[i] = i;
        rank[i] = 0;
    }
}

//parent find karna hai
int findParent(vector<int> &parent, int node){
    //agar parent ka node khud ke barabar
    if(parent[node] == node)
        return node;
    return parent[node] = findParent(parent,parent[node]);
}

//union bhi toh nikalo
//hume do element ka union karna hota hai 
int Union(int u, int v, vector<int> &parent, vector<int> &rank){
    u = findParent(parent,u);
    v = findParent(parent,v);
    
    //ranks ko compare kro
    if(rank[u] < rank[v])
        parent[u] = v;
    else if(rank[v] < rank[u])
        parent[v] = u;
    else{
        //rank same aayi hai toh kisi ko bhi parent bna dete hai
        parent[v] = u;
        rank[u]++;
    }
}

int minimumSpanningTree(vector<vector<int>>& edges, int n)
{
    //jitni bhi edges hai unhe sort krdo
    sort(edges.begin(), edges.end(),cmp);
    //parent or rank data structure ki need hai
    vector<int> parent(n);
    vector<int> rank(n);
    makeSet(parent,rank,n);
    
    int minWet = 0;
    for(int i=0; i<edges.size(); i++){
        //u or v ke parent nikalo
        int u = findParent(parent,edges[i][0]);
        int v = findParent(parent,edges[i][1]);
        int weight = edges[i][2];
        
        //agar same nhi hai toh merge krdo
        if(u != v){
            //weight bhi add krdna hai 
            minWet += weight;
            Union(u,v,parent,rank);
        }
    }
    return minWet;
}