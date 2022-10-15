#include<cstring>
#include<string>
using namespace std;
class Solution {
    bool subsequence(string s, string t, int m, int n){
        //base case
        if(m==0)
            return true;
        if(n==0)
            return false;
        
        if(s[m-1] == t[n-1])
            return subsequence(s,t,m-1,n-1);
        return subsequence(s,t,m,n-1);
    }
public:
    bool isSubsequence(string s, string t) {
        int m = s.size();
        int n = t.size();
        return subsequence(s,t,m,n);
    }
};