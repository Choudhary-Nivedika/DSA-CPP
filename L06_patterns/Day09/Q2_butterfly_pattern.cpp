#include <iostream>
using namespace std;

int main(){
    // butterfly pattern 
    // upper half
    int n = 4;
    for(int i =1; i<=n; i++){
        for(int j=1; j<=i; j++){
            cout<<"*";
        }
        for(int j=1; j<=2*(n-i); j++){
            cout<<" ";
        }
        for(int j=1; j<=i; j++){
            cout<<"*";
        }
        cout<<endl;
    }
    for(int i =n; i>=1; i--){
        for(int j=1; j<=i; j++){
            cout<<"*";
        }
        for(int j=1; j<=2*(n-i); j++){
            cout<<" ";
        }
        for(int j=1; j<=i; j++){
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}