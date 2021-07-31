#include<iostream>
using namespace std;

int main()
{
    int a=10;
    int *aptr;
    aptr=&a;
    cout<<&a;
    cout<<endl<<aptr;
    cout<<endl<<*aptr;
    *aptr=20;
    cout<<endl<<*aptr;
}