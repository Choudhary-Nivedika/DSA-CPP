#include <iostream>
using namespace std;

class Node {
    public:
        int data;
        Node* next;

        Node(int val){
            data = val;
            next = NULL;
        }

        ~Node(){

            if(next != NULL){
                
                delete next;
                next = NULL;
            }
        }
};

class List {
    Node* head;
    Node* tail;
    
    public:
        List(){
            head = NULL;
            tail = NULL;
        }

        ~List(){

            if(head != NULL){
                delete head;
                head = NULL;
            }
        }

        void push_front(int val){
            Node* newNode = new Node(val); //dynamic
            // Node* newNode(val); //static

            if(head == NULL){
                head = tail = newNode;
            } 
            else{
                newNode->next = head;
                head = newNode;
            }
        }

        void push_back(int val){
            Node* newNode = new Node(val);

            if(head == NULL){
                head = tail = newNode;
            } else{
                tail->next = newNode;
                tail = newNode;
            }
        }

        void printList(){
            Node* temp = head;

            while(temp != NULL){
                cout<<temp->data<<" -> ";
                temp = temp->next;
            }
            cout<<"NULL"<<endl;
        }

        void insert(int val, int pos){
            Node* newNode = new Node(val);

            Node* temp = head;
            for(int i=0; i<pos-1; i++){
                if(temp == NULL){
                    cout<<"position is INVALID"<<endl;
                    return;
                }
                temp = temp->next;
            }

            //temp is now at pos-1 i.e. prevv/left
            newNode->next = temp->next;
            temp->next = newNode;
        }

        void pop_front(){
            if(head ==  NULL){
                cout<<"LL is empty"<<endl;
                return;
            }
            Node* temp = head;
            head = head->next;

            temp->next = NULL;
            delete temp;

        }

        void pop_back(){
            if(head == NULL){
                cout<<"LL is empty"<<endl;
                return;
            }
            Node* temp = head;
            while(temp->next->next != NULL){
                temp = temp->next;
            }

            temp->next = NULL; //temp = tail's prev
            delete tail;
            tail = temp;
        }

        int searchItr(int key){
            Node* temp = head;
            int idx = 0;

            while(temp != NULL){
                if(temp->data == key){
                    return idx;
                }

                temp = temp->next;
                idx++;
            }

            return -1;

        }
};

int main(){

    List ll;
    
    ll.push_front(5);
    ll.push_front(4);
    ll.push_front(3);
    ll.push_front(2);
    ll.push_front(1);

    ll.printList();

    cout<<ll.searchItr(2)<<endl;
    cout<<ll.searchItr(5)<<endl;
    cout<<ll.searchItr(25)<<endl;

 
    return 0;
}