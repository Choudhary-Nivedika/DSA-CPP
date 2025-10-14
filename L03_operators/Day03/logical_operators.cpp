#include <iostream>
using namespace std;

int main(){
    

    cout<<((3<5)&&(10>5))<<endl;  //1
    cout<<((3<5)&&(10<5))<<endl;  //0
    cout<<((3>5)&&(10>5))<<endl;  //0 
    cout<<((3>5)&&(10<5))<<endl;  //0


    cout<<((3<5)||(10>5))<<endl;  //1
    cout<<((3<5)||(10<5))<<endl;  //1
    cout<<((3>5)||(10>5))<<endl;  //1
    cout<<((3>5)||(10<5))<<endl;  //0


    cout<<(!(3<5))<<endl; //0
    return 0;
}