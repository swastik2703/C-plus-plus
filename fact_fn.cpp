#include<iostream>
using namespace std;

int fact(int a)
{
    int factorial=1;
    for(int i=2;i<=a;i++)
    {
        factorial=factorial*i;
    }
    cout<<factorial;
    return factorial;
}

int main()
{
    int n;
    cin>>n;
    fact(n);
}