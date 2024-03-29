#include<iostream>
#include<cstdlib>
using namespace std;
struct Node
{
    int data;
    struct Node* left;
    struct Node* right;
    
    Node(int x){
        data = x;
        left = right = NULL;
    }
};


class Solution{
    
    private:
    int height(struct Node* node){
        if(node == NULL){
            return 0;
        }
        
        int left = height(node -> left);
        int right = height(node -> right);
        int ans = max(left,right) + 1;
        return ans;
    }
    
    
    public:
    //Function to check whether a binary tree is balanced or not.
    bool isBalanced(Node *root)
    {
        if(root == NULL){
            return true;
        }
        
        bool left = isBalanced(root -> left);
        bool right = isBalanced(root -> right);
        bool check_diff = (height(root -> left) - height(root -> right)) <= 1;
        
        if(left && right && check_diff)
            return 1;
        else
            return 0;
    }
};