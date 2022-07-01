#include<iostream>
using namespace std;

    template <typename T>
    class BinaryTreeNode {
      public :
        T data;
        BinaryTreeNode<T> *left;
        BinaryTreeNode<T> *right;

        BinaryTreeNode(T data) {
                this -> data = data;
                left = NULL;
                right = NULL;
        }
    };


void inorderTraversal(BinaryTreeNode<int> *root,int &count){
    if(root == NULL){
        return;
    }
    
    inorderTraversal(root -> left,count);
    if(root -> left == NULL && root -> right == NULL){
        count++;
    }
    inorderTraversal(root -> right,count);
}

int noOfLeafNodes(BinaryTreeNode<int> *root){
    // Write your code here.
    int count = 0;
    inorderTraversal(root,count);
    return count;
}