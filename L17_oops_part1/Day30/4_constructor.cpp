#include <iostream>
using namespace std;

class Car{
    string name;
    string color;

public:
    Car(){
        cout<<"Constructor wihtout params"<<endl;
    }

//  Car(string nameVal, string colorVal){
    Car(string name, string color){
        cout<<"Constructor with params"<<endl;
        // name = nameVal;
        // color = colorVal;

        //this - special pointer
        this->name = name;
        this->color = color;

        //----or-----

        // (*this).name = name;
        // (*this).color = color;
    }

    void start(){
        cout<<"Car has started..."<<endl;
    }

    void stop(){
        cout<<"Car has stopped"<<endl;
    }

    //Getter
    string getName(){
        return name;
    }

    string getColor(){
        return color;
    }

};

int main(){

    Car c0; // non-params
    Car c1("Maruti 800", "white"); //params
    Car c2("Fortuner", "white"); //params

    cout<<"Car Name: "<<c1.getName()<<endl;
    cout<<"Car Color: "<<c1.getColor()<<endl;
    
    return 0;
}