#include <iostream>
using namespace std;

int friendsPairing(int n){
    if(n == 1 || n==2){
        return n;
    }
    //single + pair
    return friendsPairing(n-1) + (n-1) * friendsPairing(n-2); 
}

int main(){
    cout<<friendsPairing(1)<<endl;
    cout<<friendsPairing(2)<<endl;
    cout<<friendsPairing(3)<<endl;  //4 ways
    cout<<friendsPairing(4)<<endl;

    return 0;
}