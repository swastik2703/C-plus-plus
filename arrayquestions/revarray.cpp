#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main()
{
    vector<int> v;
    v.push_back(11);
    v.push_back(7);
    v.push_back(3);
    v.push_back(12);
    v.push_back(4);

    reverse(v.begin(),v.end());

    cout<<"reverse of array is: ";
    for(int i = 0; i<v.size(); i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<endl;
}