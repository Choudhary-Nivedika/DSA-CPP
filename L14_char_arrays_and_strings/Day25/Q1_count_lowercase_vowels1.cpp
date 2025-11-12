#include <iostream>
using namespace std;

int getVowelsCount(string str){

    int vowCount = 0;

    for(int i=0; i<str.length(); i++){
        if(str[i]== 'a'||str[i] == 'e'||str[i] == 'i'||str[i] == 'o'||str[i] =='u'){
            vowCount++;
        }
    }
    cout<<vowCount<<endl;
    return vowCount;
}

int main(){
    string str;
    cout<<"Enter you string: ";
    getline(cin,str);

    getVowelsCount(str);


    
    return 0;
}