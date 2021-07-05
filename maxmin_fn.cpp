#include<iostream>
using namespace std;

// void isnum(int n1,int n2,int n3)
// {
//     if(n1>n2 && n1>n3)
//     {
//         cout<<"maximum"<<"="<<n1;
//     }
//     else if(n2>n1 && n2>n3)
//     {
//         cout<<"maximum"<<"="<<n2;
//     }
//     else
//     {
//         cout<<"maximum"<<"="<<n3;
//     }
//     return;
// }

// int main()
// {
//     int a,b,c;
//     cin>>a>>b>>c;
//     isnum(a,b,c);
// }

void isnum(int x,int y,int z)
{
     if(x>y && x>z)
     {
        cout<<"maximum"<<"="<<x;
     }
     else if(y>x && y>z)
     {
         cout<<"maximum"<<"="<<y;
     }
     else
     {
         cout<<"maximum"<<"="<<z;
     }
    return;
}

void ismini(int x,int y,int z)
{
    if(x<y && x<z)
    {
       cout<<"minimum"<<"="<<x;
    }
    else if(y<x && y<z)
    {
       cout<<"minimum"<<"="<<y;
    }
    else
    {
       cout<<"minimum"<<"="<<z;
    }
}

int main()
{
    int a,b,c;
    cin>>a>>b>>c;
    isnum(a,b,c);
    ismini(a,b,c);
}