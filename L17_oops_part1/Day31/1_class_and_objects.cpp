#include <iostream>
using namespace std;

class Movie {
    public:
        string name;
        int duration;

        void printDetails(){
            cout<<name<<endl;
            cout<<duration<<endl;
        }
};

int main(){
    Movie endgame;
    endgame.name = "Avengers Endgame";
    endgame.duration = 180;
    endgame.printDetails();

    Movie barbie;
    barbie.name = "Barbie Doll";
    barbie.duration = 120;
    barbie.printDetails();
    
    return 0;
}