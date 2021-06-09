#include<iostream>
using namespace std;

int main()
{
    int rows,column,i,j;
    cout<<"enter the rows and column:";
    cin>>rows>>column;
    for(i=1;i<=rows;i++)
    {
       for(j=1;j<=column;j++)
       {
           cout<<"*"<<" ";
       }
       cout<<endl;
    }
}