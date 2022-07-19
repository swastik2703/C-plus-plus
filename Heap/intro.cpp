// #include<iostream>
// using namespace std;

// //heap class
// class heap{

//     public:
//     int arr[100];
//     int size;

//     //constructor
//     heap(){
//         arr[0] = -1;    //null hai vaha
//         size = 0;
//     }

//     //insert function
//     void insert(int val){
//         size = size+1;
//         int index = size;   //last index btayega
//         arr[index] = val;   //uss index pe value dalo

//         //compare with parent
//         while(index > 1){
//             int parent = index/2;
//             if(arr[parent] < arr[index]){
//                 swap(arr[parent],arr[index]);
//                 index = parent;
//             }
//             else{
//                 return;
//             }
//         }
//     }

    
//     void print(){
//         //we know will insert from index 1st
//         for(int i=1; i<=size; i++){
//             cout<<arr[i]<<" ";
//         }
//         cout<<endl;
//     }

//     void deleteHeap(){
//         if(size == 0){
//             cout<<"nothing in the heap"<<endl;
//             return;
//         }

//         //step1: swap root and last node
//         arr[1] = arr[size];

//         //step2: remove last node
//         size--;

//         //step3: take root to correct position
//         int i = 1;
//         while(i < size){
//             int leftIndex = 2*i;
//             int rightIndex = 2*(i+1);

//             if(leftIndex < size && arr[i] < arr[leftIndex]){
//                 swap(arr[i],arr[leftIndex]);
//                 i = leftIndex;
//             }

//             else if(rightIndex < size && arr[i] < arr[rightIndex]){
//                 swap(arr[i],arr[rightIndex]);
//                 i = rightIndex;
//             }
//             else{
//                 return;
//             }
//         }
//     }

// };


// int main(){

//     heap h;
//     h.insert(50);
//     h.insert(55);
//     h.insert(53);
//     h.insert(52);
//     h.insert(49);
//     h.insert(51);
//     h.insert(60);
//     h.print();  

//     h.deleteHeap();
//     h.print();

//     return 0;
// }



#include<iostream>
using namespace std;

class heap{

    public:
    int arr[100];
    int size;

    heap(){
        arr[0] = -1;
        size = 0;
    }

    void insert(int val){
        size = size + 1;
        int index = size;
        arr[index] = val;

        while(index > 1){
            int parent = index/2;
            if(arr[parent] < arr[index]){
                swap(arr[parent],arr[index]);
                index = parent;
            }
            else{
                return;
            }
        }
    }

    void print(){
        for(int i=1; i<=size; i++){
            cout<<arr[i] <<" ";
        }
        cout<<endl;
    }

    void deleteFromHeap(){
        if(size == 0){
            cout<<"nothing"<<endl;
            return;
        }

        arr[1] = arr[size];
        size--;

        int i=1;
        while(i<size){
            int leftIndex = 2*i;
            int rightIndex = 2*i+1;

            if(leftIndex < size && arr[i] < arr[leftIndex]){
                swap(arr[i],arr[leftIndex]);
                i = leftIndex;
            }
            else if(rightIndex < size && arr[i] < arr[rightIndex]){
                swap(arr[i],arr[rightIndex]);
                i = rightIndex;
            }
            else{
                return;
            }
        }
    }

};

//heapify function
void heapify(int arr[], int n, int i){

    int largest = i;    // ith element ko sahi jagah pe leke jana hai
    int left = 2*i;
    int right = 2*i + 1;

    if(left < n && arr[largest] < arr[left]){
        largest = left;
    }

    if(right < n && arr[largest] < arr[right]){
        largest = right;
    }

    //largest update hogya ya nhi
    if(largest != i){
        swap(arr[largest],arr[i]);
        heapify(arr,n,largest);
    }
}


int main(){
    heap h;
    h.insert(50);
    h.insert(55);
    h.insert(53);
    h.insert(52);
    h.insert(54);
    h.print();

    h.deleteFromHeap();
    h.print();

    int arr[6] = {-1,54,53,55,52,50};
    int n = 5;

    for(int i=n/2; i>0; i--){
        heapify(arr,n,i);
    }
        

    cout<<"Heapify algo works properly"<<endl;
    for(int i=1; i<=n; i++){
        cout<<arr[i]<<" ";
    }
       cout<<endl;

    return 0;
}