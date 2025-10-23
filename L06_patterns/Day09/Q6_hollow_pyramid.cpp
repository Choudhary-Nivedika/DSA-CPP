#include <iostream>
using namespace std;

int main(){
    // Hollow rectangle
    int n,m;
    cout<<"Enter n and m: ";
    cin>>n>>m;

    for(int i = 1; i<=n; i++){
        for(int j = 1; j<=m; j++){
            if(i==1 || i==n||j==1||j==m){
                cout<<"* ";
            }else{
                cout<<"  ";
            }

        }
        cout<<endl;
    }


    for(int i = 1; i<=5;i++){
        for(int j = 1;j<=i; j++){
            if(i==1 || j== 1 || i ==5 || j==i){
                cout<<"* ";
            } else cout<<"  ";  
        }
        cout<<endl;
    }
    return 0;
}