// { Driver Code Starts
//

#include<bits/stdc++.h>
using namespace std;

struct Node
{
	int data;
	struct Node *left;
	struct Node *right;
	
	Node(int x){
	    data = x;
	    left = NULL;
	    right = NULL;
	}
};


void printPostOrder(Node *root)
{
	if(root==NULL)
		return;
	printPostOrder(root->left);
	printPostOrder(root->right);
	cout<<root->data<<" ";
}

 // } Driver Code Ends


/*Complete the code here.
Node is as follows:
struct Node
{
  int data;
  Node* left;
  Node* right;
};
*/
class Solution{
    public:
    
    int createMapping(int in[], map<int,int> &nodeToIndex, int n){
        for(int i=0; i<n; i++){
            nodeToIndex[in[i]] = i;
        }
        return -1;
    }
    
    Node* solve(int in[], int pre[], int &index,
                int inStart, int inEnd, int n, map<int,int> &nodeToIndex){
        //base case
        if(index >= n || inStart > inEnd){
            return NULL;
        }
        
        int element = pre[index++];
        Node* root = new Node(element);
        int pos = nodeToIndex[element];
        
        //recursive call
        root -> left = solve(in,pre,index,inStart,pos-1,n,nodeToIndex);
        root -> right = solve(in,pre,index,pos+1,inEnd,n,nodeToIndex);
        
        return root;
    }
    
    Node* buildTree(int in[],int pre[], int n)
    {
        int preIndex = 0;
        map<int,int> nodeToIndex;
        createMapping(in,nodeToIndex,n);
        Node* ans = solve(in,pre,preIndex,0,n-1,n,nodeToIndex);
        return ans;
    }
};

// { Driver Code Starts.
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		
		int inorder[n], preorder[n];
		for(int i=0; i<n; i++)
			cin>> inorder[i];
		for(int i=0; i<n; i++)
			cin>> preorder[i];
		Solution obj;
		Node *root = obj.buildTree(inorder, preorder, n);
		printPostOrder(root);
		cout<< endl;
	}
}
  // } Driver Code Ends