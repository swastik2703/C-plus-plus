#include<iostream>
using namespace std;

void primefactor(int n)
{
    int a[100]={0};     //initialise with 0
    for(int i=2;i<=n;i++)
    {
        a[i]=i;     //hr no khud ka prime factor hoga
    }

    for(int i=2;i<=n;i++)
    {
        if(a[i]==i)     //check agar unmarked hai 
        {
            for(int j=i*i;j<=n;j+=i)
            {
                if(a[j]==j)     //j mai enter krne ke baad j ko check kro vo unmarked hai if yes
                {
                    a[j]=i;     //swap
                }
            }
        }
    }

    while(n!=1)
    {
        cout<<a[n]<<" ";
        n=n/a[n];
    }

}

int main()
{
    int n;
    cin>>n;
    primefactor(n);
}