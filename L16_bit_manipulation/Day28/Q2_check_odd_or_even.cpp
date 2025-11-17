#include <iostream>
using namespace std;

void oddOrEven(int num){
    
    if(!(num & 1 )){
        cout<<"Even"<<endl;
    }
    else{
        cout<<"Odd"<<endl;
    }
}

int main(){
    oddOrEven(5);
    oddOrEven(8);
    oddOrEven(4);
    oddOrEven(3);
    
    return 0;
}