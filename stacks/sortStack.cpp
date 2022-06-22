#include<iostream>
#include<stack>
using namespace std;

void sortInsert(stack<int> &s, int num){
    if(s.empty() || (!s.empty() && s.top() < num)){
        s.push(num);
        return;
    }
    
    int n = s.top();
    s.pop();
    //recursive call
    sortInsert(s,num);
    s.push(n);
}

void sortStack(stack<int> &stack)
{
    if(stack.empty()){
        return;
    }
    
    int num = stack.top();
    stack.pop();
    
    //recursive
    sortStack(stack);
    sortInsert(stack,num);
}