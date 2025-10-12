#include <iostream>
using namespace std;

int main(){
    int a;
    int b; 
    int c;
    cout<<"Enter the value of a: ";
    cin>>a;
    cout<<"Enter the value of b: ";
    cin>>b;
    cout<<"Enter the value of c: ";
    cin>>c;

    int avg = (a+b+c)/3;
    cout<<"Average: "<<avg<<endl;

    return 0;
}