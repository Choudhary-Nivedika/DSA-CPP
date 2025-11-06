#include <iostream>
#include <algorithm>
using namespace std;


// Function to print array
void print(int arr[], int n){
    for(int i =0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int main(){

    int arr[8]={1,4,1,3,2,4,3,7};
    int n = sizeof(arr)/sizeof(int);
    // sort(arr,arr+n);  //ascending order 
    // sort(arr+2,arr+5); //particular range 

    sort(arr,arr+n,greater<int>()); //Descending order

    print(arr,n);

    return 0;
}