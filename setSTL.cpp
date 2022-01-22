#include<iostream>
#include<set>
using namespace std;

int main(){
    
    //declare
    set<int>s;

    //inserting values to set
    s.insert(1);
    s.insert(5);
    s.insert(2);
    s.insert(9);
    
    //displaying set 
    for(auto i:s){
        cout<<i<<" ";
    }
    cout<<endl;

    //check size
    cout<<s.size()<<endl;

    //erase
    cout<<"earsing 1st element"<<endl;
    s.erase(s.begin());
    for(auto i:s)
    {
        cout<<i<<" ";
    }cout<<endl;

    //find operation
    set<int>::iterator itr = s.find(2);

    for(auto it = itr; it!= s.end(); it++)
    {
        cout<<*it<<" ";
    }cout<<endl;


    //count function
    cout<<"is 1 present or not -> "<<s.count(1)<<endl;
    
}
