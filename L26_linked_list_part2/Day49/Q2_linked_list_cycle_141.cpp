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
};

class List {
public:
    ListNode* head;
    ListNode* tail;

    List() {
        head = NULL;
        tail = NULL;
    }

    // Insert at front
    void push_front(int val) {
        ListNode* newNode = new ListNode(val);
        newNode->next = head;
        head = newNode;

        if (tail == NULL)
            tail = head;
    }

    // Print list (ONLY for non-cyclic list)
    void printList() {
        ListNode* temp = head;
        while (temp != NULL) {
            cout << temp->data << " -> ";
            temp = temp->next;
        }
        cout << "NULL" << endl;
    }

    // Floyd’s Cycle Detection Algorithm
    bool hasCycle() {
        ListNode* slow = head;
        ListNode* fast = head;

        while (fast != NULL && fast->next != NULL) {
            slow = slow->next;
            fast = fast->next->next;

            if (slow == fast)
                return true;
        }
        return false;
    }
};

int main() {

    List ll;

    ll.push_front(5);
    ll.push_front(4);
    ll.push_front(3);
    ll.push_front(2);
    ll.push_front(1);   // 1 -> 2 -> 3 -> 4 -> 5 -> NULL


    ll.tail->next = ll.head;   


    if (ll.hasCycle()) {
        cout << "Cycle detected" << endl;
    } else {
        cout << "No cycle" << endl;
    }

    return 0;
}
