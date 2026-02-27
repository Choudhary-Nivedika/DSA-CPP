#include <iostream>
#include <stack>
#include <string>
using namespace std;

bool isValid(string str){ // O(n)   O(n)
    stack<char> s;

    for(int i=0; i<str.size(); i++){
        char ch = str[i];
        if(ch == '(' || ch == '[' || ch == '{'){
            s.push(ch);
        } else{ //closing
            if(s.empty()){
                return false; 
            }

            //match
            int top = s.top();
            if((top == '(' && ch == ')') ||
               (top == '[' && ch == ']') ||
               (top == '{' && ch == '}')){
                    s.pop();
            }
            else{
                return false;
            }
        }
    }

    if(s.empty()){
        return true;
    }
    else{
        return false;
    }

    // return s.empty();
}

int main(){

    string str1 = "([}])"; //invalid: false
    string str2 = "([{}])"; //valid: true

    cout<<isValid(str1)<<endl; //0
    cout<<isValid(str2)<<endl; //1
    
    return 0;
}