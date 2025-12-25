#include <iostream>
using namespace std;

int validSubstr(string s){
     int n  = s.size();
     
     //base case
     if(n<=1){
        return n;
     }

     int count = 0;
     if(s[0] == s[n-1]){
        count++;
     }
     //Remove letter from end
     count += validSubstr(s.substr(0,n-1));

     //remove letter from start
     count += validSubstr(s.substr(1));
     
     //remove repeated
     count -= validSubstr(s.substr(1, n-2));

     return count;

}

int main(){
    string s = "abcab";
    int count = validSubstr(s);

    cout<<count<<endl;
    
    return 0;
}