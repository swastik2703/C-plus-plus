#include<iostream>
#include<queue>
using namespace std;

//create tree class
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


//create tree function
node* createTree(node* root){
    cout<<"enter the node data: "<<endl;
    int data;
    cin>>data;

    root = new node(data);

    if(data == -1)
        return NULL;


    cout<<"enter the data of left node of "<<data<<endl;
    root -> left = createTree(root -> left);
    cout<<"enter the data of right node of "<<data<<endl;
    root -> right = createTree(root -> right);
    return root;
}

//level order traversal
void levelOrderTraversal(node* root){
    queue<node*> q;
    //first push the root
    q.push(root);
    q.push(NULL);

    while(!q.empty()){
        node* temp = q.front();
        q.pop();

        if(temp == NULL){   //level is completely traversed
            cout<<endl;

        if(!q.empty()){
            //child nodes hai abhi bhi
            q.push(NULL);
        }
        }

        else{
            cout<<temp -> data <<" ";
            if(temp -> left){
                q.push(temp->left);
            }

            if(temp -> right){
                q.push(temp -> right);
            }
        }
    }

}





int main(){

    node* root = NULL;
    //1 3 7 -1 -1 11 -1 -1 5 17 -1 -1 -1
    root = createTree(root);
    levelOrderTraversal(root);

    return 0;
}