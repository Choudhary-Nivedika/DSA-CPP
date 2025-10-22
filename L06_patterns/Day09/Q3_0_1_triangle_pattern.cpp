#include <iostream>
using namespace std;

int main(){
    // print the 0-1 triangle pattern

    int n = 5;
    for(int i = 0; i<n; i++){
        bool val =(i % 2 == 0);
        for(int j= 0; j<=i; j++){
            cout<<val<<" ";
            val = !val;
        } 
        cout<<"\n";
    }
    return 0;
}