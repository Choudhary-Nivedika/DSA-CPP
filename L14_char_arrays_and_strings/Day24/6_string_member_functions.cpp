#include <iostream>
#include <string>
using namespace std;

int main(){
    string str = "Success comes from consistency";
    
    cout<<str.length()<<endl;

    cout<<str[3]<<endl;
    cout<<str.at(3)<<endl;

    cout<<str.substr(3,3)<<endl;

    cout<<str.find("from")<<endl;
    cout<<str.find("from",20)<<endl;
    int idx = str.find("in");
    cout<<idx<<endl;
    cout<<str.find("in")<<endl;

    return 0;
}