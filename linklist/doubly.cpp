#include<iostream>
using namespace std;


class node{
    public:
    int data;
    node* prev = NULL;
    node* next = NULL;

    node(int d){
        this->data = d;
        this->next = NULL;
        this->prev = NULL;
    }
};

//find length of list
void getlen(node* head){
    int len = 0;
    node* temp = head;

    while(temp!= NULL){
        len++;
        temp = temp->next;
    }

    cout<<len<<endl;
}


//inserting at head
void insertatstart(node* &head,int d){
    //newnode
    node* temp = new node(d);
    temp->next = head;
    head->prev = temp;
    head = temp;
}


//inserting at tail
void insertattail(node* &tail,int d){
    //newnode
    node* temp = new node(d);
    tail->next = temp;
    temp->prev = tail;
    tail = temp;
}


//insertatpos
void insertatpos(node* &tail,node* &head,int pos,int d){
    //new node
    node* temp = head;
    int count = 1;

    //at starting
    if(pos == 1){
        insertatstart(head,d);
        return;
    }

    while(count < pos-1){
      temp = temp->next;
        count++;
    }

    //inserting at last pos
    if(temp->next == NULL){
        insertattail(tail,d);
        return;
    }

//newnode
node* nextnode = new node(d);
    nextnode->next = temp->next;
    temp->next->prev = nextnode;
    temp->next = nextnode;
    nextnode->prev = temp;
}


//traversing
void print(node* head){
    //newnode
    node* temp = head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }cout<<endl;
}

int main(){
    //newnode
    node* node1 = new node(10);
    node* head = node1;
    node* tail = node1;

    print(head);
    //getlen(head);

    insertatstart(head,8);
    print(head);    

    insertattail(tail,12);
    print(head);

    insertatpos(tail,head,1,101);
    print(head);
}