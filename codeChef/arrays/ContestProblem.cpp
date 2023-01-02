// Chef has been participating regularly in rated contests but missed the last two contests due to his college exams. He now wants to solve them and so he visits the practice page to view these problems.

// Given a list of NN contest codes, where each contest code is either START38 or LTIME108, help Chef count how many problems were featured in each of the contests.

// Input Format
// First line will contain TT, number of test cases. Then the test cases follow.
// Each test case contains of two lines of input.
// First line of input contains the total count of problems that appeared in the two recent contests - NN.
// Second line of input contains the list of NN contest codes. Each code is either START38 or LTIME108, to which each problem belongs.

/*
4
3
START38 LTIME108 START38
4
LTIME108 LTIME108 LTIME108 START38
2
LTIME108 LTIME108
6
START38 LTIME108 LTIME108 LTIME108 START38 LTIME108
output
2 1
1 3
0 2
2 4*/


#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	
	while(t--){
	    int numProblem;
	    cin>>numProblem;
	    string s;
	    int c1=0,c2=0;
	    while(numProblem--){
	        cin>>s;
	        if(s == "START38"){
	            c1++;
	        }else{
	            c2++;
	        }
	        
	    }
	    cout<<c1<<" "<<c2<<endl;
	}
	return 0;
}
