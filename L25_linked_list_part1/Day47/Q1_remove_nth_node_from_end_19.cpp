#include <iostream>
using namespace std;

class ListNode {
public:
    int data;
    ListNode* next;

    ListNode(int val) {
        data = val;
        next = NULL;
    }

    ~ListNode() {
        if (next != NULL) {
            delete next;
            next = NULL;
        }
    }
};

class List {
    ListNode* head;
    ListNode* tail;

public:
    List() {
        head = NULL;
        tail = NULL;
    }

    ~List() {
        if (head != NULL) {
            delete head;
            head = NULL;
        }
    }

    void push_front(int val) {
        ListNode* newNode = new ListNode(val);

        if (head == NULL) {
            head = tail = newNode;
        } else {
            newNode->next = head;
            head = newNode;
        }
    }

    void removeNthFromEnd(int n) {
        if (head == NULL) return;

        ListNode* slow = head;
        ListNode* fast = head;

        while (n--) {
            fast = fast->next;
        }

        // Remove head
        if (fast == NULL) {
            ListNode* temp = head;
            head = head->next;
            temp->next = NULL;
            delete temp;
            return;
        }

        ListNode* prev = NULL;

        while (fast != NULL) {
            prev = slow;
            slow = slow->next;
            fast = fast->next;
        }

        prev->next = slow->next;
        slow->next = NULL;   // IMPORTANT
        delete slow;
    }

    void printList() {
        ListNode* temp = head;
        while (temp != NULL) {
            cout << temp->data << " -> ";
            temp = temp->next;
        }
        cout << "NULL" << endl;
    }
};

int main() {

    List ll;

    ll.push_front(5);
    ll.push_front(4);
    ll.push_front(3);
    ll.push_front(2);
    ll.push_front(1);

    ll.printList();

    ll.removeNthFromEnd(2);   // removes 4
    ll.printList();

    return 0;
}
