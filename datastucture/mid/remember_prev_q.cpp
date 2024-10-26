#include <iostream>
#include <list>
using namespace std;

void printList(const list<int>& doubleLinkedList) {
    cout << "L -> ";
    for (const auto& val : doubleLinkedList) {
        cout << val << " ";
    }
    cout << endl;
    cout << "R -> ";
    for (auto it = doubleLinkedList.rbegin(); it != doubleLinkedList.rend(); ++it) {
        cout << *it << " ";
    }
    cout << endl;
}

int main() {
    int Q;
    cin >> Q;
    list<int> doubleLinkedList;
    for (int i = 0; i < Q; ++i) {
        int X, V;
        cin >> X >> V;
        if (X == 0) {
            doubleLinkedList.push_front(V);
        } 
        else if (X == 1) {
            doubleLinkedList.push_back(V);
        } 
        else if (X == 2) {
            if (V >= 0 && V < static_cast<int>(doubleLinkedList.size())) { 
                auto it = doubleLinkedList.begin();
                advance(it, V); 
                doubleLinkedList.erase(it); 
            }
        }
        printList(doubleLinkedList);
    }

    return 0;
}
