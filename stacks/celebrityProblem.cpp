#include<bits/stdc++.h>
using namespace std;
class Solution 
{
    private:
    bool knows(vector<vector<int> >& M, int a, int b, int n){
        if(M[a][b] == 1){
            return true;
        }
        else
        return false;
    }
        
    public:
    //Function to find if there is a celebrity in the party or not.
    int celebrity(vector<vector<int> >& M, int n) 
    {
         //stack bna lo
         stack<int> s;
         
        //step1 elements ko stack mai dal do
        for(int i=0; i<n; i++){
            s.push(i);
        }  
            while(s.size() > 1){
                int a = s.top();
                s.pop();
                
                int b = s.top();
                s.pop();
                
                if(knows(M,a,b,n)){
                    s.push(b);
                }
                else{
                    s.push(a);
                }
            }
            
            //ab apka single element bacha hoga stack mai
            //row or column ko check krlo
            
            int ans = s.top();
            bool rowCheck = false;
            int countZero = 0;
            
            for(int i=0; i<n; i++){
                if(M[ans][i] == 0){
                    countZero++;
                }
            }    
                //if all zeros then true
                if(countZero == n){
                    rowCheck = true;
                }
                
            
            
            bool colCheck = false;
            int countOne = 0;
            for(int i=0; i<n; i++){
                if(M[i][ans] == 1){
                    countOne++;
                }
            }
            
                if(countOne == n-1){
                    colCheck = true;
                }
                
                if(rowCheck == true && colCheck == true){
                    return ans;
                }
                else{
                    return -1;
                }
            
        
    }
};


