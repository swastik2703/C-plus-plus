#include<iostream>
#include<queue>
using namespace std;

int main(){

    //creation
    queue<int> q;

    //push into queue
    q.push(10);
    //check front
    cout<<"front element is:- "<<q.front()<<endl;
    q.push(20);
    cout<<"front element is:- "<<q.front()<<endl;
    q.push(30);

    //check size
    cout<<"Size is:- "<<q.size()<<endl;

    //empty
    if(q.empty()){
        cout<<"queue is empty"<<endl;
    }
    else
        cout<<"Not empty"<<endl;


    //print queue element
    cout<<"Elements in queue are:- "<<endl;
    while(!q.empty()){
       cout<<q.front()<<" ";
        q.pop();
    }
    cout<<endl;

    cout<<"Size is:- "<<q.size()<<endl;
    
    //empty
    if(q.empty()){
        cout<<"queue is empty"<<endl;
    }
    else
        cout<<"Not empty"<<endl;

}