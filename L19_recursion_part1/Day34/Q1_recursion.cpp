#include <iostream>
using namespace std;

//factorial
int factorial(int n){
    if(n==0){
        return 1;
    }

    return n * factorial(n-1);
}

int main(){
    int fact = factorial(5);
    cout<<fact<<endl;
    int fact1 = factorial(4);
    cout<<fact1<<endl;
    int fact2 = factorial(3);
    cout<<fact2<<endl;
    int fact3 = factorial(1);
    cout<<fact3<<endl;
    
    return 0;
}