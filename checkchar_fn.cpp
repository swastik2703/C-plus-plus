#include<iostream>
using namespace std;

int isalpha(char ch)
{
    if(ch>='A' && ch<='Z' || ch>='a' && ch<='z')
    {
        cout<<"character is an alphabet";
    }
    else
    {
        cout<<"enter valid character";
    }
    return ch;
}

int main()
{
    char ch;
    cin>>ch;
    isalpha(ch);
}