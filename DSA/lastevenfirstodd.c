#include <stdio.h>

int main() {
    int ar[] = {4, 6, 8, 10, 12, 3, 5, 7, 9, 11};  // Given array
    int size = sizeof(ar) / sizeof(ar[0]);  // Find the size of the array

    int first_odd_index = -1, first_even = -1, last_even_index = -1;

    // Finding the first occurrence of an odd number
    for (int i = 0; i < size; i++) {
        if (ar[i] % 2 != 0) {  // Check if the number is odd
            first_odd_index = i;
            break;
        }
    }

    // Finding the first even number and then its last occurrence
    for (int i = 0; i < size; i++) {
        if (ar[i] % 2 == 0) {  // Check if the number is even
            first_even = ar[i];
            break;
        }
    }

    // Finding the last occurrence of the first even number
    for (int i = 0; i < size; i++) {
        if (ar[i] == first_even) {
            last_even_index = i;
        }
    }

    // Display results
    if (first_odd_index != -1) {
        printf("First occurrence of an odd number is at index: %d (Value: %d)\n", first_odd_index, ar[first_odd_index]);
    } else {
        printf("No odd number found in the array.\n");
    }

    if (last_even_index != -1) {
        printf("Last occurrence of the first even number (%d) is at index: %d\n", first_even, last_even_index);
    } else {
        printf("No even number found in the array.\n");
    }

    return 0;
}
