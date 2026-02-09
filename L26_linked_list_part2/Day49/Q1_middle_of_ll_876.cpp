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
public:
    ListNode* head;
    ListNode* tail;

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

    // Insert at front
    void push_front(int val) {
        ListNode* newNode = new ListNode(val);
        newNode->next = head;
        head = newNode;

        if (tail == NULL)
            tail = head;
    }

    // Print linked list
    void printList() {
        ListNode* temp = head;
        while (temp != NULL) {
            cout << temp->data << " -> ";
            temp = temp->next;
        }
        cout << "NULL" << endl;
    }

    // Find middle node (slow-fast pointer)
    ListNode* middleNode() {
        ListNode* slow = head;
        ListNode* fast = head;

        while (fast != NULL && fast->next != NULL) {
            slow = slow->next;
            fast = fast->next->next;
        }
        return slow;
    }
};

int main() {

    List ll;

    // ll.push_front(7);
    // ll.push_front(6);
    ll.push_front(5);
    ll.push_front(4);
    ll.push_front(3);
    ll.push_front(2);
    ll.push_front(1); // 1->2->3->4->5->6->7

    // Print list
    ll.printList();

    // Find & print middle
    ListNode* mid = ll.middleNode();
    if (mid != NULL) {
        cout << "Middle Node: " << mid->data << endl;
    }

    return 0;
}
