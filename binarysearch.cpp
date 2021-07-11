#include<iostream>
using namespace std;

int binarysearch(int arr[],int n,int key)
{
    int mid;
    int start=0;
    int end=n;
    while(start<=end)
    {
        mid=(start+end)/2;
        if(arr[mid]==key)
        {
            return mid;
        }
        else if(arr[mid]>key)
        {
            end=mid-1;
        }
        else if(arr[mid]<key)
        {
            start=mid+1;
        }
    }
    return 0;
}

int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int key;
    cout<<"enter key to be searched:"<<endl;
    cin>>key;

    cout<<binarysearch(arr,n,key);
}