#include <iostream>
#include <unordered_map>
using namespace std;

void findMissingAndDuplicate(int A[], int B[], int N) {
    unordered_map<int, int> freq;

    // Count frequency of elements in array B
    for (int i = 0; i < N; i++) {
        freq[B[i]]++;
    }

    int missing = -1, duplicate = -1;

    // Compare elements in A and B
    for (int i = 0; i < N; i++) {
        if (freq[A[i]] == 0) {
            missing = A[i];  // A[i] is missing in B
        }
        if (freq[A[i]] > 1) {
            duplicate = A[i];  // A[i] appears twice in B
        }
    }

    cout << "Missing Number: " << missing << endl;
    cout << "Duplicate Number: " << duplicate << endl;
}

int main() {
    int A[] = {1, 2, 3, 4, 5};
    int B[] = {1, 2, 2, 4, 5}; // 3 is missing, 2 is duplicate
    int N = sizeof(A) / sizeof(A[0]);

    findMissingAndDuplicate(A, B, N);

    return 0;
}
