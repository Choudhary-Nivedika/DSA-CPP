#include <iostream>
#include <vector>
using namespace std;

//time complexity => O(n)
//space complexity => O(1)

vector<int> plusOne(vector<int>& digits){
    int n  = digits.size();
    int carry = 1;

    //start from the last digit
    for(int i = n-1; i>=0; i--){
        int sum = digits[i] + carry;
        digits[i] = sum % 10;
        carry = sum/10;
    }

    if(carry){
        digits.insert(digits.begin(), carry);
    }

    return digits;
}


int main(){

    vector<int> digits = {9, 9, 9};
    vector<int> result = plusOne(digits);

    for(int i=0; i < result.size(); i++){
        cout<<result[i]<<" ";
    }

    cout<<endl;
    
    return 0;
}