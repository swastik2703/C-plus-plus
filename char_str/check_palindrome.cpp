#include<iostream>
using namespace std;

bool check_palindrome(char a[],int n){
    int s = 0;
    int e = n-1;

    while( s <= e){
        if(a[s++] != a[e--]){
            return 0;
        }

        else{
            s++;
            e--;
        }
    }
    return 1;
}

int getlength(char name[]){
    int count = 0;
    for(int i = 0; name[i] != '\0'; i++){
        count++;
    }
    return count;
}

int main(){
    char name[20];
    cout<<"enter name: "<<endl;
    cin>>name;
    int len = getlength(name);
    cout<<"length of string is:"<<len<<endl;

    cout<<"palindrome or not "<<check_palindrome(name,len)<<endl;

}