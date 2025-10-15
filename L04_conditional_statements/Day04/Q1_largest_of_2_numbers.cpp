#include <iostream>
using namespace std;

int main(){
    

    int num1, num2;
    cout<<"Enter num1: ";
    cin>>num1;
    cout<<"Enter num2: ";
    cin>>num2;

    if (num1 >= num2){
        cout<<"num1 = "<<num1<<" is largest number"<<endl;  
    }
    
    else{
        cout<<"num2 = "<<num2<<" is largest number"<<endl;
    }

    return 0;
}