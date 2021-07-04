#include<iostream>
using namespace std;

bool iseven(int i)
{
    if(i%2==0)
    {
        return true;
    }
    return false;
}


int main()
{
    int n;
    cin>>n;
    for(int i=1;i<n;i++)
    {
        if(iseven(i))
        {
            cout<<i<<" ";
        }
    }
}