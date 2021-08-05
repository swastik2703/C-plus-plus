#include<iostream>
#include<string>
using namespace std;

int main()
{
    // string str;          type1 declaring
    // cin>>str;         
    // cout<<str;

    // string str="apnikaksha";      type2 declaration
    // cout<<str;

    // string str(5,'s');           if we want to print any particular character of n size
    // cout<<str;                      

    string str;
    getline(cin,str);      //in a string when we have to print spaces also
    cout<<str;
}