#include <stdio.h>

#define SIZE 11 // Size of the given array

// Function to find the first occurrence of 6
int findFirstOccurrence(int arr[], int size, int target) {
    for (int i = 0; i < size; i++) {
        if (arr[i] == target) {
            return i; // Return the index of the first occurrence
        }
    }
    return -1; // Return -1 if not found
}

// Function to find the last occurrence of 6
int findLastOccurrence(int arr[], int size, int target) {
    int lastIndex = -1;
    for (int i = 0; i < size; i++) {
        if (arr[i] == target) {
            lastIndex = i; // Keep updating with the latest found index
        }
    }
    return lastIndex;
}

// Function to count the total occurrences of 6
int countOccurrences(int arr[], int size, int target) {
    int count = 0;
    for (int i = 0; i < size; i++) {
        if (arr[i] == target) {
            count++;
        }
    }
    return count;
}

int main() {
    int arr[] = {2, 4, 4, 4, 5, 5, 6, 6, 6, 6, 9}; // Given input array
    int target = 6;

    // Finding results
    int firstIndex = findFirstOccurrence(arr, SIZE, target);
    int lastIndex = findLastOccurrence(arr, SIZE, target);
    int totalCount = countOccurrences(arr, SIZE, target);

    // Display results
    if (firstIndex != -1) {
        printf("First occurrence of %d is at index: %d\n", target, firstIndex);
    } else {
        printf("%d not found in the array.\n", target);
    }

    if (lastIndex != -1) {
        printf("Last occurrence of %d is at index: %d\n", target, lastIndex);
    }

    printf("Total occurrences of %d: %d\n", target, totalCount);

    return 0;
}
