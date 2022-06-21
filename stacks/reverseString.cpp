#include<iostream>
#include<stack>
using namespace std;

int main(){

    string str = "ABCD";
    stack<char> s;

    for(int i = 0; i < str.length(); i++){
        //her string ke character ko ch variable mai store kara liya
        char ch = str[i];
        //ek ek karke character ko push krdiya
        s.push(ch);
    }

        string ans = "";
    //pop
    while(!s.empty()){
        char ch = s.top();
        ans.push_back(ch);
        s.pop();
    }

    cout<<"reverse if string is : "<<ans <<endl;
}