#include <iostream>
using namespace std;

int main(){

    // output and input array

    int arr1[5] = {7,5,2,1,3};
    int len = sizeof(arr1)/sizeof(int);
    for(int idx = 0; idx<=len-1; idx++){
        cout<<arr1[idx]<<endl; //idx = 0, 1, 2....
    }

    // same version of above
    int arr2[25] = {7,5,2,1,3};
    int n1 = sizeof(arr2)/sizeof(int);
    for(int i = 0; i<n1; i++){
        cout<<arr2[i]<<" "; 
    }
    cout<<endl;

    // input array
    int n;
    cout<<"Enter length of array: "<<endl;
    cin>>n;
    int arr[n];
    // int n = sizeof(arr)/sizeof(int);
    cout<<"INPUT"<<endl;
    for(int i = 0; i<n; i++){
        cin>>arr[i]; 
    }
    cout<<"OUTPUT"<<endl;
    for(int i = 0; i<n; i++){
        cout<<arr[i]<<" "; 
    }
    cout<<endl;
    
    return 0;
}