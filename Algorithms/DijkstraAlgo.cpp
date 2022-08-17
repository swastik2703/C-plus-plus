#include<unordered_map>
#include<list>
#include<climits>
#include<set>
#include<vector>
using namespace std;
vector<int> dijkstra(vector<vector<int>> &vec, int vertices, int edges, int source) {
    //adjacency list bnao
    unordered_map<int,list<pair<int,int> > > adj;
    for(int i=0; i<edges; i++){
        int u = vec[i][0];
        int v = vec[i][1];
        int w = vec[i][2];    //w denotes the weight
        adj[u].push_back(make_pair(v,w));
        adj[v].push_back(make_pair(u,w));
    }
    
    //ek distance vector bna lo
    vector<int> dist(vertices);
    for(int i=0; i<vertices; i++){
        dist[i] = INT_MAX;
    }
    
    //ek set bna lo
    set<pair<int,int>> s;
    //source ke distance ko 0 mark krdo
    dist[source] = 0;
    
    //set mai 0,source pass insert kardo
    s.insert(make_pair(0,source));
    
    //jab tk apka set empty nhi ho jata kaam shuru karo
    while(!s.empty()){
        //top ke pair ko fetch karo
        auto top = *(s.begin());
        
        //us record pair mai do cheez hongi node ka distance or node value dono ko nikalo
        int nodeDistance = top.first;
        int node = top.second;
        
        //access krli toh usse remove bhi karna padega
        s.erase(s.begin());
        
        //neighbours ko traverse karo
        for(auto neighbour: adj[node]){
            //check kro kya curr distance or weight niegbour ke distnace ke bara bar hai
            if(nodeDistance + neighbour.second < dist[neighbour.first]){
                //check kro kya previous se match kar rha hai
                auto record = s.find(make_pair(dist[neighbour.first], neighbour.first));
                //agar same record mil gaya toh uss erase krdo
                if(record != s.end()){
                    s.erase(record);
                }
                //distance ko update krdo
                dist[neighbour.first] = nodeDistance + neighbour.second;
                //recode mai push krdo
                  s.insert(make_pair(dist[neighbour.first],neighbour.first));
            }
        }
    }
      return dist;
}
