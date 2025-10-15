#include <iostream>
using namespace std;

int main(){
    //switch statement

    // int day = 6;

    // switch(day){
    //     case 1: cout<<"Monday";
    //         break;
    //     case 2: cout<<"Tuesday";
    //         break;
    //     case 3: cout<<"Wednesday";
    //         break;
    //     case 4: cout<<"Thursday";
    //         break;
    //     case 5: cout<<"Friday";
    //         break;
    //     case 6: cout<<"Saturday";
    //         break;
    //     case 7: cout<<"Sunday";
    //         break;
    //     default: cout<<"Invalid Day";

    // }
    
    // Build a calculator
    int a, b;
    cout<<"Enter a:  ";
    cin>>a;
    cout<<"Enter b:  ";
    cin>>b;
    char op;
    cout<<"Enter a operator yyou want to perform(+,-,*,/): ";
    cin>>op;


    switch(op){
        case '+' : cout<<"a + b =  "<<a+b;
            break;
        case '-' : cout<<"a - b =  "<<a-b;
            break;
        case '*' : cout<<"a * b =  "<<a*b;
            break;
        case '/' : cout<<"a / b =  "<<a/b;
            break;
        default: cout<<"Invalid Operator";

    }
    return 0;
}