#include <iostream>
using namespace std;

void printArr(int arr[], int n){
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";    
    }
    cout<<endl;
}

int parition(int arr[], int si, int ei){
    int i = si-1;
    int pivot = arr[ei];

    for(int j = si; j<ei; j++){
        if(arr[j] <= pivot){
            i++;
            swap(arr[i], arr[j]);
        }
    }
    i++;
    swap(arr[i], arr[ei]);

    //pivotIdx = i
    return i;
}

//O(nlogn) - average case
//O(n^2) - worst case

void quickSort(int arr[], int si, int ei){ 
    if(si >= ei){
        return;
    }
    int pivotIdx = parition(arr, si, ei);

    quickSort(arr, si, pivotIdx-1); //left half
    quickSort(arr, pivotIdx+1, ei); //right half


}

int main(){
    int arr[6] = {6, 3, 7, 5, 2, 4};
    int n = 6;

    quickSort(arr, 0, n-1);
    printArr(arr,n);
    return 0;
}