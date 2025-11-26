#include <iostream>
using namespace std;

class Animal{
    public:
        string color;

        void eat(){
            cout<<"eats"<<endl;
        }

        void breathe(){
            cout<<"breathes"<<endl;
        }

};

//by default private inheritance in C++
class Fish : public Animal{  
public:

    int fins;

    void swim(){
        cout<<"Swims"<<endl;
    }

};

int main(){
    
    return 0;
}