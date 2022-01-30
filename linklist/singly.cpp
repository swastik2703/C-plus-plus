#include<iostream>
using namespace std;

class node{
    public:
    int data;
    node* next;

    //constructor
    node(int data){
        this->data = data;
        this->next = NULL;
    }

    //destructor
    ~node(){
        int val = this->data;
        if(this->next!=NULL){
            delete next;
            this->next = NULL;
        }
        cout<<"You have deleted node of value: "<<val<<endl;
    }

};

//inserting at head
void insertatbegin(node* &head,int data){
    //newnode
    node* temp = new node(data);
    temp->next = head;
    head = temp;

}


//inserting at last
void insertattail(node* &tail,int data){
    //newnode
    node* temp = new node(data);
    tail->next = temp;
    tail = temp;
}

void insertatpos(node* &head,int pos,int d){
    node* temp = head;
    int count = 1;
    while(count < pos-1){
        temp = temp->next;
        count++;
    }

    //newnode for inserting at pos
    node* nextnode = new node(d);
    nextnode->next = temp->next;
    temp->next = nextnode;
}


//traversing linklist
void print(node* &head){
    node* temp = head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }cout<<endl;
}


//delete begin node
void deletenode(node* &head,int pos){
    if(pos == 1){
        node* temp = head;
        head = head->next;
        temp->next = NULL;
        delete temp;
    }

    else{
        int count = 1;
        node* curr = head;
        node* prev = head;

        while(count < pos){
            prev = curr;
            curr = curr->next;
            count++;
        }

        prev->next = curr->next;
        curr->next = NULL;
        delete curr;
    }
}


int main(){
    //make a newnode
    node* node1 = new node(10);
    node* head = node1;
    node* tail = node1;


    print(head);
    insertatbegin(head,5);
    cout<<"on adding node at start"<<endl;
    print(head);
    cout<<endl;

    cout<<"adding at last"<<endl;
    insertattail(tail,20);
    print(head);
    cout<<endl;

    cout<<"inserting node at certain postion"<<endl;
    insertatpos(head,3,15);
    print(head);
    cout<<endl;
    cout<<"deleting first||last||pos node"<<endl;
    // deletenode(head,1,5);
    // deletenode(head,4,20);
    // deletenode(head,3);
    print(head);
}