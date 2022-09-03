#include<iostream>
using namespace std;
 
  struct ListNode {
      int val;
      ListNode *next;
      ListNode(int x) : val(x), next(NULL) {}
  };

class Solution {
public:
    void deleteNode(ListNode* node) {
      //check kro kahi last node toh nahi
        if(node -> next == NULL){
            delete node;
        }
        
        swap(node->val,node->next->val);
        ListNode* temp = node -> next;
        node -> next = temp -> next;
    }
};