#include<iostream>
using namespace std;

int no_of_one(int n)
{
    int count=0;
    while(n!=0)
    {
        n=n & n-1;
        count++;
    }
    return count;
}

int main()
{
    int n;
    cout<<no_of_one(19);
}