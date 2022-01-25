#include<iostream>
#include<vector>
using namespace std;


void merge(int arr1[],int n,int arr2[],int m,int arr3[]){
    int i = 0; 
    int j = 0;
    int k = 0;
    while(i<n && j<m){

        if(arr1[i] < arr2[j])
        {
            arr3[k] = arr1[i];
            i++;
            k++;
        }
        
        else{
            arr3[k] = arr2[j];
            j++;
            k++;
        }
       
        
    }


while(i<n){
    arr3[k] = arr1[i];
    i++;
    k++;
}
while(j<m){
    arr2[k] = arr2[j];
    j++;
    k++;
}

}
    
void print(int ans[],int x){
    for(int i = 0; i<x; i++){
        cout<<ans[i]<<" ";
    }
    cout<<endl;
}    

int main(){

    int arr1[3] = {2,4,6};
    int arr2[3] = {1,3,5};
    int arr3[6] = {0};

    merge(arr1,3,arr2,3,arr3);
    print(arr3,6);


    return 0;
}