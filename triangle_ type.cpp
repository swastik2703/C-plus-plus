#include<iostream>
using namespace std;

int main()
{
    int side1,side2,side3;
    cin>>side1>>side2>>side3;
    if(side1==side2 && side2==side3)
    {
        cout<<"equilateral triangle";
    }
    else if(side1==side2 || side1==side3 || side2==side3)
    {
        cout<<"isosceles triangle";
    }
    else
    {
        cout<<"scalene triangle";
    }
}