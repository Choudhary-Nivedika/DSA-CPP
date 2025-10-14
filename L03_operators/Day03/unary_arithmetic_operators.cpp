#include <iostream>
using namespace std;

int main(){

    int a = 3;
    a++; //4
    cout<<"a = "<<a<<endl;
    a--; //3
    cout<<"a = "<<a<<endl;

    ++a; //4
    cout<<"a = "<<a<<endl;
    --a; //3
    cout<<"a = "<<a<<endl;


    int a1 = 3;
    int b1 = ++a1; //4
    cout<<"a1 = "<<a1<<endl; //4
    cout<<"b1 = "<<b1<<endl; //4

    // increment
    int p = 3;
    int q = p++; 
    cout<<"p = "<<p<<endl; //4
    cout<<"q = "<<q<<endl; //3

    // Decrement
    int r = 3;
    int s = r--; 
    cout<<"r = "<<r<<endl; //2
    cout<<"s = "<<s<<endl; //3
    return 0;
}