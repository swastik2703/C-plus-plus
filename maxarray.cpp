#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    int top=arr[0];
    for(int i=0;i<n;i++)
    {
        top=max(top,arr[i]);
        cout<<top<<" ";
    }
}