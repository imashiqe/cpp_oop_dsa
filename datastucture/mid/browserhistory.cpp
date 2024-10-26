#include <iostream>
#include <list>
#include <unordered_map>

using namespace std;

int main() {
    list<string> webAddresses;
    unordered_map<string, list<string>::iterator> addressMap;
    string address;
    while (cin >> address && address != "end") {
        webAddresses.push_back(address);
    }
    for (auto it = webAddresses.begin(); it != webAddresses.end(); ++it) {
        addressMap[*it] = it;
    }

    auto current = webAddresses.begin();
    int Q;
    cin >> Q;
    string command;
    for (int i = 0; i < Q; ++i) {
        cin >> command;
        if (command == "visit") {
            cin >> address;
            if (addressMap.find(address) != addressMap.end()) {
                current = addressMap[address];
                cout << *current << endl;
            } else {
                cout << "Not Available" << endl;
            }
        } else if (command == "next") {
            auto nextIt = next(current);
            if (nextIt != webAddresses.end()) {
                current = nextIt;
                cout << *current << endl;
            } else {
                cout << "Not Available" << endl;
            }
        } else if (command == "prev") {
            if (current != webAddresses.begin()) {
                --current;
                cout << *current << endl;
            } else {
                cout << "Not Available" << endl;
            }
        }
    }
    
    return 0;
}
