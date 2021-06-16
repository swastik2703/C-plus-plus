#include<iostream>
using namespace std;

int main()
{
    int n;
    int sum=0;
        cout<<"enter the no:";
         cin>>n;
    while(n>=0)
    { 
         sum+=n;
         cout<<"enter the no:";
         cin>>n;

    }
    cout<<"sum="<<sum; 
}

