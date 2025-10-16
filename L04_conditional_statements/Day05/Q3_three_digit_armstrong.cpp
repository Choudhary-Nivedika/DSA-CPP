#include <iostream>
using namespace std;

int main(){
    
    int n;
    cout<<"Enter a 3 digit number: ";
    cin>>n;

    int num = n; //creating copy

    int dig1 = num % 10;
    num /= 10;  //num = num/10
    int dig2 = num % 10;
    num /= 10;
    int dig3 = num;

    int cubeSum = dig1*dig1*dig1 + dig2*dig2*dig2 + dig3*dig3*dig3;

    if(cubeSum==n){
        cout<<n<<" is an Armstrong number"<<endl;
    } else{
        cout<<n<<" is NOT an Armstrong number"<<endl;
    }
    
    return 0;
}