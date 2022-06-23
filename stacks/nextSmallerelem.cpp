#include<iostream>
#include<vector>
#include<stack>
using namespace std;
vector<int> nextSmallerElement(vector<int> &arr, int n)
{
    stack<int> s;
    s.push(-1);
    
    vector<int> v(n);
    for(int i = n-1; i >=0; i--){
        int curr = arr[i];
        while(s.top() >= curr){
            s.pop();
        }
        //mil gaya
        v[i] = s.top();
        s.push(curr);
    }
    return v;
}