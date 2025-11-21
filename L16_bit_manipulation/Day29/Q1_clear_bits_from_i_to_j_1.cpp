#include <iostream>
using namespace std;

//Ist Method

int clearPthBit(int num, int p){
    //clear the pth bit
    int mask = ~(1<<p);
    num = num & mask;
    return num;
}

int clearBitsInRange(int num, int i, int j){
    for(int p=i; p<=j; p++){
        num = clearPthBit(num, p);
    }
    return num;

}

int main(){
    
    int i=1, j=3;
    int num = 31;
    
    cout<<"After clearing the bits: "<<clearBitsInRange(num,i,j)<<endl;
    
    return 0;
}