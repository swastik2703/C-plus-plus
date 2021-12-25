#include<iostream>
#include<math.h>
using namespace std;

// void binarytodecimal(int n)
// {
//     int sum=0;
//     int x=1;
//     while(n>0)
//     {
//         int y=n%10;
//         sum+=x*y;
//         x*=2;
//         n/=10;
//     }
//     cout<<sum;
//     return;
// }

// int main()
// {
//     int n;
//     cin>>n;
//     binarytodecimal(n);
// }


int main()
{
    int n,i=0;
    cin>>n;
    int ans = 0;


    while(n!=0)
    {
        int digit = n%10;

        if(digit == 1)
        {
            ans = ans + pow(2,i);
        }

        n = n/10;
        i++;
    }

    cout<<ans;
}