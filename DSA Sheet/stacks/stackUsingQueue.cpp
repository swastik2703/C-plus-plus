#include<queue>
using namespace std;
class MyStack {
    
public:
    // we require 2 queues
    queue<int> q1,q2;
    MyStack() {
        
    }
    
    void push(int x) {
       //step-1 q1 ke sare element ek ek kr ke q2 mai dalo
        while(!q1.empty()){
            q2.push(q1.front());
            q1.pop();
        }
        q1.push(x);
        
        //now q2 ke sare element q1 mai push krdo
        while(!q2.empty()){
            q1.push(q2.front());
            q2.pop();
        }
    }
    
    int pop() {
        int element = q1.front();
        q1.pop();
        return element;
    }
    
    int top() {
        return q1.front();
    }
    
    bool empty() {
        return q1.empty();
    }
};

/**
 * Your MyStack object will be instantiated and called as such:
 * MyStack* obj = new MyStack();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->top();
 * bool param_4 = obj->empty();
 */