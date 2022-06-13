#include<iostream>
using namespace std;

    class Node {
        public :

        int data;
        Node *next;

        Node(int data) {
            this -> data = data;
            this -> next = NULL;
        }
    };

//detect loop
Node* detectLoop(Node* head){
    //base case
    if(head == NULL){
        return NULL;
    }
    
    Node* slow = head;
    Node* fast = head;
    
    while(slow != NULL && fast != NULL){
        fast = fast -> next;
        if(fast != NULL){
            fast = fast -> next;
        }
        slow = slow -> next;
        
            if(slow == fast){
                return slow;
            }
    }
    return NULL;
}

//starting node to remove loop
Node* startingLoop(Node* head){
    //base case
    if(head == NULL){
        return NULL;
    }
    
    Node* intersection = detectLoop(head);
    if(intersection == NULL){
        return NULL;
    }
    Node* slow = head;
    
    while(slow != intersection){
        slow = slow -> next;
        intersection = intersection -> next;
    }
    return slow;
}

//remove loop
Node *removeLoop(Node *head)
{
  //base case
    if(head == NULL){
        return NULL;
    }
    
    Node* startNode = startingLoop(head);
    if(startNode == NULL){
        return head;
    }
    
    Node* temp = startNode;
    
    while(temp -> next != startNode){
        temp = temp -> next;
    }
    temp -> next = NULL;
    return head;
}