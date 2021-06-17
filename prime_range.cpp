#include<iostream>
using namespace std;

int main()
{
    int a,b;
    cout<<"enter two no:";
    cin>>a>>b;
    for(int i=a;i<=b;i++)
    {
        for(int s=2;s<i;s++)
        {
            if(s%i==0)
            {
                cout<<"not prime";
            }
            else if(i==s)
            {
                cout<<s;
            }
        }
    }
}