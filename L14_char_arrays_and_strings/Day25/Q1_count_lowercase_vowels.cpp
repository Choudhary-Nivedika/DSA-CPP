#include <iostream>
#include <string>
#include <cstring>
using namespace std;

// bool isVowels(char ch){
//     if(ch == 'a'||ch == 'e'||ch == 'i'||ch == 'o'||ch =='u'){
//         return true;
//     }
//     return false;
// }

//optimized
bool isVowels(char ch){
    if(ch == 'a'||ch == 'e'||ch == 'i'||ch == 'o'||ch =='u'){
        return true;
    }

    return false;
}

void countLowerVowels(string str){
    int countVowels = 0;
    for(int i =0; i<str.length(); i++){
        if(isVowels(str[i])){
            countVowels++;
        }
    }
    cout<<"Count = "<<countVowels<<endl;
}

int main(){
    string str;
    cout<<"Enter you string: ";
    getline(cin,str);

    countLowerVowels(str);

    return 0;
}