#include<iostream>
#include<vector>
#include<climits>
using namespace std;
 class Node {
    public : 
        int data;
        Node* left;
        Node* right;

        Node(int data) {
            this -> data = data;
            this -> left = NULL;
            this -> right = NULL;
        }

        ~Node() {
            if (left)
            {
                delete left;
            }
            if (right)
            {
                delete right;
            }
        }
    };

Node* solve(vector<int> &preorder,int mini,int maxi,int &i){
    //null condition
    if(i>=preorder.size())
        return NULL;
    if(preorder[i] < mini || preorder[i] > maxi)
        return NULL;
    
    //range mai lie krta hai
    Node* newRoot = new Node(preorder[i++]);
    //left call
    newRoot -> left = solve(preorder,mini,newRoot -> data,i);
    newRoot -> right = solve(preorder,newRoot -> data,maxi,i);
    return newRoot;
}

Node* preorderToBST(vector<int> &preorder) {
    int mini = INT_MIN;
    int maxi = INT_MAX;
    int i = 0;
    return solve(preorder,INT_MIN,INT_MAX,i);
}