#include <iostream>
using namespace std;

int sumOfDig(int n){
    int sum = 0;

    while(n>0){
        int lastDig = n%10;
        sum += lastDig;
        n = n/10;   
    }
    return sum; 
}

int main(){
    cout<<sumOfDig(12345);
    
    return 0;
}