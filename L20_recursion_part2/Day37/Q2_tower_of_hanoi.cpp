#include <iostream>
using namespace std;

int count = 0;
void towerOfHanoi(int n, string source, string dest, string helper){
    if(n==0){
        return;
    }

    towerOfHanoi(n-1, source, helper, dest);
    cout<<"Move "<<n<<"th disc from "<<source<<" to "<<dest<<endl;
    count++;
    towerOfHanoi(n-1, helper, dest, source);
}

int main(){
    // int n = 2;
    int n = 3;
    towerOfHanoi(n, "A", "C", "B");
    cout<<count<<endl;
    return 0;
}