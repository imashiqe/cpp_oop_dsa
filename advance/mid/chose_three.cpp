#include <iostream>
#include <unordered_set>


bool isPossible(int* arr, int N, int S) {
  
    std::unordered_set<int> elements;

    for (int i = 0; i < N; i++) {
        int remainingSum = S - arr[i];

        
        for (int j = i + 1; j < N; j++) {
            int complement = remainingSum - arr[j];
            if (elements.find(complement) != elements.end()) {
                return true; 
            }
        }

  
        elements.insert(arr[i]);
    }

    return false; 
}

int main() {
    int T;
    std::cin >> T;

    for (int t = 0; t < T; t++) {
        int N, S;
        std::cin >> N >> S;


        int* arr = new int[N];


        for (int i = 0; i < N; i++) {
            std::cin >> arr[i];
        }

        if (isPossible(arr, N, S)) {
            std::cout << "YES" << std::endl;
        } else {
            std::cout << "NO" << std::endl;
        }

        delete[] arr;
    }

    return 0;
}
