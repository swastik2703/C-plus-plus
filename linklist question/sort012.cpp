#include<iostream>
using namespace std;

    class Node
    {
    public:
        int data;
        Node *next;
        Node(int data)
        {
            this->data = data;
            this->next = NULL;
        }
    };

Node* IAT(Node* &tail,Node* temp){
    tail -> next = temp;
    tail = temp;
}

Node* sortList(Node *head)
{
    //without data replacement
    //dummy node
    Node* zeroHead = new Node(-1);
    Node* zeroTail = zeroHead;
    Node* oneHead = new Node(-1);
    Node* oneTail = oneHead;
    Node* twoHead = new Node(-1);
    Node* twoTail = twoHead;
    
    Node* temp = head;
    while(temp != NULL){
        int value = temp -> data;
        if(value == 0){
            IAT(zeroTail,temp);
        }
        
        else if(value == 1){
            IAT(oneTail,temp);
        }
        
        else if(value == 2){
            IAT(twoTail,temp);
        }
    temp = temp -> next;
}
    
    //merge list
if(oneHead -> next != NULL){
    zeroTail -> next = oneHead -> next;
}
    else{
        zeroTail -> next = twoHead -> next;
    }
    
    oneTail -> next = twoHead -> next;
    twoTail -> next = NULL;
    
    //setup head
     head = zeroHead -> next;
    delete(zeroHead);
    delete(oneHead);
    delete(twoHead);
    
    return head;
    
//    with data replacement    
//     //base case
//     if(head == NULL){
//         return NULL;
//     }
    
//     int zeroCount = 0;
//     int oneCount = 0;
//     int twoCount = 0;
    
//     Node* temp = head;
//     while(temp != NULL){
//         if(temp -> data == 0){
//             zeroCount++;
//         }
        
//          if(temp -> data == 1){
//             oneCount++;
//         }
        
//          if(temp -> data == 2){
//             twoCount++;
//         }
//         temp = temp -> next;
//     }
    
//     temp = head;
    
//     while(temp != NULL){
//         if(zeroCount != 0){
//             temp -> data = 0;
//             zeroCount--;
//         }
        
//         else if(oneCount != 0){
//             temp -> data = 1;
//              oneCount--;
//         }
        
//         else if(twoCount != 0){
//             temp -> data = 2;
//              twoCount--;
//         }
//         temp = temp -> next;
//     }
    
//     return head;

}
