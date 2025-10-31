#include <iostream>
using namespace std;

int main(){
    int a = 10;

    cout<<&a<<endl;
    cout<<*(&a)<<endl;

    int *ptr = &a;
    cout<<ptr<<endl;
    cout<<*ptr<<endl;

    *ptr = 20;
    cout<<a<<endl;
    
    return 0;
}