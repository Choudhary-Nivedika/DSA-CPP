#include <iostream>
using namespace std;

int main(){
    int n = 153;
    int num = n;
    int cubeSum = 0;

    while(num > 0){
        int lastDig = num %10;
        cubeSum += lastDig*lastDig*lastDig;
        num = num /10;
    }
    if (n == cubeSum){
        cout<<"Number is Armstrong"<<endl;
    } else {
        cout<<"Number is NOT Armstrong"<<endl;
    }
    return 0;
}