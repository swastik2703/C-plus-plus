#include<iostream>
using namespace std;

int clearbit(int n,int pos)
{
    int complement=~(1<<pos);
    return (n & complement);
}

int main()
{
    cout<<clearbit(5,2);
}