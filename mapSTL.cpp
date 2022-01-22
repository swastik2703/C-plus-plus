#include<iostream>
#include<map>
using namespace std;

int main(){

    //declare
    map<int,string> m;
    m[1] = "Swastik";
    m[5] = "Vasistha";
    m[3] = "Manav";
    m[2] = "Rachna";

    m.insert({4,"qwe"});

    //display
    cout<<"before erase"<<endl;
    for(auto i:m){
        cout<<i.first<<" "<<i.second<<" "<<endl;
    }cout<<endl;

    //count
    cout<<"find 3:"<<m.count(3)<<endl;


    //erase
    cout<<"after erase"<<endl;
    m.erase(2);
    for(auto i:m){
        cout<<i.first<<" "<<i.second<<endl;
    }

    //find
    auto it = m.find(1);
    for(auto i = it; i!=m.end(); i++)
    {
        cout<<(*i).first<<endl;
    }
}