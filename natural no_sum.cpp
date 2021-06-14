#include<iostream>
using namespace std;

// int main()
// {
//     int n;
//     int sum=0;
//     cout<<"enter the total natural no:";
//     cin>>n;
//     for(int i=1;i<=n;i++)
//     {
//         cout<<i<<endl;
//         sum=sum+i;
//     }
//     cout<<"the sum of natural no is:"<<sum;
//     return 0;
// }


// int main()
// {
//     int n,sum=0;
//     int i=1;
//     cin>>n;
//     while(i<=n)
//     {
//         cout<<i<<" "<<endl;
//         sum+=i;
//         i++;
//     }
//     cout<<"sum ="<<sum;
// }

int main()
{
    int n,sum=0;
        int i=1;
        cin>>n;
    do
    {
        cout<<i<<endl;
        sum+=i;
        i++;
    }
    while(i<=n);
    cout<<"sum="<<sum;
}