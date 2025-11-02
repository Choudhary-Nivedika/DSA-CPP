#include <iostream>
using namespace std;

void func(int arr[]){
    arr[0]= 1000;
}

void func2(int *ptr){
    ptr[0]= 1000;
}

int main(){
    int a = 5;
    int *ptr = &a;
    cout<<ptr<<endl; //0x....

    int arr[] = {5,4,3,9,12};
    int n= sizeof(arr)/sizeof(int);
    cout<<arr<<endl;  //memory address of arr 
    cout<<*arr<<endl;  //arr[0]
    cout<<*(arr+1)<<endl; //arr[1]
    cout<<*(arr+2)<<endl; //arr[2]
    return 0;
}