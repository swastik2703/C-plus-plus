#include<iostream>
using namespace std;

bool ispower2(int x)
{
    return !((x & (x-1)));
}

int main()
{
    int n;
    cin>>n;
    cout<<ispower2(n);
}