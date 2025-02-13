#include <stdio.h>

int minRemovalsForEvenAdjSum(int arr[], int n) {
    int evenCount = 0, oddCount = 0;

    // Count even and odd numbers
    for (int i = 0; i < n; i++) {
        if (arr[i] % 2 == 0)
            evenCount++;
        else
            oddCount++;
    }
    return (evenCount < oddCount) ? evenCount : oddCount;
}

int main() {
    int n;
    
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    
    int arr[n];
    printf("Enter %d elements: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    int minRemovals = minRemovalsForEvenAdjSum(arr, n);

    printf("Minimum removals required: %d\n", minRemovals);

    return 0;
}
