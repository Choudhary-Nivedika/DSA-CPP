#include <iostream>
#include <vector>
using namespace std;

//create Stack using vector

class Stack{
    vector<int> vec;

    public:
        void push(int val){        //O(1)
            vec.push_back(val);
        }

        void pop(){   //O(1)
            if(isEmpty()){
                cout<<"Stack is empty"<<endl;
                return;
            }
            vec.pop_back();
        }

        int top(){   //O(1)
            if(isEmpty()){
                cout<<"Stack is empty"<<endl;
                return -1;
            }
            int lastIdx = vec.size()-1;
            return vec[lastIdx];
        }

        bool isEmpty(){
            return vec.size() == 0;
        }
};


int main(){

    Stack s;
    
    s.push(4);
    s.push(3);
    s.push(2);
    s.push(1);

    while(!s.isEmpty()){
        cout<<s.top()<<" ";
        s.pop();
    }
    
    return 0;
}