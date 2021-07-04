#include<iostream>
using namespace std;

void iseven(int n)
{
    if(n%2==0)
    {
        cout<<"even";
    }
    else{
    cout<<"odd";
    }
    return;
}

int main()
{
    int n;
    cin>>n;
    iseven(n);
}