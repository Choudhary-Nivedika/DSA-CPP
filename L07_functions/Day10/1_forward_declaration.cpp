#include <iostream>
using namespace std;

void sayHello(){
    cout<<"Hello :)"<<endl;
}
void assistant(){
    sayHello();
    cout<<"Work done \n";
}

int main(){
    sayHello(); //function call
    sayHello();
    sayHello();
    assistant();
    return 0;
}