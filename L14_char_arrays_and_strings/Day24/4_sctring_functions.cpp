#include <iostream>
#include <cstring>
using namespace std;

int main(){

    //strcpy
    char str1[100] = "Nivedika";
    char str2[100] = "Nivedika Choudhary";
    strcpy(str1,str2);
    cout<<"str1 = "<<str1<<endl;


    //strcat
    char str3[100] = "Nivedika ";
    char str4[100] = "Choudhary";
    strcat(str3,str4);
    cout<<"str3 = "<<str3<<endl;
    cout<<"str4 = "<<str4<<endl;

    //strcmp
    char str5[100] = "Nivedika";
    char str6[100] = "Nivedika";
    cout<<strcmp(str5,str6)<<endl;

    char str7[100] = "abcd";
    char str8[100] = "xyz";
    cout<<strcmp(str7,str8)<<endl;


    char str9[100] = "xyz";
    char str10[100] = "abcdefg";
    cout<<strcmp(str9,str10)<<endl;
    

    return 0;
}