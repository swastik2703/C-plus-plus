#include<iostream>
using namespace std;

int main()
{
    int a = 5, b = 2;

    cout<<"print and operator\n";
    cout<< (a&b)<<endl;
    cout<<"print or operator\n";
    cout<< (a|b)<<endl;
    cout<<"print not operator\n";
    cout<< (~a)<<endl;
    cout<<"print XOR operator\n";
    cout<< (a^b);

}