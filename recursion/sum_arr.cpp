#include<iostream>
using namespace std;

int sum_arr(int arr[],int n){
    
    //base case
    if(n == 0)
    return 0;

    if(n == 1)
    return arr[0];

    else{
        int res = sum_arr(arr+1,n-1);
        int sum = arr[0] + res;
        return sum;
    }

}


int main(){

    int n = 7;
    int arr[] = {1,2,3,4,5,5,10};
    int ans = sum_arr(arr,n);
    cout<<ans<<endl;
}