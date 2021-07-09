#include<iostream>
#include<climits>
using namespace std;

// int main()
// {
//     int n,i;
//     cin>>n;
//     int arr[n];
//     for(i=0;i<n;i++)
//     {
//         cin>>arr[i];
//     }
        
//     int maxno=INT_MIN;
//     int minno=INT_MAX;   
//     for(i=0;i<n;i++)
//     {
//     if(arr[i]>maxno)
//     {
//         maxno=arr[i];
//     }
//     if(arr[i]<minno)
//     {
//         minno=arr[i];
//     }
//     }
//     cout<<maxno<<" "<<minno;
// }


int main()
{
    int n,i;
    cin>>n;
    int arr[n];
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    int maxno=INT_MIN;
    int minno=INT_MAX;

    for(i=0;i<n;i++)
    {
        maxno=max(maxno,arr[i]);
        minno=min(minno,arr[i]);
    }
    cout<<maxno<<" "<<minno;
}