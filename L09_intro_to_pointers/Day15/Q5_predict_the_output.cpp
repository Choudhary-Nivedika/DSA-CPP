#include <iostream>
using namespace std;

int main(){
    int a = 32;
    int *ptr = &a;
    // cout<<*ptr<<endl;

    char ch = 'A';
    char &cho = ch;
    // cout<<cho<<endl;

    cho += a; 
    // cho = cho+a;
    // cout<<'a'+ 32;
    
    *ptr += ch;
    // *ptr = *ptr + ch;
    // cout<<ch<<endl;

    cout<<a<<","<<ch<<endl; 
    return 0;
}