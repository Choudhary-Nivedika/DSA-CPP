#include <iostream>
using namespace std;

void funcInt(){
    int *ptr = new int;
    *ptr = 5;
    cout<<*ptr<<endl;

    delete ptr;
}
void func1(){
    int size;
    cin>>size;
    int *ptr =  new int[size];

    int x = 1; 
    for(int i=0; i<size; i++){
        ptr[i] = x;
        cout<<ptr[i]<<" ";
        x++;
    }
    cout<<endl;

    delete [] ptr;//free
}

void func(){
    int arr[100] = {1,2,3,4,5};
    for(int i=0; i<5; i++){
        cout<<arr[i]<<" ";
    }
}


int main(){
    func();
    // cout<<arr[0]<<endl; //main don't have access
    
    func1();

    funcInt();
    return 0;
}