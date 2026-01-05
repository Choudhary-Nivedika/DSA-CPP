#include <iostream>
#include <vector>
using namespace std;

vector<vector<int>> mat;

void rec(vector<int>& nums, vector<int>&output, int idx){
    //base case
    if(idx == nums.size()){
        mat.push_back(output);
        return;
    }

    //Yes
    output.push_back(nums[idx]);
    rec(nums, output, idx+1);
    output.pop_back();

    //No
    rec(nums, output, idx+1);
}

vector<vector<int>> subsets(vector<int>& nums){
    mat.clear();
    vector<int> output;
    rec(nums, output, 0);
    return mat;
}

int main(){

    vector<int> nums = {1,2,3};

    vector<vector<int>> ans = subsets(nums);

    // Print subsets
    for (auto &v : ans) {
        cout << "{ ";
        for (int x : v) {
            cout << x << " ";
        }
        cout << "}" << endl;
    }

    
    return 0;
}