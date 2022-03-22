#include <iostream>
#include <string>
using namespace std;

class Node {
    public:
        int data;
        Node* next;  // review pointers dumbass

        void printData() {
            cout << data << endl;
        }
};

void printList(Node* n) {
    while (n != NULL) {
        n->printData();
        n = n->next;
    }
}

void appendNode(Node* n, int new_data) {
    // Add a node to the end of a Linked List
    // 1. traverse to last Node
    while (n->next != NULL) {
        n = n->next;
    }
    // 2. set next to the new Node
    Node* a = new Node();
    a->data = new_data;
    a->next = NULL;
    n->next = a;
}

int main() {
    // I really need to review pointers
    Node* n1 = new Node();
    Node* n2 = new Node();
    Node* n3 = new Node();

    n1->data = 5;
    n1->next = n2;  // dereference
    n2->data = 10;
    n2->next = n3;  // dereference

    n3->data = 7;
    n3->next = NULL;

    printList(n1);
    appendNode(n1, 8);
    printList(n1);
    return 0;
}