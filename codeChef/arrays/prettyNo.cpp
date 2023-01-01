// Vasya likes the number 239239. Therefore, he considers a number pretty if its last digit is 22, 33 or 99.

// Vasya wants to watch the numbers between LL and RR (both inclusive), so he asked you to determine how many pretty numbers are in this range. Can you help him?

// Input
// The first line of the input contains a single integer TT denoting the number of test cases. The description of TT test cases follows.
// The first and only line of each test case contains two space-separated integers LL and RR.


/*2
1 10
11 33
output
3
8*/

#include <iostream>
using namespace std;

int main() {
    int t;
    cin>>t;
    
    while(t--){
        int l,r;
        cin>>l>>r;
        int digit,count = 0;
        for(int i=l; i<=r; i++){
            digit = i%10;
            if(digit == 2 || digit == 3 || digit == 9){
                count++;
            }
        }
        cout<<count<<endl;
    }
	return 0;
}
