#include <iostream>
using namespace std;

class Movie{
    private:
    string name;
    int duration;

    public:
    Movie(){
        name = "untitled";
        duration = -1;
    }

    Movie(int duration, string name){
        this->name = name;
        this->duration = duration;
    }

    Movie(Movie& other){
        cout<<"Copy constructor"<<endl;
        this->name = other.name;
        this->duration = other.duration;
    }

    void printDetails(){
        cout<<name<<" "<<duration<<endl;
    }
};

int main(){
    Movie endgame(180, "EndGame");
    endgame.printDetails();
    Movie newEndgame(endgame);
    newEndgame.printDetails();
    
    return 0;
}