#include <iostream>
using namespace std;

int main(){
    int marks = 10;
    int &marksCopy = marks;
    cout<<&marks<<endl;
    cout<<&marksCopy<<endl;
    


    int *ptr  = &marks;
    cout<<marks<<endl;
    cout<<ptr<<endl;

    *ptr = 20;
    cout<<marks<<endl;
    cout<<&ptr<<endl;

    int **ptrToptr = &ptr;
    cout<<*ptrToptr<<endl;
    cout<<ptrToptr<<endl;
    return 0;
}