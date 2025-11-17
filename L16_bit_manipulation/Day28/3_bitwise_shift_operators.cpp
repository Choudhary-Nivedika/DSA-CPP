#include <iostream>
using namespace std;

int main(){
    // left shift <<

    //formula: a << b => a*2^b
    
    cout<<(7 << 2)<<endl;
    cout<<(1 << 1)<<endl;
    cout<<(5 << 2)<<endl;

    // right shift >>

    //formula: a >> b => a/2^b
    
    cout<<(7 >> 2)<<endl;
    cout<<(9 >> 1)<<endl;
    cout<<(4 >> 1)<<endl;
    return 0;
}