#include<vector>
using namespace std;
class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int sum = 0;
        for(int i=0; i<nums.size(); i++){
            sum+= nums[i];
        }
        
        int leftSum = 0;
        int rightSum = sum;
        
        for(int i=0; i<nums.size(); i++){
            rightSum = rightSum - nums[i];
            
            if(leftSum == rightSum)
                return i;
            
            leftSum = leftSum + nums[i];
        }
        return -1;
    }
  
};