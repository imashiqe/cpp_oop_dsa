#include <iostream>
#include <list>
#include <set>

using namespace std ;

int main() {
    std::list<int> LinkedList;
    int value;
    while (std::cin >> value && value != -1) {
        LinkedList.push_back(value);
    }
    std::set<int> uniqueValues(LinkedList.begin(), LinkedList.end());
    LinkedList.clear();
    LinkedList.insert(LinkedList.begin(), uniqueValues.begin(), uniqueValues.end());
    
    for (int val : LinkedList) {
        std::cout << val << " ";
    }
    return 0;
}
