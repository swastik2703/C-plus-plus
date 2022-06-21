#include<iostream> 
#include<stack>
using namespace std;


void solve(stack<int>&inputStack, int count, int size){
    //base case
    if(count == size/2){
        inputStack.pop();
        return;
    }
    
    int ans = inputStack.top();
    inputStack.pop();
    //recursive call
    solve(inputStack,count+1,size);
    //vapis uss stack mai push kardo
    inputStack.push(ans);
}

void deleteMiddle(stack<int>&inputStack, int N){
int count = 0;
    solve(inputStack,count,N);
   
}