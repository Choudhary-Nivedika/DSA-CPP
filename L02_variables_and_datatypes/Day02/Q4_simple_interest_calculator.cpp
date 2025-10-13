#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    
    float P, R, T;
    cout<<"Enter value of Principal: ";
    cin>>P;
    cout<<"Enter value of Rate: ";
    cin>>R;
    cout<<"Enter value of time: ";
    cin>>T;

    float SI = (P*R*T)/100;
    cout<<fixed<<setprecision(2)<<"SI = "<<SI<<endl;

    return 0;
}