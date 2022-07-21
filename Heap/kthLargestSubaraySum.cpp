#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int getKthLargest(vector<int> &arr, int k)
{
    vector<int> storeSum;
    int n = arr.size();
    //sum of all subarray
    for(int i=0; i<n; i++){
        int sum = 0;
        for(int j=i; j<n; j++){
            sum+= arr[j];
            storeSum.push_back(sum);
        }
    }
    
    sort(storeSum.begin(),storeSum.end());
    return storeSum[storeSum.size() - k];
}

int main(){
    vector<int> arr;
    int k = 5;
    return getKthLargest(arr,k);

}


//optimise approach with space complexity O(k)
// #include<queue>
// int getKthLargest(vector<int> &arr, int k)
// {
//     priority_queue<int,vector<int>,greater<int>> mini;
    
//     int n = arr.size();
//     for(int i=0; i<n; i++){
//         int sum =0;
//         for(int j=i; j<n; j++){
//             sum+= arr[j];
//             if(mini.size() < k){
//                 mini.push(sum);
//             }
            
//             else{
//                 if(sum > mini.top()){
//                     mini.pop();
//                     mini.push(sum);
//                 }
//             }
//         }
//     }
//     return mini.top();
// }