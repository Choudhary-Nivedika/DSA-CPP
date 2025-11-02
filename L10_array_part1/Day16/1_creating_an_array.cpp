#include <iostream>
using namespace std;

int main(){
    int marks[50]; // 0 to 49
    cout<<marks[0]<<endl; //garbage value
    cout<<marks[1]<<endl; //garbage value
    cout<<marks[2]<<endl;  //garbage value
    cout<<marks[50]<<endl;


    int marks1[50] = {1,2,3}; // 0 to 49
    // int marks[] = {1,2,3}; 
    cout<<marks1[0]<<endl; //1
    cout<<marks1[1]<<endl; //2
    cout<<marks1[2]<<endl; //3
    cout<<marks1[3]<<endl; //0


    int marks2[5] = {1,2,3,4,5}; 
    int n = sizeof(marks2)/sizeof(int);
    cout<<n<<endl;
    return 0;
}