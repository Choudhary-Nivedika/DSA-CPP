#include <iostream>
using namespace std;

class Person{
    protected:
    string name;
    int age;

    public: 
    Person(string nameVal, int ageVal){
        name = nameVal;
        age = ageVal;
    }
};

class Student : public Person{
    string studentId;

    public:
    //constructor (calls base class constructor)
    Student(string nameVal ,int ageVal , string idVal) : Person(nameVal , ageVal){
        studentId = idVal;
    }
    

    void displayStudentInfo(){
        cout<<"Student Name: "<<name<<endl;
        cout<<"Age: "<<age<<endl;
        cout<<"Student ID: "<<studentId<<endl;

    }
};


int main(){
    Student student("Alice", 20, "S12345");
    student.displayStudentInfo();
    
    return 0;
}