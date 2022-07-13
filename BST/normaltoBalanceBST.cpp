#include<iostream>
#include<vector>
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
void inorderTraverse(Node* root, vector<int> &in){
    if(root == NULL){
        return;
    }
    inorderTraverse(root -> left, in);
    in.push_back(root ->data);
    inorderTraverse(root -> right, in);
    
}

Node* inToBST(int s,int e, vector<int> &in){
    if(s > e){
        return NULL;
    }
    
    int mid = (s+e)/2;
    Node* newNode = new Node(in[mid]);
    //left call
    newNode -> left = inToBST(s,mid-1,in);
    //right call
    newNode -> right = inToBST(mid+1,e,in);
    return newNode;
}

Node* balancedBst(Node* root) {
    vector<int> inorderVal;
    inorderTraverse(root,inorderVal);
    return inToBST(0,inorderVal.size()-1,inorderVal);
}
