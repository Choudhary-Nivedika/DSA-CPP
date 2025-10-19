#include <iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter a table that you want to print: ";
    cin>>n;
    cout<<"Table Of "<<n<<endl;
    for (int i = 0; i<= 10; i++){
        cout<<n<<" X "<<i<<" = "<<n*i<<endl;
    }
    
    return 0;
}