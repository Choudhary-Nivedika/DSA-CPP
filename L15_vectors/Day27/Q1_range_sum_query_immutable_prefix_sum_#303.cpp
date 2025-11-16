#include <iostream>
#include <vector>
using namespace std;

// Global vector to store prefix sums of the input array
vector<int> prefix;  //initially empty

// Function to precompute prefix sums from the input array
void rangeSumQuery(vector<int> nums){
    // First element of prefix array is the same as the first element of nums
    prefix.push_back(nums[0]);
    
    // Build prefix sum array: prefix[i] = sum of nums[0..i]
    for(int i=1; i<nums.size(); i++){
        prefix.push_back(prefix[i-1] + nums[i]); 
    }
}

//function to find sum from left to right
int sumArray(int left, int right){

    if(left==0) return prefix[right];
    else return prefix[right] - prefix[left-1];
}

int main(){
    vector<int> nums = {5, 15, 10, 30, 20, 40};

    //initialize global array
    rangeSumQuery(nums);

    //example queries
    cout<<"Sum(1,3): "<<sumArray(1,3)<<endl;
    cout<<"Sum(2,5): "<<sumArray(2,5)<<endl;
    cout<<"Sum(2,2): "<<sumArray(2,2)<<endl;


    
    return 0;
}