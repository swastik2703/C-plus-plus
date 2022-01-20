#include<iostream>
#include<array>
using namespace std;


int main()
{
    array<int,5> a = {1,2,3,4,5};
    int size = a.size();
    //accessing array elements
    for(int i = 0; i<size; i++)
    {
        cout<<a[i]<<endl;
    }

    //find particular element of that index
    cout<<"element at index 3 is: "<<a.at(3)<<endl;

    //check array is full or empty
    cout<<"array is full or empty "<<a.empty()<<endl;

    //find first and last element in array
    cout<<"1st and last element is: "<<a.front()<<" "<<a.back()<<endl;
}