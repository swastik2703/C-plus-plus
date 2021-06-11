#include<iostream>
using namespace std;

int main()
{
    int n,arr[5];
    cout<<"enter the size of array:";
    cin>>n;
    cout<<"enter the array elements:";
    for(int i=1;i<=n;i++)
    {
        cin>>arr[i];
    }
    cout<<"the array elements are\n";
    for(int i=1;i<=n;i++)
    {
        cout<<arr[i]<<endl;
    }
}