#include<iostream>
using namespace std;

void isnum(int n1,int n2,int n3)
{
    if(n1>n2 && n1>n3)
    {
        cout<<"maximum"<<"="<<n1;
    }
    else if(n2>n1 && n2>n3)
    {
        cout<<"maximum"<<"="<<n2;
    }
    else
    {
        cout<<"maximum"<<"="<<n3;
    }
    return;
}

int main()
{
    int a,b,c;
    cin>>a>>b>>c;
    isnum(a,b,c);
}