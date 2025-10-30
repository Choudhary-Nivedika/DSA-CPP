#include <iostream>
using namespace std;

void decToBin(int decNum){
    int n = decNum;
    int binNum = 0;
    int pow = 1; //10^0  10^1

    while(n>0){
        int rem = n%2;
        binNum += rem * pow;
        pow *=10;
        n = n/2; 
    }
    cout<<binNum<<endl;

}

int main(){

    decToBin(25);
    decToBin(49);
    decToBin(31);
    decToBin(88);
    
    return 0;
}