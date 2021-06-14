#include<iostream>
using namespace std;

int main()
{
    char c;
    cout<<"enter the alphabet:";
    cin>>c;
    int islower,isupper;
    islower=(c=='a' || c=='e' || c=='i' || c=='o' || c=='u' );
    isupper=(c=='A' || c=='E' || c=='I' || c=='O' || c=='U' );
    if(islower || isupper)
    {
        cout<<c<<" "<<"is a vowel";
    }
    else
    {
        cout<<c<<" "<<"is a consonant";
    }
}