#include<bits/stdc++.h>
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


Node *removeDuplicates(Node *head)
{
    //base case
//     if(head == NULL){
//         return NULL;
//     }
    
    
//     Node* curr = head;
    
//     while(curr != NULL && curr -> next != NULL){
//         Node* temp = curr;
        
//         while(temp -> next != NULL){
//             if(curr -> data == temp -> next -> data){
//                 Node* dup = temp -> next;
//                 temp -> next = temp -> next -> next;
//                 delete(dup);
//             }
//             else{
//                 temp = temp -> next;
//             }
//         }
//         curr = curr -> next;
//     }
//     return head;
    
    if(head==NULL || head->next==NULL)return head;
    unordered_map<int,int> m;
    Node *curr=head;
    m[curr->data]=1;
    Node *prev=curr;
    curr=curr->next;
    while(curr != NULL)
    {
        if(m[curr->data]){
            prev -> next = curr -> next;
            free(curr);
        }
        else{
            m[curr->data]=1;
            prev=curr;
        }
        curr=prev->next;
    }
    return head;
}