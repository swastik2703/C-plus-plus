#include<iostream>
using namespace std;

class student{
    public:             //by default if we wont use public then default modifier used is private which is accessible within the class
    string name;        //data members
    int rollno;         //data members
    char gender;        //data members

    void printinfo()
    {
        
            cout<<"name ="<<" "<<name<<endl;
            cout<<"rollno = "<<" "<<rollno<<endl;
            cout<<"gender = "<<" "<<gender<<endl;
        
    }
};

int main()
{
    // student a;          //object of class
    // a.name = "Swastik";
    // a.rollno = 1;
    // a.gender = 'M';

    // cout<<a.name<<"\n"<<a.rollno<<"\n"<<a.gender;


    //********************* USING ARRAY *****************

    student a[3];
    for(int i=0;i<3;i++)
    {
        cin>>a[i].name;
        cin>>a[i].rollno;
        cin>>a[i].gender;
    }

    for(int i=0;i<3;i++)
    {
        a[i].printinfo();
    }
    return 0;
}