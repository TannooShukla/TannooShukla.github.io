#include <stdio.h>

int main() {
    int arr[] = {2, 3, 4, 10, 18, 25, 30}; 
    int n = sizeof(arr) / sizeof(arr[0]);  
    int key, low = 0, high = n - 1, mid, found = 0;

    printf("Enter the element to search: ");
    scanf("%d", &key);

    
    while (low <= high) {
        mid = low + (high - low) / 2;

        if (arr[mid] == key) {
            printf("Element found at index %d\n", mid);
            found = 1;
            break;
        } 
        else if (arr[mid] < key) {
            low = mid + 1;  
        } 
        else {
            high = mid - 1;
        }
    }

    if (!found) {
        printf("Element not found in the array\n");
    }

    return 0;
}

