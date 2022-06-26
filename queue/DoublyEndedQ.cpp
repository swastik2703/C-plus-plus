#include<iostream>
#include<queue>
using namespace std;

int main(){

    //creation
    deque<int> d;
    d.push_front(10);
    d.push_front(1);
    d.push_front(20);
    d.push_front(30);

    cout<<"front element is "<<d.front()<<endl;

    d.pop_front();
    cout<<"front element is "<<d.front()<<endl;

    d.pop_back();
    cout<<"front element is "<<d.front()<<endl;
    cout<<"back element is "<<d.back()<<endl;

    d.push_back(100);
    cout<<"back element is "<<d.back()<<endl;



    return 0;
}