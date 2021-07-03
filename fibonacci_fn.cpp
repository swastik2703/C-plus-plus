#include<iostream>
using namespace std;

void fib(int a)
{
    int a1=0;
    int a2=1;
    cout<<a1<<" "<<a2<<" ";
    for(int i=3;i<=a;i++)
    {
        int nextterm=a1+a2;
        cout<<nextterm<<" ";
        a1=a2;
        a2=nextterm;
    }
    return;
}

int main()
{
    int n;
    cin>>n;
    fib(n);
}