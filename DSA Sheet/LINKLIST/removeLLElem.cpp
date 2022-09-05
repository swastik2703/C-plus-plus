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
    ListNode* removeElements(ListNode* head, int val) {
        ListNode* prev = new ListNode(-1);
        prev -> next = head;
        ListNode* tail = prev;
        //ListNode* temp = curr -> next;
        
        while(tail != NULL && tail -> next != NULL){
            if(tail -> next -> val == val){
                ListNode* temp = tail -> next;
                tail -> next = temp -> next;
                delete temp;
            }
            else{
                tail = tail -> next;
            }
        }
        return prev->next;
    }
};