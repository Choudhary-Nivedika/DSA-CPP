#include <iostream>
using namespace std;

class Animal{
    public:
        void eat(){
            cout<<"eats"<<endl;
        }

        void breathe(){
            cout<<"breathes"<<endl;
        }

};

class Mammal : public Animal{
    public:
        string bloodType;

        Mammal(){   //constructor
            bloodType ="warm";
        }

};

class Dog : public Mammal{
    public:
    
        void tailWag(){
            cout<<"A dog wags its tail"<<endl;
            
        }

};


int main(){
    Dog d1;

    d1.eat();
    d1.breathe();
    d1.tailWag();
    cout<<d1.bloodType<<endl;
    
    return 0;
}