#include <iostream>
using namespace std;

int main(){
    //Print Average marks
    float eng;
    float hin;
    float math;

    cout<<"Enter English Marks: ";
    cin>>eng;
    cout<<"Enter Hindi Marks: ";
    cin>>hin;
    cout<<"Enter Maths Marks: ";
    cin>>math;

    float avg_Marks = (eng + hin + math)/3;

    cout<<"Avg Marks = "<<avg_Marks<<endl;
    return 0;
}