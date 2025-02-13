#include <iostream>
#include <unordered_map>
using namespace std;

void findMissingAndDuplicate(int A[], int B[], int N) {
    unordered_map<int, int> freq;
    int iterations = 0;

    // Count frequency of elements in B
    for (int i = 0; i < N; i++) {
        freq[B[i]]++;
        iterations++;  // Counting iterations in this loop
    }

    int missing = -1, duplicate = -1;
    int missingIterations = 0, duplicateIterations = 0;

    // Compare elements in A and B
    for (int i = 0; i < N; i++) {
        iterations++;  // Counting iterations in this loop

        if (freq[A[i]] == 0 && missing == -1) {
            missing = A[i];
            missingIterations = iterations;
        }
        if (freq[A[i]] > 1 && duplicate == -1) {
            duplicate = A[i];
            duplicateIterations = iterations;
        }
    }

    cout << "Missing Number: " << missing << " (Found at iteration: " << missingIterations << ")" << endl;
    cout << "Duplicate Number: " << duplicate << " (Found at iteration: " << duplicateIterations << ")" << endl;
    cout << "Total Iterations: " << iterations << endl;
}

int main() {
    int A[] = {1, 2, 3, 4, 5};   // Original array
    int B[] = {1, 2, 2, 4, 5};   // Modified array: 3 is missing, 2 is duplicate
    int N = sizeof(A) / sizeof(A[0]);

    findMissingAndDuplicate(A, B, N);

    return 0;
}
