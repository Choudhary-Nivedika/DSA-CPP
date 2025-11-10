#include <iostream>
using namespace std;

int main(){
    char ch1 = 'a';
    char ch2 = 'A';
    char ch3 = '%';
    char ch4 = '9';
    char ch5 = '\n'; // nect line char
    char ch6 = '\t';

    cout<<(int)ch1<<endl;
    cout<<(int)ch2<<endl;

    //to find index
    char character = 'f';
    int position = character - 'a';
    cout<<position<<endl;
    return 0;
}