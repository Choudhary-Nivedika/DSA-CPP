#include <iostream>
#include <vector>
using namespace std;

int majorityElement(vector<int>& nums){
    int majority = 0;
    int lead = 0;
    for(int i=0; i<nums.size(); i++){
        if(nums[i]==majority){
            lead++;
        }
        else if(lead>0){
            lead--;
        }
        else{
            majority = nums[i];
            lead++;

        }
    }
    cout<<"Majority: "<<majority<<endl;
    return majority;
}

int main(){
    vector<int> nums = {20, 30, 40, 30, 30, 40, 40, 40, 40, 40};
    majorityElement(nums);

    return 0;
}