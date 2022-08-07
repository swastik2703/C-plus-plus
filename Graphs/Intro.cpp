#include<iostream>
#include<unordered_map>
#include<list>
using namespace std;

class graph{
    public:
        unordered_map<int,list<int>> adj;
        //add number of edges
        void addEdge(int u, int v, bool direction){
            //direction - 0 -----> undirected graph
            //direction - 1 -----> directed graph

            //at first create an edge
            adj[u].push_back(v);

            //now check the direction
            if(direction == 0){
                //means undirected graph hai & reverse bn jayega
                adj[v].push_back(u);
            }
        }

        //print function
        void printList(){
            for(auto i:adj){
                cout<<i.first<<" -> ";
                for(auto j: i.second){
                    cout<<j<<",";
                }
                cout<<endl;
            }
        }

};

int main(){

    int nodes;
    cout<<"Enter the number of Nodes: ";
    cin>>nodes;
    cout<<endl;

    int edges;
    cout<<"Enter the number of Edges: ";
    cin>>edges;
    cout<<endl;

    graph g;
    for(int i=0; i<edges; i++){
        int u,v;
        cin>>u>>v;
        //create edge
        g.addEdge(u,v,0);
    }

    //print 
    g.printList();


    return 0;
}