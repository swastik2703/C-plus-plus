#include<iostream>
#include<stack>
using namespace std;

//print function
void printStack(stack <int> s){
    if(s.empty()){
        return;
    }

    int store = s.top();
    s.pop();
    printStack(s);
    cout<< store <<" ";
    //s.push(store);
}

int main(){

    //creation
    stack <int> s;

    //push to stack
    s.push(1);
    s.push(2);
    s.push(3);
    printStack(s);
}