#include<iostream>
using namespace std;

int main()
{
    int a=50;
    int *ptr=&a;
    cout<<ptr<<endl;    //print address of a
    ptr++;              //increment according to he data type
    cout<<ptr;
}