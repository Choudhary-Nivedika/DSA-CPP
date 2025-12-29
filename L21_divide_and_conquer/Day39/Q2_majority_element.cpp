#include <iostream>
using namespace std;

int countInRange(int nums[], int num, int lo, int hi){
    int count = 0;
    for(int i = lo; i<=hi; i++){
        if(nums[i] == num){
            count++;
        }
    }
    return count;
}

int majorityElementsRec(int nums[], int lo, int hi){
    //base case: the only element in an array of size 1 is 
    //the majority element
    if(lo==hi){
        return nums[lo];
    }

    //recurse on left right halfes of this slice.
    int mid  = (hi-lo)/2 + lo;
    int left = majorityElementsRec(nums, lo, mid);
    int right = majorityElementsRec(nums, mid+1, hi);


    //if the two halves agree on the majority element, return it
    if(left == right){
        return left;
    }

    //otherwise, count each element and return the "winner"
    int leftCount = countInRange(nums, left , lo, hi);
    int rightCount = countInRange(nums, right , lo, hi);

    return leftCount > rightCount ? left : right;
}

int majorityElement(int nums[], int n){
    return majorityElementsRec(nums, 0, n-1);
}

//time complexity - O(nlogn)
int main(){
    int nums[] = {2,2,1,1,1,2,2};
    int n = 7;
    cout<<"Majority element is: "<<majorityElement(nums,n)<<endl;
    
    return 0;
}