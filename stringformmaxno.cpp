#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

int main()
{
    string s="54396312756";
    sort(s.begin(),s.end(),greater<int>());
    cout<<s;
}