#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"enter the total no.:";
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        if(i%2==0)
        {
            continue;
        }
        else
        {
            cout<<i<<endl;
        }
    }
}