#include<list>
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

//     ListNode* findMid(ListNode* &head){
//         if(head == NULL || head->next == NULL)
//             return head;
        
//         if(head -> next->next == NULL)
//             return head->next;
        
//         ListNode* slow = head;
//         ListNode* fast = head->next;
        
//         while(fast!=NULL){
//             fast = fast -> next;
//             if(fast!=NULL){
//                 fast= fast->next;
//             }
//             slow = slow->next;
//         }
            
//             return slow;
//     }
    
    ListNode* middleNode(ListNode* head) {
        // return findMid(head);
        int count = 0;
        ListNode* temp = head;
        
        while(temp!= NULL){
            temp = temp->next;
            count++;   
        }
        
        free(temp);
        count/= 2;
        while(count>0){
            head = head->next;
            count--;
        }
        return head;
           
        
    }
};