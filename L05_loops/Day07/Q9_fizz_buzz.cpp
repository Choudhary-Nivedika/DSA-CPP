#include <iostream>
using namespace std;

int main(){
     int n = 15;
    //Interview question
    for(int idx = 1; idx<=n ; idx++){
        if(idx%3==0 && idx%5==0){
            cout<<"Fizz Buzz"<<endl;
        }
        else if(idx%3==0){
            cout<<"Fizz"<<endl;
        }
        else if(idx%5==0){
            cout<<"Buzz"<<endl;
        } else{
            cout<<idx<<endl;
        }
    }
    return 0;
}