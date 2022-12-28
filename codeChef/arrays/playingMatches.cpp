//testcases
// 3
// 123 234
// 10101 1010
// 4 4

// output
// 13
// 10
// 7

// The first thing Chefu wanted to do was to calculate the result of his homework — the sum of AA and BB, and write it using matches. Help Chefu and tell him the number of matches needed to write the result.

// Digits are formed using matches in the following way: 

// Input
// The first line of the input contains a single integer TT denoting the number of test cases. The description of TT test cases follows.
// The first and only line of each test case contains two space-separated integers AA and BB.

#include <iostream>
using namespace std;
int arr[10] = {6,2,5,5,4,5,6,3,7,6};
int main() {
	
	int t;
	cin>>t;

	
	while(t--){
	    int ans = 0;
	    int a,b;
	    cin>>a>>b;
	    int sum = a+b;
	    while(sum > 0){
	        int digit = sum%10;
	        ans += arr[digit];
	        sum = sum/10;
	    }
	    cout<<ans<<endl;
	}
	return 0;
}
