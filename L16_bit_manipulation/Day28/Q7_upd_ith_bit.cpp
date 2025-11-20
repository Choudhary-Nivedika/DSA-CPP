#include <iostream>
using namespace std;

void updateIthBit(int num, int i, int val){
    num = num & ~(1 << i); //clear th bit

    num = num | (val << i);

    cout<<num<<endl;
}

int main(){

    updateIthBit(7, 2, 0);
    updateIthBit(7, 3, 1);

    
    return 0;
}