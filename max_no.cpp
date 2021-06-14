#include<iostream>
using namespace std;

int main()
{
    int a,b,c;
    cin>>a>>b>>c;
    if(a>b && a>c)
    {
        cout<<"max=a="<<a;
    }
    else
    {
        if(b>a && b>c)
        {
            cout<<"max=b="<<b;
        }
        else
        {
            cout<<"max=c="<<c;
        }
    }
}