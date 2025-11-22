#include <iostream>
using namespace std;

class Student{
private:  // by default private so don't write private keyword
    string name;

public:
    float cgpa;

    void getPercentage(){
        cout<<(cgpa * 10)<<"%"<<endl;
    }
};

int main(){
    Student s1;
    // s1.name = "Nivedika"; // private
    // cout<<s1.name<<endl; // private

    s1.cgpa = 9.0;
    cout<<s1.cgpa<<endl;

    s1.getPercentage();
    
    return 0;
}