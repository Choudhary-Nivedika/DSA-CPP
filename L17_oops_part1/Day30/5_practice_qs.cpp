#include <iostream>
using namespace std;

class User{
    int id;
    string password;

public:
    string username;

    User(int id){
        this->id = id;
    }
    
    //setter
    void setPassword(string password){
        this->password = password;
        
    }
    
    //Getter
    string getPassword(){
        return password;
    }
};

int main(){
    User user1(101);
    user1.username = "NIVEDIKA_CHOUDHARY";
    user1.setPassword("#@$%^&*");

    cout<<"Username: "<<user1.username<<endl;
    cout<<"Password: "<<user1.getPassword()<<endl;
    
    return 0;
}