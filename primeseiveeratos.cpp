#include<iostream>
using namespace std;

void primeseive(int n)
{
    int prime[100]={0};     //100 no array initialise with 0 index
    for(int i=2;i<=n;i++)   //starting with 2 bcuz its a prime no
    {
        if(prime[i]==0)     //condition for unmarked
        {
            for(int j=i*i;j<=n;j+=i)    //we need multiples thatswhy i^2
            {
                prime[j]=1;       //marked no's
            }
        }
    }

    for(int i=2;i<=n;i++)
    {
        if(prime[i]==0)         //if unmarked 
        {
            cout<<i<<" ";       //print those no's
        }
        
    }
    cout<<endl;
}

int main()
{
    int n;
    cin>>n;
    primeseive(n);

}