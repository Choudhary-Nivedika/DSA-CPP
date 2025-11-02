#include <iostream>
using namespace std;

int main(){
    //min value
    
    int arr[] = {5,4,3,9,12};
    int n= sizeof(arr)/sizeof(int);
    int min =arr[0];
    for(int i = 0; i<n; i++){
        if(arr[i]< min){
            min = arr[i];
            cout<<"Assigning val "<<arr[i]<<" to min"<<endl;
        }
        cout<<"Min = "<<min<<endl;   
    }
    return 0;
}