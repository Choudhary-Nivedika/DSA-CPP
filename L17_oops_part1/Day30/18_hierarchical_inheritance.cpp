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

class Bird : public Animal{
    public:
    void fly(){
        cout<<"flies"<<endl;
    }
};

class Fish : public Animal{
    public:
    void swim(){
        cout<<"swims"<<endl;
    }
};
class mammal : public Animal{
    public:
    void walk(){
        cout<<"walk"<<endl;
    }
};

int main(){
    cout<<"bird class"<<endl;
    Bird b1;
    b1.eat();
    b1.breathe();
    b1.fly();

    cout<<"fish class"<<endl;
    Fish f1;
    f1.eat();
    f1.breathe();
    f1.swim();

    cout<<"mammal class"<<endl;
    mammal m1;
    m1.eat();
    m1.breathe();
    m1.walk();
    
    return 0;
}