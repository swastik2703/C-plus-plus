#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;

    int a[n];   //because we have to check till a[i+1]
    
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }

    

    int ans=0;
    int maxi=-1;

    for(int i=0;i<n;i++)
    {
        if(a[i]>maxi && a[i]>a[i+1])
        {
            ans++;
            
        }
        maxi=max(maxi,a[i]);
        
    }
    cout<<ans;
}