// { Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

struct Node {
    int data;
    Node *left;
    Node *right;

    Node(int val) {
        data = val;
        left = right = NULL;
    }
};


Node *buildTree(string str) {
    // Corner Case
    if (str.length() == 0 || str[0] == 'N')
        return NULL;

    // Creating vector of strings from input
    // string after spliting by space
    vector<string> ip;

    istringstream iss(str);
    for (string str; iss >> str;)
        ip.push_back(str);

    // Create the root of the tree
    Node *root = new Node(stoi(ip[0]));

    // Push the root to the queue
    queue<Node *> queue;
    queue.push(root);

    // Starting from the second element
    int i = 1;
    while (!queue.empty() && i < ip.size()) {

        // Get and remove the front of the queue
        Node *currNode = queue.front();
        queue.pop();

        // Get the current Node's value from the string
        string currVal = ip[i];

        // If the left child is not null
        if (currVal != "N") {

            // Create the left child for the current Node
            currNode->left = new Node(stoi(currVal));

            // Push it to the queue
            queue.push(currNode->left);
        }

        // For the right child
        i++;
        if (i >= ip.size())
            break;
        currVal = ip[i];

        // If the right child is not null
        if (currVal != "N") {

            // Create the right child for the current Node
            currNode->right = new Node(stoi(currVal));

            // Push it to the queue
            queue.push(currNode->right);
        }
        i++;
    }

    return root;
}


 // } Driver Code Ends
//User function Template for C++

class Solution {
  public:
  
  Node* createParentMapping(Node* root, int target, 
                            map<Node*,Node*> &nodeToParent){
        Node* res = NULL;
        //level order traversal
        queue<Node*> q;
        q.push(root);
        nodeToParent[root] = NULL;
        
        while(!q.empty()){
            //front node nikalo
            Node* front = q.front();
            q.pop();
            
            //check front == target then update resultu
            if(front -> data == target){
                res = front;
            }
            
            //left child hai kya check kro hai toh queue mai push krdo
            if(front -> left){
                nodeToParent[front -> left] = front;
                q.push(front -> left);
            }
            
            //right child hai kya check kro and if yes push into queue
            if(front -> right){
                nodeToParent[front -> right] = front;
                q.push(front -> right);
            }
            
        }
        return res;
  }
  
  
  int burnTree(Node* root, map<Node*,Node*>nodeToParent){
      map<Node*,bool> visited;
      //level order traversal
      queue<Node*> q;
      q.push(root);
      visited[root] = true; //mark root as visited
      
      int ans = 0;
      
      while(!q.empty()){
          bool flag = 0;    //addition check karne ke liye
          int size = q.size();
          for(int i=0; i<size; i++){
              Node* front = q.front();
              q.pop();
              //process neighbouring node ie. left right parent
              //left check
              if(front -> left && !visited[front -> left]){    //front ka left exist or not and not visited
              flag = 1;
              q.push(front -> left);
              visited[front -> left] = 1;
              }
              
              //right check
              if(front -> right && !visited[front -> right]){
                  flag = 1;
                  q.push(front -> right);
                  visited[front -> right] = 1;
              }
              
              //parent check
              if(nodeToParent[front] && !visited[nodeToParent[front]]){
                  flag = 1;
                  q.push(nodeToParent[front]);
                  visited[nodeToParent[front]] = 1;
              }
          }
          
          if(flag == 1){
              ans++;
          }
      }
      return ans;
  }
  
    int minTime(Node* root, int target) 
    {
        //algo
        //s1 -> create node to parent mapping
        //s2 -> find target node
        //s3 -> burn tree in minimum time
        
        map<Node*,Node*> nodeToParent;
        Node* targetNode = createParentMapping(root,target,nodeToParent);
        int ans = burnTree(targetNode,nodeToParent);
        return ans;
    }
};

// { Driver Code Starts.

int main() 
{
    int tc;
    scanf("%d ", &tc);
    while (tc--) 
    {    
        string treeString;
        getline(cin, treeString);
        // cout<<treeString<<"\n";
        int target;
        cin>>target;
        // cout<<target<<"\n";

        Node *root = buildTree(treeString);
        Solution obj;
        cout<<obj.minTime(root, target)<<"\n"; 

        cin.ignore();

    }


    return 0;
}
  // } Driver Code Ends