//{ Driver Code Starts
//Initial function template for C++

#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++

/* Algo bolti hai ki:-
1) first K elements ke liye ek max heap bna lo
2) baki bache elements ke liye check karo:-
a) if(element < heap.top()){
    heap mai se top element ko pop kro
    us element ko heap mai push krdo
}
3)last mai apke pass ek k elements ka max heap bache ga uss max heap ka kth smallest element uska root node hoga
*/

class Solution{
    public:
    // arr : given array
    // l : starting index of the array i.e 0
    // r : ending index of the array i.e size-1
    // k : find kth smallest element and return using this function
    int kthSmallest(int arr[], int l, int r, int k) {
        priority_queue<int> pq;
        //push 1st k element
        for(int i = 0; i<k; i++){
            pq.push(arr[i]);
        }
        
        //for next elements
        for(int i = k; i<=r; i++){
            if(arr[i] < pq.top()){
               pq.pop();
               pq.push(arr[i]); 
            }
        }
        int ans = pq.top();
        return ans;
    }
};

//{ Driver Code Starts.
 
int main()
{
    int test_case;
    cin>>test_case;
    while(test_case--)
    {
        int number_of_elements;
        cin>>number_of_elements;
        int a[number_of_elements];
        
        for(int i=0;i<number_of_elements;i++)
            cin>>a[i];
            
        int k;
        cin>>k;
        Solution ob;
        cout<<ob.kthSmallest(a, 0, number_of_elements-1, k)<<endl;
    }
    return 0;
}
// } Driver Code Ends