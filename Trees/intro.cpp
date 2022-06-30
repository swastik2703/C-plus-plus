#include<iostream>
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





int main(){

    node* root = NULL;
    root = createTree(root);

    return 0;
}