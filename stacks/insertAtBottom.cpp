#include<iostream>
#include<stack>
using namespace std;

void solve(stack<int>& myStack, int x){
    if(myStack.empty()){
        myStack.push(x);
        return;
    }
    
    //nahi hai
    int num = myStack.top();
    myStack.pop();
    solve(myStack,x);
    myStack.push(num);
}

stack<int> pushAtBottom(stack<int>& myStack, int x) 
{
   solve(myStack,x);
    return myStack;
}
