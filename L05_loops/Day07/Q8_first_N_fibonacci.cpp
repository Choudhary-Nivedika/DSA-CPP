#include <iostream>
using namespace std;

int main(){
    int N = 10;
    int first = 0;
    int sec = 1;
    cout<<first<<endl;
    cout<<sec<<endl;
    for(int i = 2; i<N; i++){
        int third =  first + sec;
        cout<<third<<endl;
        first = sec;
        sec = third;

    } 
    return 0;
}