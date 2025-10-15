#include <iostream>
using namespace std;

int main(){
    
    
    int income;
    float tax;
    cout<<"Enter your income(in lakhs): ";
    cin>>income;

    if(income<500000){
        cout<<"Tax = 0%"<<endl;
    } else if(income <= 1000000){
        cout<<"Tax = "<<0.2*income<<endl;
    } else{
        cout<<"Tax = "<<0.3*income<<endl;
    }

    return 0;
}