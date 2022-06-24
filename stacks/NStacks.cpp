#include<iostream>
#include<stack>
using namespace std;

class NStack
{
    int *arr;
    int *top;
    int *next;
    int n,s;
    int freespot;
public:
    
    NStack(int N, int S)
    {
        n = N;
        s = S;
        
        //arr bnao
        arr = new int[s];
        //top bnao
        top = new int[n];
        //next bnao
        next = new int[s];
        
        //top initialize karo
        for(int i=0; i<n; i++){
            top[i] = -1;
        }
        
        //next initialize kro
        for(int i=0; i<s; i++){
            next[i] = i+1;
        }
        
        //last index mai -1 dalna hai
        next[s-1] = -1;
        
        //freespot
        freespot = 0;
    }

    // Pushes 'X' into the Mth stack. Returns true if it gets pushed into the stack, and false otherwise.
    bool push(int x, int m)
    {
        //overflow condition
        if(freespot == -1){
            return false;
        }
        //find index 
        int index = freespot;
        
        //insert element
        arr[index] = x;
        
        //update freespot
        freespot = next[index];
        
        //update next
        next[index] = top[m-1];
        
        //top update
        top[m-1] = index;
        return true;
    }

    // Pops top element from Mth Stack. Returns -1 if the stack is empty, otherwise returns the popped element.
    int pop(int m)
    {
        //underflow
        if(top[m-1] == -1){
            return -1;
        }
       int index =top[m-1];
       top[m-1] = next[index];
       next[index] = freespot;
       freespot = index;
       return arr[index];
    }
   
};