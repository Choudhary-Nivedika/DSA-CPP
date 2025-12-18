#include <iostream>
using namespace std;

void func(){
    cout<<"function called..kaam"<<endl;
    // func();  //infinite recursion
}

int main(){
    func();
    return 0;
}