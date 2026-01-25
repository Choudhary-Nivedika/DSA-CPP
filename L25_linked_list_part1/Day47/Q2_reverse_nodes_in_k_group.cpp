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
        newNode->next = head;
        head = newNode;

        if (tail == NULL)
            tail = head;
    }

    // 🔹 Reverse K nodes (recursive)
    ListNode* reverseKGroup(ListNode* head, int k) {
        ListNode* curr = head;

        // Check if k nodes exist
        for (int i = 0; i < k; i++) {
            if (curr == NULL)
                return head;
            curr = curr->next;
        }

        // Reverse k nodes
        curr = head;
        ListNode* prev = NULL;
        int count = 0;

        while (count < k) {
            ListNode* save = curr->next;
            curr->next = prev;
            prev = curr;
            curr = save;
            count++;
        }

        // Recursive call for remaining list
        head->next = reverseKGroup(curr, k);

        return prev;
    }

    void reverseInGroups(int k) {
        head = reverseKGroup(head, k);
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

    ll.reverseInGroups(2);   // reverse in groups of 2
    ll.printList();

    return 0;
}
