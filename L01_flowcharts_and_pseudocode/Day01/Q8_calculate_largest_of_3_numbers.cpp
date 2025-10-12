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

    if(a>b){
        if(a>c){
            cout<<"Largest number is: " <<a<<endl;
        }
        else{
            cout<<"Largest number is: " <<c<<endl;
        }
    }
    else{
        if(b>c){
            cout<<"Largest number is: " <<b<<endl;
        }
        else{
            cout<<"Largest number is: " <<c<<endl;
        }
    }

    return 0;
}