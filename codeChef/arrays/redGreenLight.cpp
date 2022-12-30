// Problem
// “You won’t get caught if you hide behind someone.”

// Sang-Woo advises Gi-Hun to hide behind someone to avoid getting shot.

// Gi-Hun follows Sang-Woo's advice and hides behind Ali, who saved his life earlier. Gi-Hun and Ali both have the same height, KK. Many players saw this trick and also started hiding behind Ali.

// Now, there are NN players standing between Gi-Hun and Ali in a straight line, with the i^{\text{th}}i 
// th
//   player having height H_iH 
// i
// ​
//  . Gi-Hun wants to know the minimum number of players who need to get shot so that Ali is visible in his line of sight.

// Note:

// Line of sight is a straight line drawn between the topmost point of two objects. Ali is visible to Gi-Hun if nobody between them crosses this line.
// Even if there are some players who have the same height as that of Gi-Hun and Ali, Ali will be visible in Gi-Hun's line of sight.
// Gi-Hun and Ali have the same height.
// Input Format
// The first line of input contains a single integer TT, denoting the number of test cases. The description of TT test cases follows.
// The first line of each test case contains two space-separated integers NN and KK, denoting the total number of players between Gi-Hun and Ali and the height of both of them respectively.
// The second line of each test case contains NN space-separated integers, denoting the heights of the players between Gi-Hun and Ali.

// 3
// 4 10
// 2 13 4 16
// 5 8
// 9 3 8 8 4
// 4 6
// 1 2 3 4
// OUTPUT
// 2
// 1
// 0


#include <iostream>
#include<vector>
//#include<bits/stdc++.h>
using namespace std;

int main() {
    int n,k,t;
    cin>>t;
    
    while(t--){
        int i;
        cin>>n>>k;
        int count = 0;
        vector<int> arr(n);
        for(i=0; i<n; i++){
            cin>>arr[i];
            if(arr[i] > k){
                count++;
            }
        }
         cout<<count<<endl;
    }
   
	return 0;
}
