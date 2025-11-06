#include <iostream>
using namespace std;

void print(int arr[], int n){
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

void selectionSort(int arr[], int n){
    for(int i=0; i<n-1; i++){
        int minIdx = i;
        for(int j=i+1; j<n-1; j++){
            if(arr[j] > arr[minIdx]){
                minIdx = j;
            }
        }
        swap(arr[i],arr[minIdx]);
    }
    print(arr,n);
}


int main(){

    int arr[10]={3,6,2,1,8,7,4,5,3,1};
    int n = sizeof(arr)/sizeof(int);
    
    selectionSort(arr,n);

    return 0;
}