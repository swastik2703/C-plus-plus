#include<climits>
#include<stack>
using namespace std;
class MinStack {
    stack<long long> s;
    long long mini; 
    //long long kyuki value overflow na hojaye
public:
    MinStack() {
        while(s.empty() == false)
            s.pop();
        mini = INT_MAX;
    }
    
    void push(int val) {
        //sabse pehle check stack empty or not
        long long x = val;
        if(s.empty()){
            //mini bna do usse or push kardo
            mini = x;
            s.push(x);
        }
        else{
            if(x < mini){
                s.push(2*x*1LL - mini);
                mini = x;
            }
            else
                s.push(x);
        }
    }
    
    void pop() {
        //check empty
        if(s.empty())
            return;
        long long elem = s.top();
        s.pop();
        
        //check update mini
        if(elem < mini)
            mini = 2*mini-elem;
    }
    
    int top() {
        if(s.empty())
            return -1;
        long long elem = s.top();
        if(elem < mini)
            return mini;
        return elem;
    }
    
    int getMin() {
        return mini;
    }
};

// /**
// Your MinStack object will be instantiated and called as such:
// MinStack* obj = new MinStack();
// obj->push(val);
// obj->pop();
// int param_3 = obj->top();
// int param_4 = obj->getMin();
