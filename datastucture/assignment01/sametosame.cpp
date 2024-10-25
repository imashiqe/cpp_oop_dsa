#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
    Node(int value) : data(value), next(nullptr) {} 
};

void insert(Node*& h, int value) {
    Node* newNode = new Node(value);
    if (h == nullptr) {
        h = newNode; 
    } else {
        Node* temp = h;
        while (temp->next != nullptr) {
            temp = temp->next; 
        }
        temp->next = newNode; 
    }
}

bool areIdentical(Node* h1, Node* h2) {
    while (h1 != nullptr && h2 != nullptr) {
        if (h1->data != h2->data) {
            return false; 
        }
        h1 = h1->next; 
        h2 = h2->next;
    }
    return h1 == nullptr && h2 == nullptr; 
}
void del(Node*& h) {
    Node* current = h;
    Node* nextNode;
    while (current != nullptr) {
        nextNode = current->next;
        delete current; 
        current = nextNode; 
    }
    h = nullptr;
}
int main() {
    Node* h1 = nullptr; 
    Node* h2 = nullptr; 
    int value;
    while (true) {
        cin >> value; 
        if (value == -1) break; 
        insert(h1, value); 
    }
    while (true) {
        cin >> value; 
        if (value == -1) break;
        insert(h2, value); 
    }
    if (areIdentical(h1, h2)) {
        cout << "YES" << endl; 
    } else {
        cout << "NO" << endl; 
    }
    del(h1);
    del(h2);

    return 0;
}
