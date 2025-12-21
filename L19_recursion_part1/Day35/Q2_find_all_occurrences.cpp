#include <iostream>
using namespace std;

void allOccurrences(int arr[],int n, int idx, int key){
    if(idx == n){
        return;
    }
    if(arr[idx] == key){
        cout<<idx<<endl;

    }
    allOccurrences(arr, n, idx+1, key);
}

int main(){
    int arr[] = {3,2,4,5,6,2,7,2,2};
    
    allOccurrences(arr,9, 0, 2);
    
    return 0;
}