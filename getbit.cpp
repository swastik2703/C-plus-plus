#include<iostream>
using namespace std;

int getbit(int n,int pos)
{
    return ((n & (1<<pos))!=0);     //<< is the left shift operator
}

int main()
{
    cout<<getbit(5,2);        //5 is the value of n  2 is the position

}