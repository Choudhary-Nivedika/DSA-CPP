#include <iostream>
using namespace std;

void print(int arr[], int n){
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

void bubbleSort(int arr[], int n){
    for(int i=0; i<n-1; i++){
        bool isSwap = false; // optimization if array is already sorted
        for(int j=0; j<n-i-1; j++){
            if(arr[j]<arr[j+1]){
                swap(arr[j],arr[j+1]);
                isSwap = true;
            }
        }
        if (isSwap == false){
            //array is already sorted
            print(arr,n);
            return;
        }
    }
}

int main(){
    
    int arr[10]={3,6,2,1,8,7,4,5,3,1};
    int n = sizeof(arr)/sizeof(int);

    bubbleSort(arr,n);
    return 0;
}