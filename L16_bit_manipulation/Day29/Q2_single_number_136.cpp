#include <iostream>
using namespace std;

int SingleNumber(int arr[], int n){
    int ans = 0;
    for(int i=0; i<n; i++){
        ans = ans^arr[i];
    }
    return ans;
}

int main(){
    int arr[] = {4,1,2,1,2};
    int n = sizeof(arr)/sizeof(int);
    cout<<SingleNumber(arr, n);
    
    return 0;
}