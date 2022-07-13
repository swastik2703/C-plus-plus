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
};

//function for traversal
void inorder(Node* root, vector<int> &in){
    //base case
    if( root == NULL ){
        return;
    }
    
    //phle left traverse
    inorder(root -> left, in);
    //node
    in.push_back(root -> data);
    //right
    inorder(root -> right, in);
}


bool twoSumInBST(Node* root, int target) {
	vector<int> inorderVal;
    inorder(root, inorderVal);
    
    int i = 0; 
    int j = inorderVal.size() - 1;
    
    while(i < j){
        int sum = inorderVal[i] + inorderVal[j];
        
        //check sum == target
        if(sum == target)
        {
            return true;
        }    
        else if(sum > target){
            j--;
        }
        else{
            i++;
        }
    }
    return false;
}