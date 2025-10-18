#include <iostream>
using namespace std;

int main(){
    int n; 
    cout<<"Enter num: ";
    cin>>n;
    bool isPrime = true;

    // for(int i = 2; i<=sqrt(n); i++){
    for(int i = 2; i<=n-1; i++){
        if(n%i == 0){
            isPrime = false;
            break;
        }
    }
    if(isPrime == true){
        cout<<"Prime Number"<<endl;
    } else{
        cout<<"NOT Prime Number"<<endl;
    }
    return 0;
}