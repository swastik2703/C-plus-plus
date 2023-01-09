/*Problem
Chef has a string SS with him. Chef is happy if the string contains a contiguous substring of length strictly greater than 22 in which all its characters are vowels.

Determine whether Chef is happy or not.

Note that, in english alphabet, vowels are a, e, i, o, and u.

Input Format
First line will contain TT, number of test cases. Then the test cases follow.
Each test case contains of a single line of input, a string SS.8

4
aeiou
abxy
aebcdefghij
abcdeeafg
Output
Happy
Sad
Sad
Happy
*/

#include <iostream>
using namespace std;

int main() {
	int t,count=0;
	cin>>t;
	while(t--){
	    string s;
	    cin>>s;
	    for(int i=0; i<s.length(); i++){
	        if(s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u'){
	            count++;
	            if(count == 3){
	                cout<<"happy"<<endl;
	                break;
	            }
	                
	        }
	        else{
	            count = 0;
	        }
	    }
	    if(count != 3)
	        cout<<"Sad"<<endl;
	}
	return 0;
}


