#include <iostream>
using namespace std;

class Complex{
    int real;
    int img;
     
    public:
    Complex(int r, int i){
        real = r;
        img = i;
    }

    void showNum(){
        cout<<real<<" + "<<img<<"i"<<endl;
    }


    Complex operator - (Complex &c1){
        int resReal = this->real - c1.real;
        int resImg = this->img - c1.img;
        Complex c3(resReal ,resImg);
        return c3;
    }
};

int main(){
    Complex c1(1,4);
    Complex c2(4,6);

    c1.showNum();
    c2.showNum();

    Complex c3 = c2 - c1;
    c3.showNum();

    
    return 0;
}