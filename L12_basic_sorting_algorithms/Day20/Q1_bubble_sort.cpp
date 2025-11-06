#include <iostream>
using namespace std;


// Function to print array
void print(int arr[], int n){
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}


void bubbleSort(int arr[], int n){
    for(int i=0; i<n-1; i++){
        // bool isSwap = false;  //optimization if array is already sorted
        // cout<<"Outer Loop"<<endl;
        for(int j=0; j<n-i-1; j++){
            // cout<<"Inner Loop ";
            if(arr[j] > arr[j+1]){  //ascending order
            // if(arr[j] < arr[j+1]){    //descending order
                swap(arr[j],arr[j+1]);
                // isSwap = true;
            }
        }
        // if(!isSwap){
        // if(isSwap == false){
        //     //array is already sorted
        //     return;
        // }
    }
    print(arr, n);
}

int main(){

    int arr[5] = {5,4,1,3,2};
    // int arr[10] = {1,2,3,4,5,6,7,8,9,10}; //O(outer loop-1, Inner loop-1)
    int n = sizeof(arr)/sizeof(int);

    bubbleSort(arr,n);

    return 0 ;
}