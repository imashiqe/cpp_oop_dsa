#include <iostream>
#include <limits>
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

int computeDifference(Node* head) {
    if (head == nullptr) return 0;
    int maxVal = std::numeric_limits<int>::min(); 
    int mval = std::numeric_limits<int>::max(); 
    Node* current = head;
    while (current != nullptr) {
        if (current->data > maxVal) {
            maxVal = current->data; 
        }
        if (current->data < mval) {
            mval = current->data; 
        }
        current = current->next; 
    }
    return maxVal - mval; 
}
void deleteList(Node*& head) {
    Node* current = head;
    Node* nextNode;
    while (current != nullptr) {
        nextNode = current->next;
        delete current; 
        current = nextNode;
    }
    head = nullptr;
}
int main() {
    Node* head = nullptr; 
    int value;
    while (true) {
        cin >> value; 
        if (value == -1) break; 
        insert(head, value); 
    }
    int difference = computeDifference(head);
    cout << difference << endl; 
    deleteList(head);
    return 0;
}
