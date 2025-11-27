#include <iostream>
using namespace std;

class Animal{
    private:
        string color;

        void eat(){
            cout<<"eats"<<endl;
        }

        void breathe(){
            cout<<"breathes"<<endl;
        }

};

class Fish : public Animal{
public:

    int fins;

    void swim(){
        // eat(); //not possible
        cout<<"Swims"<<endl;
    }

};

int main(){
    Fish f1;
    f1.fins = 3;
    cout<<f1.fins<<endl;
    f1.swim();
    //not possible
    // f1.eat();
    // f1.breathe();
    
    return 0;
}