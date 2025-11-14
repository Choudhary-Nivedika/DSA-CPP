#include <iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> vec = {1,2,3,4};
    cout<<"size: "<<vec.size()<<endl; //4
    cout<<"capacity: "<<vec.capacity()<<endl; //4

    vec.push_back(5);
    cout<<"size: "<<vec.size()<<endl; //5
    cout<<"capacity: "<<vec.capacity()<<endl; //8 (double)


    vector<int> vec1;
    cout<<"size: "<<vec1.size()<<endl;
    cout<<"capacity: "<<vec1.capacity()<<endl;

    vec1.push_back(5);
    cout<<"size: "<<vec1.size()<<endl; 
    cout<<"capacity: "<<vec1.capacity()<<endl; 

    vec1.pop_back();
    cout<<"size: "<<vec1.size()<<endl; 
    cout<<"capacity: "<<vec1.capacity()<<endl;  //capacity remains same 

    return 0;
}