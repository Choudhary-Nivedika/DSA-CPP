#include <iostream>
#include <climits>
using namespace std;

//Max Subarray sum (Kadane's algorithm (very good algorithm))
void maxSubarraySum3(int *arr, int n){
    int maxSum = INT_MIN;
    int currSum = 0;
    for(int i=0; i<n; i++){
        currSum += arr[i];
        maxSum = max(maxSum, currSum);
        if(currSum < 0){
            currSum = 0;
        }
    }
    cout<<"Maximum Subarray Sum = "<<maxSum<<endl;
}


int main(){

    // Max Subarray sum (Kadane's algorithm (very good algorithm))
    int arr[6] = {2,-3,6,-5,4,2};
    int n = sizeof(arr)/sizeof(int);
    maxSubarraySum3(arr,n);
    
    return 0;
}