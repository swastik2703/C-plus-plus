#include<iostream>
using namespace std;

void octaltodecimal(int n)
{
    int sum=0;
    int x=1;
    while (n>0)
    {
        int y=n%10;
        sum+=x*y;
        x*=8;
        n/=10;
    }
    cout<<sum;
    return;
    
}

int main()
{
    int n;
    cin>>n;
    octaltodecimal(n);
}