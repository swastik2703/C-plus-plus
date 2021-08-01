#include<iostream>
using namespace std;

int main()
{
    int a[]={10,20,30};
    cout<<*a<<endl;         //will always point to starting index
    int *ptr=a;             
    for(int i=0;i<3;i++)
    {
        cout<<*ptr<<" ";
        ptr++;
    }
}