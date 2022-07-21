#include<iostream>
#include<queue>
using namespace std;
class node{
  public:
    int data;
    int row;
    int column;
    
    node(int d, int r, int c){
        this -> data = d;
        row = r;
        column = c;
    }
};

class compare{
    public:
        bool operator()(node* a, node* b){
            return a ->data > b -> data; 
        }
};

vector<int> mergeKSortedArrays(vector<vector<int>>&kArrays, int k)
{
    //priroty queue bnao
    priority_queue<node*, vector<node*>, compare> minHeap;
    
    //sare array ke first elements ko insert karo
    
    for(int i=0; i<k; i++){
        node* temp = new node(kArrays[i][0], i, 0);
        //push into min heap
        minHeap.push(temp);
    }
    
    vector<int> ans;
    //compare
    while(minHeap.size() > 0){
        node* top = minHeap.top();
        ans.push_back(top -> data);
        minHeap.pop();
        
        int i = top -> row;
        int j = top -> column;
        
        //nexxt element ko kaise heap mai dale
        //if next element is less than us array ke size se
        if(j+1 < kArrays[i].size()){
            node* next = new node(kArrays[i][j+1],i,j+1);
            minHeap.push(next);
        }
    }
    return ans;
}
