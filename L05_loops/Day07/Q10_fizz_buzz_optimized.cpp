#include <iostream>
using namespace std;

int main(){
      int n = 15;
    int counter3 = 0, counter5 =0;

    for(int idx = 1; idx<=n; idx++){
        counter3++; counter5++;
        if(counter3==3 && counter5==5){
            cout<<"FizzBuzz"<<endl;
            counter3=0; counter5=0;
        }
        else if(counter3==3){
            cout<<"Fizz"<<endl;
            counter3=0; 
        }
        else if(counter5==5){
            cout<<"Buzz"<<endl;
            counter5=0;
        }
        else{
            cout<<idx<<endl;
        }

    }
    return 0;
}