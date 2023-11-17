#include <iostream>
#include <algorithm>
using namespace std;

int* sort_it(int* arr, int N) {

    int* sortedArray = new int[N];


    copy(arr, arr + N, sortedArray);


    sort(sortedArray, sortedArray + N, greater<int>());

    return sortedArray;  
}

int main() {
    int N;
    cin >> N;


    int* arr = new int[N];

    for (int i = 0; i < N; i++) {
        cin >> arr[i];
    }

 
    int* sortedArray = sort_it(arr, N);


    for (int i = 0; i < N; i++) {
        cout << sortedArray[i] << " ";
    }
    cout << endl;


    delete[] arr;
    delete[] sortedArray;

    return 0;
}
