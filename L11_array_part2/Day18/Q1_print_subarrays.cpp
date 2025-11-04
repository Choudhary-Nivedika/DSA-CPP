#include <iostream>
using namespace std;

//Print Subarray
void printSubArrays(int *arr, int n){
    for(int start = 0; start<n; start++){ // run n times
        for(int end = start; end<n; end++){  ///n
            // cout<<"("<<start<<", "<<end<< ") "; //print starting  and ending index
            for(int i = start; i<=end;i++){ //n 
                cout<<arr[i];  //print subarray
            }
            cout<<", ";
        }
        cout<<endl;
    }
}//Time Complexity = O(n^3)

int main(){

    //Print subarray
    int arr[5] = {1,2,3,4,5};
    int n = 5;
    printSubArrays(arr,n);

    return 0 ;
}