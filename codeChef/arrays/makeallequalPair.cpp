// Problem
// Chef has an array AA of length NN.

// In one operation, Chef can choose any two distinct indices i, ji,j (1 \leq i, j \leq N, i \neq j)(1≤i,j≤N,i=j) and either change A_iA 
// i
// ​
//   to A_jA 
// j
// ​
//   or change A_jA 
// j
// ​
//   to A_iA 
// i
// ​
//  .

// Find the minimum number of operations required to make all the elements of the array equal.

// Input Format
// First line will contain TT, number of test cases. Then the test cases follow.
// First line of each test case consists of an integer NN - denoting the size of array AA.
// Second line of each test case consists of NN space-separated integers A_1, A_2, \dots, A_NA 
// 1
// ​
//  ,A 
// 2
// ​
//  ,…,A 
// N
// ​
//   - denoting the array AA.
// Output Format
// For each test case, output the minimum number of operations required to make all the elements equal.


#include <iostream>
using namespace std;


int main() {
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    int arr[100];
	
	    for(int i = 0; i<n; i++){
	        cin>>arr[i];
	    }
	
	    int max = 1;
	    for(int i=0; i<n-1; i++){
	        int count = 1;
	        for(int j=i+1; j<n; j++){
	            if(arr[i] == arr[j]){
	                count++;
	            }
	         }
	        if(count > max){
	            max = count;
	        }
	        
	    }
	    cout<<n-max<<endl;
	}
	
	return 0;
}


// 4
// 3
// 1 2 3
// 4
// 5 5 5 5
// 4
// 2 2 1 1
// 3
// 1 1 2

// //output
// 2
// 0
// 2
// 1