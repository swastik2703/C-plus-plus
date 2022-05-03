#include<iostream>
using namespace std;

bool isSorted(int arr[],int n){

    if(n == 0 || n == 1){
        return true;
    } 

    if(arr[0] > arr[1]){
        return false;
    }

    else{
        bool ans = isSorted(arr+1,n-1);
        return ans;
    }
}


int main(){

    int n = 5;
    int arr[10] = {2,4,6,10,10};

    bool res = isSorted(arr,n);

    if(res)
    cout<< " array is sorted" << endl;

    else
    cout<<"not sorted"<<endl;
}