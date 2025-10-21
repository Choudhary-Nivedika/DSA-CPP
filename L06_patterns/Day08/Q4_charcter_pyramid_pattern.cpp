#include <iostream>
using namespace std;

int main(){
    // print character pyramid
    char ch = 'A';
    int n = 4;
    for (int i = 1; i <=n; i++){
        for(int j=1; j<=i; j++){
            cout<<ch;
            ch++;
        }
        cout<<endl;
    }
    return 0;
}