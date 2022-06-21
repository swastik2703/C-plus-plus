#include<iostream>
#include<stack>
using namespace std;

class Stack{
    public:
    //properties
    int top;
    int *arr;
    int size;

    //constructor
    Stack(int size){
        this -> size = size;
        arr = new int[size];
        top = -1;
    }

    //functions
    void push(int element){
        if(size - top > 1){
            top++;
            arr[top] = element;
        }
        else{
            cout<<"stack Overflow"<<endl;
        }
    }

    //pop function
    void pop(){
        if(top >= 0){
            top--;
        }
        else{
            cout<<"Stack Underflow"<<endl;
        }
    }

    //peek function

    int peek(){
        if(top >= 0){
            return arr[top];
        }
        else{
            cout<<"stack is empty"<<endl;
            return -1;
        }
    }

    //empty function
    bool isEmpty(){
        if(top == -1){
            return true;
        }
        else{
             return false;
        }
    }

};


int main(){
    Stack s(5);
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);

    cout<<s.peek()<<endl;
    s.pop();
    cout<<s.peek()<<endl;
    s.pop();
    cout<<s.peek()<<endl;
    s.pop();
    cout<<s.peek()<<endl;
    s.pop();
    cout<<s.peek()<<endl;

    if(s.isEmpty()){
        cout<<"empty hai mere dost"<<endl;
    }
    else{
        cout<<"nahi hai mere dost"<<endl;
    }

    return 0;
}