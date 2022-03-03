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

//detect loop via mapping whose time and space complexity is O(n)
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

//detect whether loop is present or not
node* floydetectloop(node* head){
    if(head == NULL){
        return NULL;
    }

    node* slow = head;
    node* fast = head;

    while(slow!=NULL && fast!=NULL){
        fast = fast->next;
        if(fast!=NULL){
            fast = fast->next;
        }
        slow = slow->next;

    if(slow == fast){
        cout<<"present at "<<slow->data<<endl;
        return slow;
    }
    }
    return NULL;
}

//finding the starting node from where loop start
node* startingnode(node* head){
    if(head == NULL){
        return NULL;
    }

    node* intersection = floydetectloop(head);

    node* slow = head;

    while(slow!= intersection){
        slow = slow->next;
        intersection = intersection->next;
    }
    return slow;
}

//removing loop from the cycle
void removeloop(node* head){
    if(head == NULL){
        return;
    }

    node* startingloop = startingnode(head);
    node* temp = startingloop;

    while(temp ->next!= startingloop){
        temp = temp->next;
    }

    temp->next = NULL;
}


int main(){
    //make a newnode
    node* node1 = new node(10);
    node* head = node1;
    node* tail = node1;


   
    insertatbegin(head,5);
    insertattail(tail,20);
    insertatpos(head,tail,3,15);
    print(head);
    tail->next = head->next;
    cout<<"head = "<<head->data<<endl;
    cout<<"tail = "<<tail->data<<endl;
    if(floydetectloop(head) != NULL){
        cout<<"cycle is present"<<endl;
    }
    else{
        cout<<"no cycle is there"<<endl;
    }

    node* loop = startingnode(head);
    cout<<"loop starts at: "<<loop->data<<endl;

    removeloop(head);
    print(head);
    
}