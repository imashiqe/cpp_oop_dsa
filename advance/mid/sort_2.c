#include <stdio.h>
#include <stdlib.h>

// Function to compare elements for descending order
int compareDescending(const void *a, const void *b) {
    return (*(int*)b - *(int*)a);
}

// Function to sort the array in descending order
void sort_it(int N, int A[]) {
    // Sorting the array in descending order using qsort function
    qsort(A, N, sizeof(int), compareDescending);
}

int main() {
    int N;
    scanf("%d", &N);

    // Dynamic allocation of memory for the array
    int *A = (int*)malloc(N * sizeof(int));

    // Input the array elements
    for (int i = 0; i < N; i++) {
        scanf("%d", &A[i]);
    }

    // Call the sort_it function to sort the array
    sort_it(N, A);

    // Print the sorted array in descending order
    for (int i = 0; i < N; i++) {
        printf("%d ", A[i]);
    }
    printf("\n");

    // Freeing the dynamically allocated memory
    free(A);

    return 0;
}
