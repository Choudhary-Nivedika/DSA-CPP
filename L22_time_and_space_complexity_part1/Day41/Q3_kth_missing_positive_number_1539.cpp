#include <iostream>
#include <vector>
using namespace std;

//time complexity => O(n)
//optimized complexity => O(logn)

int findKthPositive(vector<int>& arr, int k){
    int missingCount = 0;
    int current = 1; //start checking from 1
    int i = 0;

    while(true){
        if(i<arr.size() && arr[i] == current){
            i++; //current number exists in array
        }

        else{
            missingCount++;
            if (missingCount == k)
            return current;

        }
        current++;

    }
}

int main(){
    vector<int> arr = {2, 3, 4, 7, 11};
    int k = 5;

    cout<<findKthPositive(arr, k)<<endl;
    
    return 0;
}