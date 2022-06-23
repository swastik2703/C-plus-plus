#include<iostream>
#include<vector>
#include<stack>
#include<climits>
using namespace std;

class Solution {
private:
    vector<int> nextSmallerElement(vector<int> arr, int n){
        //stack bnalo
        stack<int> s;
        s.push(-1);
        
        //vector bnalo
        vector<int>ans(n);
        
        //traverse from right
        for(int i = n-1; i >= 0; i--){
            //curr mai value store kara lo
            int curr = arr[i];
            //index value ko store karana hai and top -1 nhi hona chahiye
            while(s.top() != -1 && arr[s.top()] >= curr){
                //bda hai toh pop kardo
                s.pop();
            }
            ans[i] = s.top();
            s.push(i);
        }
        return ans;
    }
    
    
    vector<int> prevSmallerElement(vector<int> arr, int n){
        //stack bnalo
        stack<int> s;
        s.push(-1);
        
        //vector bnalo
        vector<int>ans(n);
        
        //traverse from right
        for(int i = 0; i < n; i++){
            //curr mai value store kara lo
            int curr = arr[i];
            //index value ko store karana hai and top -1 nhi hona chahiye
            while(s.top() != -1 && arr[s.top()] >= curr){
                //bda hai toh pop kardo
                s.pop();
            }
            ans[i] = s.top();
            s.push(i);
        }
        return ans;
    }
    public:
    int largestRectangleArea(vector<int>& heights) {
        //size store
        int n = heights.size();
        
        //prevSmallerElement store krao
        vector<int> prev(n);
        prev = prevSmallerElement(heights,n);
        
        //nextSmallerElement store kara lo
        vector<int> next(n);
        next = nextSmallerElement(heights,n);
        
        //since hame area maximum chahiye
        int area = INT_MIN;
        //length and breadth nika lo
        for(int i = 0; i < n; i++){
            int length = heights[i];
            //next area he -1 hogya
            if(next[i] == -1){
                next[i] = n;
            }
            int breadth = next[i] - prev[i] - 1;
            int newArea = length*breadth;
            area = max(area,newArea);
        }
        return area;
    }
};