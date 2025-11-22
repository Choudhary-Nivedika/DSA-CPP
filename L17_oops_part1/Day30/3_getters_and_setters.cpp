#include <iostream>
#include <string>
using namespace std;
class Student{
    string name;
    float cgpa;

public:

    void getPercentage(){
        cout<<(cgpa * 10)<<"%"<<endl;
    }

    //Setters
    void setName(string nameVal){
        name = nameVal;
    }

    void setCgpa(float cgpaVal){
        cgpa = cgpaVal;
    }

    //Getters
    string getName(){
        return name;
    }

    float getcgpa(){
        return cgpa;
    }
};

int main(){
    Student s1;
    s1.setName("Nivedika");
    s1.setCgpa(9.1);

    cout<<s1.getName()<<endl;
    cout<<s1.getcgpa()<<endl;
    return 0;
}