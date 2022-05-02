#include<iostream>
using namespace std;

int fibonacci(int n){
    //base case

    if(n == 0){
        return 0;
    }

    if(n == 1){
        return 1;
    }

    return (fibonacci(n - 1) + fibonacci(n - 2));

}



int main(){

    int n;
    cin>>n;
    // int t1 = 0;
    // int t2 = 1;

    int i = 0;
    while(i < n){
        cout<<fibonacci(i)<<" ";
        i++;
    }
}