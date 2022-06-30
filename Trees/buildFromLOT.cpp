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

void buildFromLOT(node* &root){
    //queue bnao
    queue<node*> q;
    cout<<"enter the root data :"<<endl;
    int data;
    cin>>data;
    root = new node(data);
    q.push(root);


    while(!q.empty()){
        node* temp = q.front();
        q.pop();

        //print left ka data
        cout<<"enter left ka data: "<<temp -> data<<endl;
        int leftData;
        cin>>leftData;

        if(leftData != -1){
            temp -> left = new node(leftData);
            q.push(temp -> left);
        }


        cout<<"enter right ka data: "<<temp -> data<<endl;
        int rightData;
        cin>>rightData;

        if(rightData != -1){
            temp -> right = new node(rightData);
            q.push(temp -> right);
        }
    }
}





int main(){

    node* root = NULL;
    //root = createTree(root);
    buildFromLOT(root);
    levelOrderTraversal(root);

    return 0;
}