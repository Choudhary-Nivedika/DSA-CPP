#include <iostream>
using namespace std;

int main(){

    int a = 10;
    int *ptr = &a;
    cout<<&a<<" = "<<ptr<<endl;

    int **pptr = &ptr;
    
    cout<<&ptr<<" = "<<pptr<<endl;

    float pi = 3.14;
    float *ptr2 = &pi;
    cout<<&pi<<" = "<<ptr2<<endl;

    cout<<sizeof(ptr)<<endl;
    cout<<sizeof(ptr2)<<endl;
    return 0;
}