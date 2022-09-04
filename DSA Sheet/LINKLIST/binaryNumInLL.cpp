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
    int getDecimalValue(ListNode* head) {
        int ans = 0;
        ListNode* temp = head;
        while(temp!= NULL){
            //agar ek or node mil gyi
            ans*= 2;
            ans+= temp->val;
            temp = temp->next;
        }
         return ans;
    }
   
};