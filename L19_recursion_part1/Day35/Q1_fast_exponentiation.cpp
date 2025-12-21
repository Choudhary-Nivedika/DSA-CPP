#include <iostream>
using namespace std;

int power(int a, int n){
    if(n==0){
        return 1;
    }

    if(n%2 == 1){
        int val = power(a, n/2);
        return val * val* a;
    }
    else{
        int val = power(a, n/2);
        return val * val;
    }
}

int main(){

    int a, n;
    cout<<"Enter th evalue you wantnto calculate"<<endl;
    cout<<"a = ";
    cin>>a;
    cout<<"n = ";
    cin>>n;

    cout<<power(a,n)<<endl;
    
    return 0;
}