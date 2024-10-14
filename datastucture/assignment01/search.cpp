#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
    Node(int value) : data(value), next(nullptr) {}
};

void insert(Node*& head, int value) {
    Node* newNode = new Node(value);
    if (head == nullptr) {
        head = newNode; 
    } else {
        Node* t = head;
        while (t->next != nullptr) {
            t = t->next; 
        }
        t->next = newNode; 
    }
}
int findIndex(Node* head, int X) {
    int index = 0; 
    Node* c = head;
    while (c != nullptr) {
        if (c->data == X) {
            return index; 
        }
        c = c->next;
        index++; 
    }
    return -1; 
}
void deleteList(Node*& head) {
    Node* c = head;
    Node* nextNode;
    while (c != nullptr) {
        nextNode = c->next;
        delete c; 
        c = nextNode; 
    }
    head = nullptr; 
}
int main() {
    int T; 
    cin >> T; 
    while (T--) {
        Node* head = nullptr; 
        int value;
        while (true) {
            cin >> value;
            if (value == -1) break; 
            insert(head, value); 
        }
        int X;
        cin >> X;
        int index = findIndex(head, X);
        cout << index << endl; 
        deleteList(head);
    }
    return 0;
}
