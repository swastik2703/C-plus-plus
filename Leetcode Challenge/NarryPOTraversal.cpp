#include<vector>
using namespace std;
class Node {
public:
    int val;
    vector<Node*> children;

    Node() {}

    Node(int _val) {
        val = _val;
    }

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};

class Solution {
    vector<int> ans;
public:
    
    void traverse(Node* root){
        if(root == NULL)
            return;
        ans.push_back(root -> val);
        
        //traverse child nodes
        for(auto node:root->children)
            traverse(node);
        
    }
    
    vector<int> preorder(Node* root) {
        traverse(root);
        return ans;
    }
};
    