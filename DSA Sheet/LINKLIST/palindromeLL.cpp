#include<iostream> 
using namespace std;
 struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
 };

class Solution {
public:
    
    //function to reverse list
    ListNode* rev(ListNode* head){
        if(head == NULL)
            return NULL;
        
        ListNode* prev = NULL;
        ListNode* curr = head;
        ListNode* forward = head -> next;
        
        while(curr != NULL){
            curr -> next = prev;
            prev = curr;
            curr = forward;
            
            if(forward != NULL)
                forward = forward->next;
        }
        return prev;
    }
    bool isPalindrome(ListNode* head) {
        ListNode* slow = head;
        ListNode* fast = head;
        
        while(fast->next != NULL && fast ->next->next != NULL){
            slow = slow->next;
            fast = fast->next->next;
        }
            slow -> next = rev(slow -> next);   
            ListNode* start = head;
            ListNode* mid = slow->next;
            
            
            while(mid != NULL){
                if(mid -> val != start -> val)
                    return false;
                start = start -> next;
                mid = mid -> next;
            }
            slow -> next = rev(slow->next);
            return true;
    }
};