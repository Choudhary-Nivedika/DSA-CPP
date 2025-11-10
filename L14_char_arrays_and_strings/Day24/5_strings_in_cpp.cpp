#include <iostream>
#include <string>
using namespace std;

int main(){
    string str = "hello";
    cout<<str<<endl;
    str = "yellow";
    cout<<str<<endl;

    //input from user
    string str1;
    // getline(cin, str1);
    cout<<str1<<endl;

    cout<<str1[0]<<endl;
    cout<<str1[1]<<endl;
    cout<<str1[2]<<endl;
    cout<<str1[3]<<endl;


    //for each loop
    string strr = "Nivedika Choudhary";
    for(int i = 0; i<strr.length(); i++){
        cout<<strr[i]<<"-";
    }
    cout<<endl;

    //Another way to access individual characters of string
    for(char ch : strr){
        cout<<ch<<", ";
    }
    cout<<endl;

    //operations inn C++
    string strr1 = "cat";
    string strr2 = "dog";

    cout<<(strr1 == strr2)<<endl; //false->0
    cout<<(strr1 != strr2)<<endl; //1
    cout<<(strr1 < strr2)<<endl; //1
    cout<<(strr1 > strr2)<<endl; //0
  
    return 0;
}