#include<bits/stdc++.h>
using namespace std;

void sum(int n)
{
    int ans=0;
    for(int i=1;i<=n;i++)
    {
        ans+=i;
    }
    cout<<ans;
    return;
}

int main()
{
    int n;
    cin>>n;
    sum(n);
}