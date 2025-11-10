#include <iostream>
#include <cstring>
using namespace std;

int main(){
    // char word[30];
    // cin>>word; //ignore after whitespaces characters

    // cout<<"Your word was: "<<word<<endl;
    // cout<<"length: "<<strlen(word)<<endl;

    //use function for sentences, para with whitespaces
    char sentence[30];
    // cin.getline(sentence,30); 
    cin.getline(sentence,30,'*');  //ignores after star 

    cout<<"Your sentence was: "<<sentence<<endl;
    cout<<sentence[0]<<endl;
    cout<<"length: "<<strlen(sentence)<<endl;
    return 0;
}