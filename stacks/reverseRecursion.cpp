#include<iostream>
#include<stack>
using namespace std;

void insertAtBottom(stack<int> &s,int element){
    if(s.empty()){
        s.push(element);
        return;
    }
    
    int ans = s.top();
    s.pop();
    
    //recursive call 
    insertAtBottom(s,element);
    s.push(ans);
}

void reverseStack(stack<int> &stack) {
    if(stack.empty()){
       return ; 
    }
    int num = stack.top();
    stack.pop();
    
    //recursion dekh lega
    reverseStack(stack);
    insertAtBottom(stack,num);
}