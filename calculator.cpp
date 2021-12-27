#include<iostream>
using namespace std;

// int main()
// {
//     int a,b;
//     char op;
//     cout<<"enter the operator:";
//     cin>>op;
//     cout<<"enter the 2 no:";
//     cin>>a>>b;
//     switch (op)
//     {
//     case '+': cout<<a+b; 
//         break;
//     case '-': cout<<a-b; 
//         break;
//     case '*': cout<<a*b; 
//         break;
//     case '/': cout<<a/b; 
//         break;
//     case '%': cout<<a%b; 
//         break;
    
//     default: cout<<"enter other operator";
//         break;
//     }
// }



int main()
{
    int a = 5,b = 2;
    char op;
    int res;

    cin>>op;

    switch(op)
    {
        case '+' : cout<< a + b;
        break;
        case '-' : cout<< a - b;
        break;
        case '*' : cout<< a * b;
       
        break;
        case '/' : cout<< a / b;
       
        break;

        default: cout<<"not a valid operator"<<endl;
    }
}