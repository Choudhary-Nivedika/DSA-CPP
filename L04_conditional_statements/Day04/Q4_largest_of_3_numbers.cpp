#include <iostream>
using namespace std;

int main(){
    
    int a, b, c;
    cout<<"Enter a: ";
    cin>>a;
    cout<<"Enter b: ";
    cin>>b;
    cout<<"Enter c: ";
    cin>>c;

    if(a>b){
        if(a>c){
            cout<<a<<" is largest"<<endl;
        } else{
            cout<<c<<" is largest"<<endl;
        }
    } else{
        if(b>c){
            cout<<b<<" is largest"<<endl;
        } else{
            cout<<c<<" is largest"<<endl;
        }
    }


    if(a>=b && a>=c){
        cout<<"Largest is a = "<<a<<endl;
    } else if (b>=c){
        cout<<"Largest is b = "<<b<<endl;
    } else{
        cout<<"Largest is c = "<<c<<endl;
    }

    return 0;
}