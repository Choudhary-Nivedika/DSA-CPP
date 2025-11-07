#include <iostream>
using namespace std;

int main(){

    int arr[3][4];
    int n=3, m=4;

    //traverse rows wise
    
    //input
    for(int i=0; i<n; i++){  //row
        for(int j=0; j<m; j++){  //column
            cin>>arr[i][j]; //0,0 0,1 0,2 0,3   1,0 1,1 1,2 1,3.....
            // can give input in single line also
        }
    } 


    //ouput
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cout<<arr[i][j]<<" "; 
        }
        cout<<endl;
    } 
    
    return 0;
}