#include<iostream>
using namespace std;

void print(int arr[],int n){
    cout<<"size is: "<<n<<endl;

    for(int i = 0; i < n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int search(int arr[],int n,int key){

    print(arr,n);
    //base case
    if(n == 0)
    return 0;

   if(arr[0] == key){
       return key;
   }
   else{
       int ans = search(arr + 1,n-1,key);
       return ans;
   }
}


int main(){

    int n = 5;
    int arr[] = {1,3,2,5,4};
    int key = 4;

    int res = search(arr,n,key);
    if(res){
        cout<<"key is present in the the array"<<endl;
    }
    else{
        cout<<"not present";
    }
}