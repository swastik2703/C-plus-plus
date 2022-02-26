#include<iostream> 
using namespace std;


class Node
{
public:
    int data;
    Node *next;
    Node *prev;
        
    Node(int data)
    {
        this->data = data;
        this->next = NULL;
        this->prev = NULL;
    }
};


Node* reverseDLL(Node* head)
{   
    if(head == NULL || head->next == NULL){
        return head;
    }  
    
    Node* curr = head;
    Node* previous = NULL;
    Node* forward = NULL;
    
    while(curr!=NULL){
        forward = curr->next;
        curr->next = previous;
        previous = curr;
        curr = forward;
    }
    return previous;
}


