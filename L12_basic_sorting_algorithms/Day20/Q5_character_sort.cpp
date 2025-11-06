#include <iostream>
using namespace std;

void print(char ch[], int n){
    for(int i=0; i<n; i++){
        cout<<ch[i]<<" , ";
    }
    cout<<endl;
}

void sortChar(char ch[], int n){
    for(int i =1; i<n; i++){
        int curr = ch[i];
        int prev = i-1;
        while(prev>=0 && ch[prev] < curr){ //descending order
        // while(prev>=0 && ch[prev] > curr){ //ascending order
            swap(ch[prev],ch[prev+1]);
            prev--;
        }
        ch[prev+1] = curr;
    }
    print(ch,n);
}


int main(){

    char ch[6]={'f','b','a','e','c','d'};
    int n = sizeof(ch)/sizeof(char);

    sortChar(ch,n);



    return 0;
}