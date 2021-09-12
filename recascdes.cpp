#include<iostream>
using namespace std;

void desc(int n)
{
    if(n==1)
    {
        cout<<"1"<<endl;
        return;
    }

    cout<<n<<" ";
    desc(n-1);
}

void asc(int n)
{
    if(n==1)
    {
        cout<<"1"<<" ";
        return;
    }

    asc(n-1);
    cout<<n<<" ";
}

int main()
{
    int n;
    cin>>n;
    desc(n);
    asc(n);
}