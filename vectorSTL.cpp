#include<iostream>
#include<vector>
using namespace std;

int main()
{
    // declaration
    vector<int> v;

    //if size known
    vector<int> a(5,1);
    for(int i:a){
        cout<<i<<" ";
    }
    cout<<endl;

    //copy vector
    vector<int> last(a);
    cout<<"last vector is:";
    for(int i:last){
        cout<<i<<" ";
    }
    cout<<endl;
    
    //check capacity of vector
    cout<<"capacity is: "<<v.capacity()<<endl;

    //check size
    cout<<"size is: "<<v.size()<<endl;

    //push element to the vector
    v.push_back(1);
    cout<<"capacity is: "<<v.capacity()<<endl;
    v.push_back(2);
    cout<<"capacity is: "<<v.capacity()<<endl;
    v.push_back(3);
    cout<<"capacity is: "<<v.capacity()<<endl;
    v.push_back(4);
    cout<<"capacity is: "<<v.capacity()<<endl;

    //display elements
    // for(int i:v)
    // {
    //     cout<<i<<endl;
    // }

    //delete element
    //before pop
    cout<<"before pop"<<endl;
    for(int i:v){
        cout<<i<<" "<<endl;
    }

    //after pop
    v.pop_back();
    cout<<"after pop"<<endl;
    for(int i:v){
        cout<<i<<" "<<endl;
    }

    //clear function
    cout<<"before clear"<<endl;
    for(int i:v){
        cout<<i<<" "<<endl;
    }
    cout<<"size is:"<<v.size()<<endl;

    //after clear
    v.clear();
    cout<<"after clear"<<endl;
    for(int i:v){
        cout<<i<<" "<<endl;
    }
    cout<<"size is:"<<v.size()<<endl;
}