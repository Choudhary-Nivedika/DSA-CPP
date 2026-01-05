#include <iostream>
#include <vector>
using namespace std;

vector<vector<int>> mat;

void rec(vector<int>& nums, vector<int>& output, int idx){
    if(idx == nums.size()){
        mat.push_back(output);
        return;
    }

    for(int j = 0; j < nums.size(); j++){
        if(nums[j] == 1e9) continue;

        int val = nums[j];
        output.push_back(nums[j]);
        nums[j] = 1e9;

        rec(nums, output, idx+1);

        output.pop_back();
        nums[j] = val;
    }

}

vector<vector<int>> permute(vector<int>& nums){
    int n = nums.size();
    vector<int> output;
    rec(nums, output, 0);
    return mat;

}

int main(){

    vector<int> nums = {1,2,3};

    vector<vector<int>> ans = permute(nums);

    for(auto &v : ans){
        cout << "{ ";
        for(int x : v) cout << x << " ";
        cout << "}" << endl;
    }
    
    return 0;
}