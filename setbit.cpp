#include<iostream>
using namespace std;

int setbit(int n,int pos)
{
    return (n | (1<<pos));      //| is a or operator  1|1 he 1 hoga bus
}

int main()
{
    cout<<setbit(5,1);
}