#include <iostream>
#include <algorithm>

int compareAscending(const void* a, const void* b) {
    return (*(int*)a - *(int*)b);
}

int compareDescending(const void* a, const void* b) {
    return (*(int*)b - *(int*)a);
}

int main() {
    int N;
    std::cin >> N;

    int* A = new int[N];

    for (int i = 0; i < N; i++) {
        std::cin >> A[i];
    }

    std::sort(A, A + N);

    for (int i = 0; i < N; i++) {
        std::cout << A[i] << " ";
    }
    std::cout << std::endl;

    std::sort(A, A + N, std::greater<int>());

    for (int i = 0; i < N; i++) {
        std::cout << A[i] << " ";
    }
    std::cout << std::endl;

    delete[] A;

    return 0;
}
