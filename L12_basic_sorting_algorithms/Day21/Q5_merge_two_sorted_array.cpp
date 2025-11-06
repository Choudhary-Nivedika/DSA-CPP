#include <iostream>
using namespace std;

void mergeTwoSorted(int num1[], int m, int num2[], int n){
    int i = m-1;
    int j = n-1;
    int idx = m + n - 1;

    while(i>=0 && j>=0){
        if(num1[i] <= num2[j]){
            num1[idx] = num2[j];
            j--;
        }
        else{
            num1[idx] = num1[i];
            i--;
        }
        idx--;
    }

    //copying remaining elements from num2(if any)
    while(j>=0){
        num1[idx] = num2[j];
        j--;
        idx--;
    }
}

int main(){

    int num1[6] = {1,2,3,0,0,0};
    int num2[3] = {2,5,6};
    int m=3, n=3;

    mergeTwoSorted(num1, m, num2, n);

    cout<<"Merged array: ";
    for(int i=0; i<m+n; i++){
        cout<<num1[i]<<" ";
    }
    cout<<endl;

    return 0;
}