#include <iostream>
using namespace std;

//2nd method

int clearBitsInRange(int num, int i, int j){
    int bitMask1 = ((~0)<<(j+1));
    int bitMask2 = ((1<<i)-1);
    int bitMask = bitMask1 | bitMask2;

    num = num & bitMask;
    return num;
     


}

int main(){
    cout<<clearBitsInRange(31, 1, 3);
    
    return 0;
}