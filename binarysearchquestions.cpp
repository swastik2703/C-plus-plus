#include<iostream>
using namespace std;

// ****** binarysearch code *****

// int binarysearch(int arr[],int n,int key)
// {

//     int low = 0;
//     int high = n;
   

//     while(low<=high)
//     {

//         int mid = (low + high)/2;
//         if(arr[mid] < key)
//         low = mid+1;

//         else if(arr[mid] > key)
//         high = mid-1;

//         else if(arr[mid] == key)
//         return mid;
//     }

//     return 0;
// }

// int main()
// {
//     int key;
//     int n;

//     cout<<"enter the size of array"<<endl;
//     cin>>n;

//     int arr[n];

//     cout<<"enter array elements"<<endl;
//     for(int i = 0; i < n; i++)
//     {
//         cin>>arr[i];
//     }

//     cout<<"enter element to be found"<<endl;
//     cin>>key;

    

//     cout<<binarysearch(arr,n,key);

    
// }



// int firstocc(int arr[],int n,int key)
// {
//     int s = 0;
//     int l = n-1;
//     int mid = s + (l-s)/2;
//     int ans = -1;

//     while(s<=l)
//     {
//         if(arr[mid] == key)
//         {
//             ans = mid;
//             l = mid-1;
//         }

//         else if(arr[mid] < key)
//         {
//             s = mid+1;
//         }

//         else if(arr[mid] > key)
//         {
//             l = mid-1;
//         }

//         mid = s + (l-s)/2;
//     }

//     return ans;
// }
// int lastocc(int arr[],int n,int key)
// {
//     int s = 0;
//     int l = n-1;
//     int mid = s + (l-s)/2;
//     int ans = -1;

//     while(s<=l)
//     {
//         if(arr[mid] == key)
//         {
//             ans = mid;
//             s = mid+1;
//         }

//         else if(arr[mid] < key)
//         {
//             s = mid+1;
//         }

//         else if(arr[mid] > key)
//         {
//             l = mid-1;
//         }

//         mid = s + (l-s)/2;
//     }

//     return ans;
// }


// int main()
// {
//     int even[10] = {1,2,3,3,4,4,4,4,4,4};
//     cout<<"the first occurence of a no is at index "<<firstocc(even,10,4)<<endl;
//     cout<<"the last occurence of a no is at index "<<lastocc(even,10,4)<<endl;
// }





// **********  to find pivot in an array *************



// int getpivot(int arr[],int n)
// {
//     int s = 0;
//     int e = n-1;
//     int mid = s + (e-s)/2;

//     while(s<e)
//     {
//         if(arr[mid] >= arr[0])
//         {
//             s = mid+1;
//         }

//         else{
//             e = mid; 
//         }
//         mid = s + (e-s)/2;
//     }

//     return s;
// }

// int main()
// {
//     int arr[6] = {3,8,10,17,20,1};
//     int ans = getpivot(arr,6);
//     cout<<"pivot is "<<ans;
// }





