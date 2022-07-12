#include<iostream>
#include<queue>
using namespace std;

class node{

    public:
    int data;
    node* left;
    node* right;

    //constructor
    node(int d){
        this -> data = d;
        this -> left = NULL;
        this -> right = NULL;
    }
};

//level order traversal
void levelOrderTraversal(node* &root){
    queue<node*> q;
    q.push(root);
    q.push(NULL);

    while(!q.empty()){
        node* frontNode = q.front();
        q.pop();

        if(frontNode == NULL){
            cout<<endl;
        

            if(!q.empty()){
                q.push(NULL);
            }
        }
        
        else{
            cout<<frontNode -> data<<" ";
            if(frontNode -> left){
                q.push(frontNode -> left);
            }

            if(frontNode -> right){
                q.push(frontNode -> right);
            }
        }
    }
}

node* insertToBST(node* root, int data){
    //base case
    if(root == NULL){
        root = new node(data);
        return root;
    }

    //check if data less than root
    if(data < root -> data){
        //left call
        root -> left = insertToBST(root->left,data);
    }

    else{
        root -> right = insertToBST(root->right,data);
    }
    return root;
   
}

void takeInput(node* &root){
    int data;
    cin>>data;

    //jb tk user -1 na dale data dalte jao
    while(data != -1){
        root = insertToBST(root,data);
        cin>>data;
    }

}

int main(){

    node* root  = NULL;
    cout<<"enter the data in BST"<<endl;
    takeInput(root);

    cout<<"Here is the BST for the following nodes"<<endl;
    levelOrderTraversal(root);
    return 0;
}