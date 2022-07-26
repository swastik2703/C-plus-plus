#include<iostream>
#include<map>
#include<unordered_map>
using namespace std;

int main(){

    //create
    unordered_map<string,int> m;
    
    //insertion
    //since key or value pair ke form mai hai 
    pair<string,int> p = make_pair("swastik",3);
    m.insert(p);

    //2
    pair<string,int> p1("vasistha",2);
    m.insert(p1);

    //3
    m["mera"] = 1;

    //what will happen
    m["mera"] = 2;

    //print
    cout<<m["swastik"]<<endl;
    cout<<m.at("vasistha")<<endl;

    //agar koi unknown resource use kre
    //cout<<m.at("whoii")<<endl;  //error dega

    //but agar at function na lga ke normal value print karaye
    cout<<m["whoii"]<<endl;    //el key bnadega or output mai 0 dega
    //now we can use at function for the same key
    cout<<m.at("whoii")<<endl;

    //check whether key is present or not
    //1: present  0: not present
    cout<<m.count("swastik")<<endl;

    //size check
    cout<<m.size()<<endl;

    //remove
    m.erase("vasistha");
    cout<<m.size()<<endl;

    //sarri values ko access krna hai
    //use iterator

    unordered_map<string,int> :: iterator it = m.begin();

    while(it != m.end()){
        cout<<it->first <<" "<<it->second<<endl;
        it++;
    }

    return 0;
}