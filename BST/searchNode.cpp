#include<iostream>
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
    };

bool searchInBST(Node *root, int x) {
    //Note recursive way mai SC height ke barabar ayegi 
    //optimize kr ne ke liye iterative way use krenge
    Node* temp = root;
    
    while(temp != NULL){
        if(temp -> data == x){
            //mil gaya
            return true;
        }
        
        if(temp -> data > x){
            temp = temp -> left;
        }
        
        else{
            temp = temp -> right;
        }
    }
    return false;
}

int main(){
    int element = 30;
    Node* root = NULL;
    return searchInBST(root,element);
}