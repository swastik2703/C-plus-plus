#include<iostream>
using namespace std;

class node{
public:
int data;
node* next;
node* prev; 

    node(int data){
        this->data = data;
        this -> next = NULL;
        this -> prev = NULL;
    }

    ~node(){
        int val = this -> data;
        if(next != NULL){
            delete next;
            next = NULL;
        }

        cout<<"the node deleted is: "<<val<<endl;
    }
};

//print function
void print(node* head){
    node* temp = head;

    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
        
    }
    cout<<endl;
}

//getlength
int getlength(node* head){
    node* temp = head;
    int len = 0;
    while(temp!=NULL){
        len++;
        temp = temp->next;
    }
   
    return len;
}

//insert at start
void insertatstart(node* &head,int data){
    node* temp = new node(data);
    temp ->next = head;
    head->prev = temp;
    head = temp;
}

//insert at last
void insertatlast(node* &tail,node* &head,int data){

    if(tail==NULL){
        node* temp = new node(data);
        tail = temp;
        head = temp;
    }
    else{
        node* temp = new node(data);
        tail -> next = temp;
        temp->prev = tail;
        tail = temp; 
    }
    
} 


//at certain pos
void insertatpos(node* &head,node* &tail,int pos,int data){

    if(pos == 1){
        insertatstart(head,data);
        return;
    }

    node* temp = head;
    int count = 1;

    while(count < pos-1){
        temp = temp->next;
        count++;
    }

    if(temp->next == NULL){
        insertatlast(tail,head,data);
        return;
    }

    node* nextnode = new node(data);
    nextnode->next = temp->next;
    temp->next->prev = nextnode;
    temp->next = nextnode;
    nextnode ->prev = temp;

}

//delete node
void deletenode(node* &head,int pos){
    if(pos == 1){
        node* temp = head;
        temp -> next -> prev = NULL;
        head = temp->next;
        temp->next = NULL;
    }

    else{
        node* curr = head;
        node* prev = NULL;
        int count = 1;

        while(count<pos){
            prev = curr;
            curr= curr ->next;
            count++;
        }

        curr->prev= NULL;
        prev->next = curr->next;  
        // curr->next->prev = prev;
        curr->next = NULL;
        
        delete curr;

    

    }
}

int main(){
    //create new node
    node* node1 = new node(10);
    node* head = node1;
    node* tail = node1;
    print(head);
    //call getlength
    cout<<getlength(head)<<endl;
    
    //print at star
    insertatstart(head,2);
    print(head);
    insertatstart(head,1);
    print(head);

    //print at last
    insertatlast(tail,head,3);
    print(head);
    insertatlast(tail,head,4);
    print(head);

    //print at certain pos
    insertatpos(head,tail,4,33);
    print(head);
    insertatpos(head,tail,7,100);
    print(head);
    insertatpos(head,tail,1,101);
    print(head);

    deletenode(head,3);
    print(head);
    


}