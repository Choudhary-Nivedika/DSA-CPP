#include <iostream>
using namespace std;

int largest(int a, int b, int c){
    if(a>=b && a>=c){
        return a;
    }else if(b>=c){
        return b;
    } else return c;
}

int main(){
    cout<<largest(333,900,60);
    
    return 0;
}