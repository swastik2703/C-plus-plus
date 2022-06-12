#include<iostream>
using namespace std;


    class node{
        public:
            int data;
            node * next;
            node(int data){
                this->data=data;
                this->next=NULL;
            }
    };
    


node* findmid(node* head){
    node* slow = head;
    node* fast = head->next;
    
    while(fast != NULL && fast -> next != NULL){
        slow = slow->next;
        fast = fast->next->next;
    }
    return slow;
}

//merge both halves
node* merge(node* left,node* right){
    //base case
    if(left == NULL){
        return right;
    }
    
    if(right == NULL){
        return left;
    }
    
    node* ans = new node(-1);
    node* temp = ans;
    while(left != NULL && right != NULL){
        if(left -> data < right -> data){
            temp -> next = left;
            temp = left;
            left = left -> next;
        }
        else{
            temp -> next = right;
            temp = right;
            right = right -> next;
        }
    }
    
    while(left != NULL){
        temp -> next = left;
        temp = left;
        left = left -> next;
    }
    
      while(right != NULL){
         temp -> next = right;
         temp = right;
         right = right -> next;
    }
    
    ans = ans -> next;
    return ans;
}



node* mergeSort(node *head) {
    //base case
    if(head == NULL || head -> next == NULL){
        return head;
    }
    
    //divide into two equal halves
    node* mid = findmid(head);
   
    //apply merge sort on both halves
    node* left = head;
    node* right = mid -> next;
    mid -> next = NULL;
    
    //recursive call
    left = mergeSort(left);
    right = mergeSort(right);
    
    //merge both halves
    node* res = merge(left,right);
    return res;
}
