#include<string>
#include<vector>
using namespace std;
class Solution {
    
public:
    int solve(string& a, string& b, int i, int j, vector<vector<int> >& dp){
        if(i == a.length())
            return 0;
        if(j == b.length())
            return 0;
        //if already stord in dp
        if(dp[i][j] != -1)
            return dp[i][j];
        int ans;
        if(a[i] == b[j])
            return (1+solve(a,b,i+1,j+1,dp));
        else
            ans = max(solve(a,b,i+1,j,dp), solve(a,b,i,j+1,dp));
        return dp[i][j] = ans;
    }
    
    int longestCommonSubsequence(string text1, string text2) {
        //function bnao jaha subsequence niklega
        vector<vector<int>> dp(text1.length(), vector<int> (text2.length(), -1));
        return solve(text1,text2,0,0,dp);
    }
};