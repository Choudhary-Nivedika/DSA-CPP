#include <iostream>
using namespace std;

class Student{
    //properties
    string name;
    float cgpa;

    //methods
    void getPercentage(){
        cout<<(cgpa * 10)<<"%"<<endl;
    }
};

class User{
    int id;
    string username;
    string password;
    string bio;

    void deactivate(){
        cout<<"Deleting account"<<endl;
    }

    void editBio(string newBio){
        bio = newBio;
    }
};

int main(){
    Student s1; //an object
    cout<<sizeof(s1)<<endl;
    
    return 0;
}