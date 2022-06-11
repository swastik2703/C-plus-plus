#include<iostream>

#include<algorithm>

using namespace std;

class Fraction {

    // Complete the class
    int num,den;
    public:
    Fraction(int num,int den){
        this->num = num;
        this->den= den;
    }
    
    void add(Fraction a2){
        num = (num*a2.den) + (a2.num*den);
        den = den*a2.den;
        int gcd = __gcd(num,den);
        num = num/gcd;
        den = den/gcd;
    }
    
      void multiply(Fraction a2){
        num = (num*(a2.num));
        den = den*a2.den;
        int gcd = __gcd(num,den);
        num = num/gcd;
        den = den/gcd;
    }
    
    void print(){
        cout<<num<<"/"<<den<<endl;
    }

};

int main() {

    //Write your code here
    int num1,den1;
    cin>>num1>>den1;
    Fraction a1(num1,den1);
    
    int choice,t;
    cin>>t;
    
    for(int i = 0; i<t; i++){
        cin>>choice;
        int num2,den2;
        cin>>num2>>den2;

       Fraction a2(num2,den2);

    if(choice==1){

           a1.add(a2);

           a1.print();

       }

       if(choice==2){

           a1.multiply(a2);

           a1.print();

       }

   }
    return 0;
}