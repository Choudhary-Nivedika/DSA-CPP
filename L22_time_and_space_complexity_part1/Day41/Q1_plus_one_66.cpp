#include <iostream>
#include <vector>
#include <algorithm> // for reverse()
using namespace std;

//time complexity = O(n) + O(n) + O(n) => O(3n) => O(n)
//space complexity = O(1)

vector<int> plusOne(vector<int>& digits){
    reverse(digits.begin(), digits.end());
    int carry = 1;

    for(int i = 0; i< digits.size(); i++){
        int sum = digits[i] + carry;
        digits[i] = sum % 10;
        carry = sum/10;
    }

    if(carry > 0){
        digits.push_back(carry);//if there's still a carry left
    }

    reverse(digits.begin(), digits.end());
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