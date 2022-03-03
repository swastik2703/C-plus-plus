#include<iostream>
using namespace std;
    
    class Node 
    {
        public:
        int data;
        Node* next;

        Node(int data) 
        {
            this->data = data;
            this->next = NULL;
        }
    };
    

Node * uniqueSortedList(Node * head) {
    if(head == NULL){
        return NULL;
    }
    
    Node* curr = head;
   while(curr!=NULL){
       if((curr->next != NULL) && curr->data == curr->next->data){
           //Node* next = curr->next->next;
           Node* deletenode = curr->next;
           delete(deletenode);
           curr->next = curr->next->next;
       }
       else{
           curr = curr->next;
       }  
   }
    return head;
}