#include <iostream>
#include <vector>
using namespace std;

//global array to store numbers
vector<int> arr;

// function to store the array
void rangeSumQuery(vector<int> nums){
    arr = nums;
}

//function to find sum from left to right
int sumArray(int left, int right){

    int sum = 0;
    for(int i = left; i<=right; i++){
        sum += arr[i];
    }
    return sum;
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