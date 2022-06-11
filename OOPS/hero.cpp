#include<iostream>
#include<string.h>
using namespace std;

// hero class
class hero{

    //public modifier
    //help to access the properties inside and outside the class.

    //private modifiers
    //helps to access the properties inside the class only.

    public:
    int age;
    char gender;
    char *name;

    int gethealth(){
        return health;
    }

    void sethealth(int h){
        health = h;
    }

    char getage(){
        return age;
    }

    void setage(int a){
        age = a;
    }

    void setname(char name[]){
        strcpy(this->name,name);
    }

    void print(){
        cout<<endl;
        cout<<"health  : "<<this->health<<", ";
        cout<<"age : "<<this->age<<", ";
        cout<<"name : "<<this->name<<endl;
        cout<<endl;
    }


    //default constructor without parameter
    hero(){
        cout<<"I am calling a constructor"<<endl;
        name = new char[100];
    }

    //parametrised constructor
    //this keyword is used to point the current location
    hero(int health,int age){
        this->health = health;
        this->age = age;
    }

    //copy constructor
    //we use reference so that function can invoke and if we dont use it will go infinitely.
    hero(hero& temp){
        char *ch = new char[strlen(temp.name) + 1];
        strcpy(ch,temp.name);
        this->name = ch;
        cout<<"copy constructor called"<<endl;
        this->health = temp.health;
        this->age = temp.age;

    }



    //getters & setters
    //are used to access the private properties outside the class

    private:
    int health;
    

    


};


int main(){

    hero h1;
    h1.setage(20);
    h1.sethealth(100);
    char name[8] = "Swastik";
    h1.setname(name);
    h1.print();

    hero h2(h1);
    h2.print();
    h1.name[0] = 'V';
    h1.print();
    //shallow copy
    h2.print();


    //object is created to call the class properties
    // hero s;
    
    // cout<<"health is :"<<s.gethealth()<<endl;
    // s.sethealth(40);
    // s.age = 20;
    // s.gender = 'M';

    // cout<<"age is : "<<s.age<<endl;
    // cout<<"gender is : "<<s.gender<<endl;

    // //accessing the get and set function
    // cout<<"swastik health is : " <<s.gethealth()<<endl;
    // // s.sethealth(50);


    // //static alloction
    // hero a;
    // cout<<"statically allocating the age"<<endl;
    // a.age = 15;
    // cout<<"age is : "<<a.age<<endl;

    // //dynamic allocation
    // hero *b = new hero;
    // cout<<"dynamically allocating the gender"<<endl;
    // b->gender = 'F';
    // cout<<"gender is : "<<(*b).gender<<endl;

    // //alternate
    // cout<<"gender is : "<< b -> gender <<endl;


    //statically
    // hero sv(30,15);
    // sv.print();

    // //dynamically
    // cout<<"dynamically"<<endl;
    // hero *ab = new hero(30,15);
    // ab->print();


    // hero x(100,25);
    // x.print();

    // //copy constructor
    // hero y(x);
    // y.print();

    

    


}


 