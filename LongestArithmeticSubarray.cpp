#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }

    int pcd=a[1]-a[0];
    int curr=2;
    int ans=2;
    int j=2;

    while(j<n)
    {
        if(a[j]-a[j-1]==pcd)
        {
            curr++;
        }

        else
        {
            pcd=a[j]-a[j-1];
            curr=2;
        }

        ans=max(ans,a[j]);
    }
    cout<<ans<<endl;
}