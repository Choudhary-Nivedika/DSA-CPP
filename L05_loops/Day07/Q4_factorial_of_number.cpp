#include <iostream>
using namespace std;

int main(){
    int n = 6;
    int fact = 1;
    for(int i =1; i<=n;i++){
        fact = fact * i;
    }
    cout<<"Factorial of "<<n<<" is "<<fact<<endl;
    return 0;
}