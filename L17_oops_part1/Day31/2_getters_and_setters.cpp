#include <iostream>
using namespace std;

class Movie {
    private:
        string name;
        int duration;

    public:
        void printDetails(){
            cout<<name<<endl;
            cout<<duration<<endl;
        }
    //getters
    string getName(){
        return name;
    }

    int getDuration(){
        return duration;
    }

    //setter
    void setName(string newName){
        name = newName;
    }

    void setDuration(int newDuration){
        duration = newDuration;
    }
};

int main(){

    Movie barbie;
    barbie.setName("Barbie Doll");
    barbie.setDuration(120);
    cout<<barbie.getName()<<" "<<barbie.getDuration()<<endl;

    barbie.printDetails();
    
    
    return 0;
}
    
   