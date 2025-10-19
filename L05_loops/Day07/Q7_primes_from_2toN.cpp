#include <iostream>
using namespace std;

int main(){
    int N = 23;
    // cout<<"Enter a number up to which you want to print: ";
    // cin>>N;
    for(int i = 2; i<=N; i++){
        int curr = i; //current no to check for
        bool isPrime = true;
        for(int j = 2; j*j<=i; j++){
            if(curr % j == 0){
                isPrime = false;
                
            }
        }
        if(isPrime){
            cout<<curr<<" ";
        }
    }
    cout<<endl;
    return 0;
}