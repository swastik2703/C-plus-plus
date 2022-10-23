#include<vector>
#include<climits>
using namespace std;
struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

class Solution {
public:
    bool valid(TreeNode* root, long int min = LONG_MIN, long int max = LONG_MAX){
        if(root == NULL)
            return true;
        if(root -> val <= min || root -> val >= max){
            return false;
 
        }
        return (valid(root->left, min, root->val) && valid(root->right, root->val, max));
        
     }
    
    bool isValidBST(TreeNode* root) {
        return valid(root,LONG_MIN,LONG_MAX);
    }
};
