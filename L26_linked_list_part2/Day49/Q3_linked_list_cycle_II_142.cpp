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

    // Detect cycle and return starting node of cycle
    ListNode* detectCycle(ListNode* head) {
        ListNode* slow = head;
        ListNode* fast = head;

        while (fast != NULL && fast->next != NULL) {
            slow = slow->next;
            fast = fast->next->next;

            if (slow == fast) {
                // Cycle detected
                ListNode* p1 = head;
                ListNode* p2 = slow;

                while (p1 != p2) {
                    p1 = p1->next;
                    p2 = p2->next;
                }
                return p1; // starting node of cycle
            }
        }
        return NULL; // no cycle
    }
};

int main() {

    List ll;

    ll.push_front(5);
    ll.push_front(4);
    ll.push_front(3);
    ll.push_front(2);
    ll.push_front(1);   // 1 -> 2 -> 3 -> 4 -> 5

    // Create cycle: tail points to head
    ll.tail->next = ll.head;

    ListNode* cycleStart = ll.detectCycle(ll.head);

    if (cycleStart != NULL) {
        cout << "Cycle detected at node with value: "
             << cycleStart->data << endl;
    } else {
        cout << "No cycle detected" << endl;
    }

    return 0;
}
