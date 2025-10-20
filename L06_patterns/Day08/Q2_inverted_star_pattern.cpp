#include <iostream>
using namespace std;

int main(){
    // print inverted star pattern 
    int n = 7;
    for(int i = 1; i<=n; i++){
        for(int j = 1; j<=n-i+1; j++){
            cout<<"*"<<" ";
        }
        cout<<endl;
    }
    return 0;
}