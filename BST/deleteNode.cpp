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

node* minValue(node* root){
    node* min = root;
    while(min ->left != NULL){
        min = min -> left;
    }
    return min;
}

//max value
node* maxValue(node* root){
    node* max = root;
    while(max -> right != NULL){
        max = max -> right;
    }
    return max;
}

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

node* deleteNode(node* root, int val){
    //base case
    if(root == NULL){
        return root;
    }

    if(root -> data == val){
        //0 child
        if(root -> left == NULL && root -> right == NULL){
            delete root;
            return NULL;
        }
        //1 child
        //left 
        if(root -> left != NULL && root -> right == NULL){
            node* temp = root;
            delete root;
            return temp;
        }
        //right
        if(root -> left == NULL && root -> right != NULL){
            node* temp = root;
            delete root;
            return temp;
        }

        //2 child
        if(root -> left != NULL && root -> right != NULL){
            //min value right se 
            //max value left se nikalte hai

            int min = minValue(root -> right) -> data;
            //copy kr do
            root -> data = min;
            root -> right = deleteNode(root -> right,min);
            return root;
        }
    }

    else if(root -> data > val){
        root -> left = deleteNode(root -> left,val);
        return root;
    }

    else{
        root -> right = deleteNode(root -> right,val);
        return root;
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
    //deletion
    root = deleteNode(root,30);

    cout<<"Here is the BST for the following nodes"<<endl;
    levelOrderTraversal(root);
    return 0;
}