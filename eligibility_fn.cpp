#include<iostream>
using namespace std;

bool isperson(int a)
{
    if(a>1 && a<18)
    {
        cout<<"not eligible for voting";
    }
    else if(a>=18)
    {
        cout<<"eligible for voting";
    }
    return false;
}

int main()
{
    int age;
    cin>>age;

    if(isperson(age));

}