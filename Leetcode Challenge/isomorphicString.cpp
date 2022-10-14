#include<vector>
#include<string>
using namespace std;
class Solution {
public:
    bool isIsomorphic(string s, string t) {
        vector<int> arr(256,-1);
        vector<bool> vis(256,0);
        vector<bool> vis1(256,0);
        
        for(int i=0; i<s.length(); i++){
            if(vis[s[i]] == 1 || vis1[t[i]] == 1){
                if(arr[s[i]] != t[i] - 'a')
                    return false;
            }
            else{
                vis[s[i]] = 1;
                vis1[t[i]] = 1;
                arr[s[i]] = t[i] - 'a';
            }
          
        }
        return true;
    }
};