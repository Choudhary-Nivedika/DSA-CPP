#include <iostream>
#include <list>
#include <iterator>
using namespace std;

class Node {
    public:
        int data;
        Node* next;

        Node(int data){
            this->data = data;
            next = NULL;
        }
};

class List {
    public:
        Node* head;
        Node* tail;
    
        List(){
            head = NULL;
            tail = NULL;
        }

        void push_front(int val){
            Node* newNode = new Node(val); //dynamic
            // Node* newNode(val); //static

            if(tail == NULL){
                head = tail = newNode;
            } 
            else{
                newNode->next = head;
                head = newNode;
            }
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
        
        void push_back(int val){
            Node* newNode = new Node(val);

            if(head == NULL){
                head = tail = newNode;
            } else{
                tail->next = newNode;
                tail = newNode;
            }
        }
};


void printList(Node* head){
            Node* temp = head;

            while(temp != NULL){
                cout<<temp->data<<" -> ";
                temp = temp->next;
            }
            cout<<"NULL"<<endl;
}

Node* splitAtMid(Node* head){
    Node* slow = head;
    Node* fast = head;
    Node* prev = NULL;

    while(fast != NULL && fast->next != NULL){
        prev = slow;
        slow = slow->next;
        fast = fast->next->next;
    }

    if(prev != NULL){
        prev->next = NULL; //split at middle
    }

    return slow; //slow= rightHead
}

Node* reverse(Node* head){
    Node* prev = NULL;
    Node* curr = head;
    Node* next = NULL;

    while(curr != NULL){
        next = curr->next;
        curr->next = prev;

        prev = curr;
        curr = next;
    }

    return prev; //prev is head of reversed LL
}


Node* zigZag(Node* head){

    Node* rightHead = splitAtMid(head);
    Node* rightHeadRev = reverse(rightHead);

    //alternate merging: 1st head = head; 2nd head = rightHeadRev
    Node* left = head;
    Node* right = rightHeadRev;
    Node* tail = right;

    while(left != NULL && right != NULL){
        Node* nextLeft = left->next;
        Node* nextRight = right->next;

        left->next = right;
        right->next = nextLeft;

        tail = right;

        left = nextLeft;
        right = nextRight;
    }

    if(right != NULL){
        tail->next = right;
    }

    return head;
}

int main(){

    List ll;

    
    ll.push_front(5); 
    ll.push_front(4);
    ll.push_front(3);
    ll.push_front(2);
    ll.push_front(1); //1->2->3->4->5->NULL


    printList(ll.head);

    ll.head = zigZag(ll.head);
    printList(ll.head);

    
    
    
    return 0;
}