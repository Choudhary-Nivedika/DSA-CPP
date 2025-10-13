#include <iostream>
using namespace std;

int main(){

    float pencil, pen, eraser;
    
    cout<<"Enter cost of Pencil: ";
    cin>>pencil;
    cout<<"Enter cost of Pen: ";
    cin>>pen;
    cout<<"Enter cost of Eraser: ";
    cin>>eraser;
    
    float cost = pencil + pen + eraser;
    float GST = 0.18 * cost;
    cout<<"Total cost = "<<cost<<endl;
    cout<<"Final price with 18% GST Tax= "<<cost + GST<<endl;

    return 0;
}