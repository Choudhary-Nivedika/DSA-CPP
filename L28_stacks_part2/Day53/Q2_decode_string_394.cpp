#include <iostream>
#include <string>
#include <stack>
#include <vector>
using namespace std;

string decodeString(string s){
    stack<string> st;

    for(int i = 0; i < s.size(); i++){
        if(s[i] != ']'){
            st.push(string(1, s[i]));
        }
        else{
            string curr = "";
            while(st.top() != "["){
                curr = st.top() + curr;
                st.pop();
            }
            st.pop(); // remove '['

            string digit = "";
            while(!st.empty() && isdigit(st.top()[0])){
                digit = st.top() + digit;
                st.pop();
            }

            int num = stoi(digit);
            string newString = "";

            for(int i = 0; i < num; i++){
                newString += curr;
            }

            st.push(newString);
        }
    }

    string result = "";
    while(!st.empty()){
        result = st.top() + result;
        st.pop();
    }

    return result;
}


int main(){
    
    string str = "3[a]2[bc]";

    cout<<decodeString(str);

    return 0;
}