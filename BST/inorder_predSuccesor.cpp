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


pair<int,int> predecessorSuccessor(Node* root, int key)
{
    //key find karo
   Node* temp = root;
    int pred = -1;
    int succ = -1;
    
    while(temp -> data != key){
        //check temp bda toh nhi key se
        if(temp -> data > key){
             //data bda hai ho sk ta hai successor ho
            succ = temp -> data;
            //left mai mi le ga
            temp = temp -> left;
        }
        
        else{
             //hoskta hai chota hai toh predecessor
            pred = temp -> data;
            //data chota hai key se
            temp = temp -> right;
           
        }
    }
    
    //pred succ ko find kro
    //pred
    Node* leftTree = temp -> left;
    while(leftTree != NULL){
        pred = leftTree -> data;
        //leftTree ke right jate jao
        leftTree = leftTree -> right;
    }
    
   Node* rightTree = temp -> right;
    while(rightTree != NULL){
        succ = rightTree -> data;
        rightTree = rightTree -> left;
    }
    
    pair<int,int> ans = make_pair(pred,succ);
    return ans;
    
}
