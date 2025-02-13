#include <stdio.h>

#define SIZE 10 // Size of the given array

// Function to find first even and last odd occurrence
void findFirstEvenLastOdd(int arr[], int size) {
    int first_even_index = -1, last_odd_index = -1;

    for (int i = 0; i < size; i++) {
        if (first_even_index == -1 && arr[i] % 2 == 0) { // First even found
            first_even_index = i;
        }
        if (arr[i] % 2 != 0) { // Last odd found (keep updating)
            last_odd_index = i;
        }
    }

    // Display results
    if (first_even_index != -1) {
        printf("First occurrence of an even number is at index: %d (Value: %d)\n", first_even_index, arr[first_even_index]);
    } else {
        printf("No even number found in the array.\n");
    }

    if (last_odd_index != -1) {
        printf("Last occurrence of an odd number is at index: %d (Value: %d)\n", last_odd_index, arr[last_odd_index]);
    } else {
        printf("No odd number found in the array.\n");
    }
}

// Function to find first odd and last even occurrence
void findFirstOddLastEven(int arr[], int size) {
    int first_odd_index = -1, last_even_index = -1;

    for (int i = 0; i < size; i++) {
        if (first_odd_index == -1 && arr[i] % 2 != 0) { // First odd found
            first_odd_index = i;
        }
        if (arr[i] % 2 == 0) { // Last even found (keep updating)
            last_even_index = i;
        }
    }

    // Display results
    if (first_odd_index != -1) {
        printf("First occurrence of an odd number is at index: %d (Value: %d)\n", first_odd_index, arr[first_odd_index]);
    } else {
        printf("No odd number found in the array.\n");
    }

    if (last_even_index != -1) {
        printf("Last occurrence of an even number is at index: %d (Value: %d)\n", last_even_index, arr[last_even_index]);
    } else {
        printf("No even number found in the array.\n");
    }
}

int main() {
    int arr[] = {4, 6, 8, 10, 12, 3, 5, 7, 9, 11}; // Given input array

    printf("\n--- Finding First Even and Last Odd ---\n");
    findFirstEvenLastOdd(arr, SIZE);

    printf("\n--- Finding First Odd and Last Even ---\n");
    findFirstOddLastEven(arr, SIZE);

    return 0;
}
