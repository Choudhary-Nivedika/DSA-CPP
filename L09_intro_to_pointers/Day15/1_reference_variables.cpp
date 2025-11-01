#include <iostream>
using namespace std;

//pass by refernece using reference variables
void changeA (int &param){
    param = 250;
    cout<<param<<endl;
}

int main(){
    int a = 10;
    int &b = a;
    b = 30;
    cout<<b<<endl;
    cout<<a<<endl;
    changeA(a);
    cout<<a<<endl;

    
    return 0;
}