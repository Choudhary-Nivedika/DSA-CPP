#include <iostream>
#include <cstring>
using namespace std;

int main(){
    char arr[5] = {'a','b','c','d','e'};
    char arr1[6] = {'a','b','c','d','e','\0'}; //character array
    cout<<arr[0]<<endl;
    cout<<arr[1]<<endl;
    cout<<arr[2]<<endl;
    cout<<arr[3]<<endl;
    cout<<arr[0]<<endl;

    cout<<arr<<endl; //print  all char arr value
    cout<<arr1<<endl;

    //Creation and Output
    char work1[] = "code";
    char work2[5]= "code";
    char work3[] = {'c','o','d','e','\0'};
    char work4[50] = {'c','o','d','e','\0'};
    cout<<work1<<endl;
    cout<<work2<<endl;
    cout<<work3<<endl;
    cout<<work4<<endl;
    cout<<strlen(work4)<<endl;


    return 0;
}