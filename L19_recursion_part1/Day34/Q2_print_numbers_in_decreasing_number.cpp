#include <iostream>
using namespace std;

void print(int n){
    if(n == 0){
        return;
    }
    cout<<n<<" ";
    print(n-1); 
}


int main(){
    print(5);
    // print(10);
    // print(7);
    // print(15);

    return 0;
}