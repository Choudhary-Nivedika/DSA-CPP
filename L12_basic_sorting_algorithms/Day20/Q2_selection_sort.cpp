#include <iostream>
using namespace std;


// Function to print array
void print(int arr[], int n){
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

//O(n*logn) is better than O(n^2)

void selectionSort(int arr[], int n){  //select the smallest el for particular index
    for(int i=0; i<n-1; i++){ //n
        int minIdx = i;
        //loop for find min
        for(int j=i+1; j<n; j++){ //n
            if(arr[j] < arr[minIdx]){  //ascending
            // if(arr[j] > arr[minIdx]){  //descending
                minIdx = j;
            }
        }
        swap(arr[i],arr[minIdx]);
    }
    print(arr,n);
}
//Time Complexity:   O(n^2)


int main(){

    int arr[5]= {5,4,3,1,2};
    int n = sizeof(arr)/sizeof(int);

    selectionSort(arr,n);

    return 0;
}