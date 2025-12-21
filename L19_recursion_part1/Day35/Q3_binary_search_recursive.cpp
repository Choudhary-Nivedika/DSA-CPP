#include <iostream>
using namespace std;

int binarySearch(int arr[], int start, int end, int key){
    //base case
    if (start > end){
        return -1;     
    }
    // int mid = (start + end )/2;
    int mid = start + (end - start)/2;

    if(arr[mid] == key){
        return mid;
    }

    else if(arr[mid] > key ){ //left half call
        binarySearch(arr, start, mid -1, key);
    }

    else{ // right half call
        binarySearch(arr, mid+1, end, key);
    }
}

int main(){
    int arr[] = {1,2,3,4,5,6,7};
    int index = binarySearch(arr,0,6,5);
    

    if(index != -1){
        cout<<index<<endl;
    }
    else cout<<"key not found"<<endl;
    return 0;
}