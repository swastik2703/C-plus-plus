#include<iostream>
using namespace std;

int updateBit(int n,int pos,int value)
{
    int comple=~(1<<pos);
    n=n & comple;
    return (n | (value<<pos));
}

int main()
{
    cout<<updateBit(5,1,1);
}