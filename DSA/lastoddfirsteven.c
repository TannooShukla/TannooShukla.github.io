#include <stdio.h>

int main() {
    int ar[] = {4, 6, 8, 10, 12, 3, 5, 7, 9, 11};  // Given array
    int size = sizeof(ar) / sizeof(ar[0]);  // Get the array size

    int first_even_index = -1, last_odd_index = -1;

    // Finding the first occurrence of an even number
    for (int i = 0; i < size; i++) {
        if (ar[i] % 2 == 0) {  // Check if the number is even
            first_even_index = i;
            break;
        }
    }

    // Finding the last occurrence of an odd number
    for (int i = 0; i < size; i++) {
        if (ar[i] % 2 != 0) {  // Check if the number is odd
            last_odd_index = i;
        }
    }

    // Display results
    if (first_even_index != -1) {
        printf("First occurrence of an even number is at index: %d (Value: %d)\n", first_even_index, ar[first_even_index]);
    } else {
        printf("No even number found in the array.\n");
    }

    if (last_odd_index != -1) {
        printf("Last occurrence of an odd number is at index: %d (Value: %d)\n", last_odd_index, ar[last_odd_index]);
    } else {
        printf("No odd number found in the array.\n");
    }

    return 0;
}
