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
        Node* temp = head;
        while (temp->next != nullptr) {
            temp = temp->next; 
        }
        temp->next = newNode; 
    }
}

bool areIdentical(Node* head1, Node* head2) {
    while (head1 != nullptr && head2 != nullptr) {
        if (head1->data != head2->data) {
            return false; 
        }
        head1 = head1->next; 
        head2 = head2->next;
    }
    return head1 == nullptr && head2 == nullptr; 
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
    Node* head1 = nullptr; 
    Node* head2 = nullptr; 
    int value;
    while (true) {
        cin >> value; 
        if (value == -1) break; 
        insert(head1, value); 
    }
    while (true) {
        cin >> value; 
        if (value == -1) break;
        insert(head2, value); 
    }
    if (areIdentical(head1, head2)) {
        cout << "YES" << endl; 
    } else {
        cout << "NO" << endl; 
    }
    deleteList(head1);
    deleteList(head2);

    return 0;
}
