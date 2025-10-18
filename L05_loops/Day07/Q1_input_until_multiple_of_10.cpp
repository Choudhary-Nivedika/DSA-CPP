#include <iostream>
using namespace std;

int main(){
    int n;
    do{
        cout<<"Enter num: ";
        cin>>n;
        if(n%10 == 0){
            break;
        }
        cout<<"You entered: "<<n<<endl;
    }while(true);
    
    cout<<"Out of loop"<<endl;
    return 0;
}