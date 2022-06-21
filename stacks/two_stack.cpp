#include<iostream>
#include<stack>
using namespace std;


class TwoStack {
    int top1;
    int top2;
    int *arr;
    int size;
public:

    // Initialize TwoStack.
    TwoStack(int s) {
        top1 = -1;
        top2 = s;
        arr = new int[s];
        this -> size = s;
    }
    
    // Push in stack 1.
    void push1(int num) {
        if(top2 - top1 > 1){
            top1++;
            arr[top1] = num;
        }
    }

    // Push in stack 2.
    void push2(int num) {
        if(top2 - top1 > 1){
            top2--;
            arr[top2] = num;
        }
    }

    // Pop from stack 1 and return popped element.
    int pop1() {
        //atleast ek element hona chahiye
        if(top1 >= 0){
            int ans = arr[top1];
            top1--;
            return ans;
        }
        else{
            return -1;
        }
    }

    // Pop from stack 2 and return popped element.
    int pop2() {
        //atleast ek element toh hona chaiye
        if(top2 < size){
            int ans = arr[top2];
            top2++;
            return ans;
        }
        else{
            return -1;
        }
    }
};
