#include<iostream>
#include<queue>
using namespace std;
class Queue {
    
    //data members
    int *arr;
    int qfront;
    int rear;
    int size;
public:
    Queue() {
        //size nhi de rkha bna lo
        size = 100000;
        arr = new int[size];
        qfront = 0;
        rear = 0;
    }

    /*----------------- Public Functions of Queue -----------------*/

    bool isEmpty() {
        if(qfront == rear){
            return true;
        }
        else
            return false;
           
    }

    void enqueue(int data) {
        //check karo full toh nhi
        if(rear == size){
            return;
        }
        else{
            arr[rear] = data;
            rear++;
        }
    }

    int dequeue() {
        //check kro empty toh nhi
        if(qfront == rear)
            return -1;
        else{
            int ans = arr[qfront];
            arr[qfront] = -1;
            qfront++;
            if(qfront == rear){
                qfront = 0;
                rear = 0;
            }
            return ans;
        }
        

    }
    

    int front() {
        if(qfront == rear){
            return -1;
        }
        else{
            return arr[qfront];
        }
    }
};