#include<iostream>
using namespace std;

class student{
    public:
    string name;
    int age;
    bool gender;

    //parameterized constructor
    student(string n,int a,bool g)
    {
        cout<<"its a parameterized constructor"<<endl;
        name = n;
        age = a;
        gender = g;
    }

    //default constructor when no parameter is passes
    student()
    {
        cout<<"default constructor"<<endl;
    }

    //copy constructor
    student(student &a)
    {
        cout<<"copy constructor";
    }
    
    
};

int main()
{   
    student a("swastik",18,1);
    // cout<<a.name<<endl;
    // cout<<a.age<<endl;
    // cout<<a.gender<<endl;

    student b;

    student c(a);
}