#include <iostream>
using namespace std;

 int countSubstring(string s, int start, int end){

        if(start > end){
            return 0;
        }

        if(start == end){
            return 1;
        }

        int totalCount = 0;

        if (s[start] == s[end]){
            totalCount++;
        }

        totalCount += (countSubstring(s,start,end-1) 
                    + countSubstring(s, start+1,end) 
                    - countSubstring(s, start+1,end-1));

        return totalCount;
    }


int main(){

    string s = "abcab";
    cout<<countSubstring(s,0,s.length()-1)<<endl;
    
    return 0;
}