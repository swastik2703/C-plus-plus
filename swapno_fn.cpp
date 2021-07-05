#include<iostream>
using namespace std;

void swap(int x,int y)
{
    int z;
    z=x;
    x=y;
    y=z;
    cout<<"after swaping:";
    cout<<x<<" "<<y;
}

int main()
{
    int a,b;
    cin>>a>>b;
    cout<<"before swaping:";
    cout<<a<<" "<<b<<endl;
    swap(a,b);
}