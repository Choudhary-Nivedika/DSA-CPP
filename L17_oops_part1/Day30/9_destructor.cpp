#include <iostream>
using namespace std;

class Car{
    public:
        string name;
        string color;
        int *mileage;      

    Car(string name, string color){
        this->name = name;
        this->color = color;
        mileage = new int; //dynamic allocation
        *mileage = 12;
    }

    Car(Car &original){
        cout<<"copying original to new"<<endl;
        name = original.name;
        color = original.color;
        mileage = new int;
        *mileage = *original.mileage;

    }

    ~Car(){
        cout<<"Deleting object.."<<endl;
        if(mileage != NULL){
            delete mileage;
            mileage = NULL;
        }
    }

};

int main(){
    Car c1("Maruti 800", "White");

    cout<<c1.name<<endl;//normally free 
    cout<<c1.color<<endl; //normally free 
    cout<<*c1.mileage<<endl; //memory deallocate
    
    return 0;
}