#include<iostream>
#include<map>
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


void insertatpos(node* &head,node* &tail,int pos,int data){

    if(pos == 1){
        insertatbegin(head,data);
        return;
    }

    node* temp = head;
    int count = 1;

    while(count < pos-1){
        temp = temp->next;
        count++;
    }

    if(temp->next == NULL){
        insertattail(tail,data);
        return;
    }

    node* nextnode = new node(data);
    nextnode->next = temp->next;
    temp->next = nextnode;
    nextnode = temp;

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
void deletenode(node* &head,node* &tail,int pos){
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
        tail = prev;
        delete curr;
    }
}

bool detectloop(node* head){
    if(head == NULL){
        return false;
    }

    map<node*,bool> visited;
    node* temp = head;

    while(temp!=NULL){
        if(visited[temp] == true){
            cout<<"loop starts from: "<<temp->data<<endl;
            return true;
        }

        visited[temp] = true;
        temp = temp->next;
    }

    return false;

}


int main(){
    //make a newnode
    node* node1 = new node(10);
    node* head = node1;
    node* tail = node1;


   // print(head);
    insertatbegin(head,5);
    // cout<<"on adding node at start"<<endl;
    // print(head);
    // cout<<endl;

    // cout<<"adding at last"<<endl;
     insertattail(tail,20);
    // print(head);
    // cout<<endl;

    // cout<<"inserting node at certain postion"<<endl;
    insertatpos(head,tail,3,15);
    print(head);
    tail->next = head->next;
    cout<<"head = "<<head->data<<endl;
    cout<<"tail = "<<tail->data<<endl;
    if(detectloop(head)){
        cout<<"cycle is present"<<endl;
    }
    else{
        cout<<"no cycle is there"<<endl;
    }

    // cout<<"deleting first||last||pos node"<<endl;
    // // deletenode(head,1,5);
    // // deletenode(head,4,20);
    // // deletenode(head,3);
    // print(head);
}