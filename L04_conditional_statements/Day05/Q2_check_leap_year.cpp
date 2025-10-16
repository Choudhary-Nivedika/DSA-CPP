#include <iostream>
using namespace std;

int main(){
    
    int yr;
    cout<<"Enter year: ";
    cin>>yr;

    if(yr%400==0){
        cout<<yr<<" is leap year"<<endl;
    } else if(yr%100==0){
        cout<<yr<<" is not leap year"<<endl;
    } else if(yr%4==0){
        cout<<yr<<" is leap year"<<endl;
    } 
    else{
        cout<<yr<<" is not leap year"<<endl;
    }

    return 0;
}