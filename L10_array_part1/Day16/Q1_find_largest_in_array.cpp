#include <iostream>
using namespace std;

int main(){
    
    //Max value

    int arr[] = {5,4,3,9,12};
    int n= sizeof(arr)/sizeof(int);
    int max =arr[0];
    for(int i = 0; i<n; i++){
        if(arr[i]>max){
            max = arr[i];
            cout<<"Assigning val "<<arr[i]<<" to max"<<endl;
        }
        cout<<"Max = "<<max<<endl;   
    }
    
    return 0;
}