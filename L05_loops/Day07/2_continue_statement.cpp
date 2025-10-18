#include <iostream>
using namespace std;

int main(){
    for(int i = 1; i<=10; i++ ){
        if(i==3){
            cout<<"continue statement work"<<endl;
            continue;
        }
        cout<<i<<endl;
    }
    return 0;
}