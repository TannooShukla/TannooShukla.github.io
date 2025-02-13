#include <iostream>
#include <unordered_map>
#include <vector>

using namespace std;

// Function to count pairs with given sum
int countPairsWithSum(vector<int>& arr, int target) {
    unordered_map<int, int> freq; // Hash map to store frequency of elements
    int count = 0;

    for (int num : arr) {
        int complement = target - num;
        if (freq.find(complement) != freq.end()) {
            count += freq[complement]; // Add the count of complement occurrences
        }
        freq[num]++; // Store current number in hash map
    }

    return count;
}

// Main function
int main() {
    int n, target;
    
    // Taking input for array size
    cout << "Enter the number of elements in the array: ";
    cin >> n;

    vector<int> arr(n);

    // Taking array input from the user
    cout << "Enter " << n << " elements of the array: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // Taking input for target sum
    cout << "Enter the target sum: ";
    cin >> target;

    // Function call and output result
    cout << "Number of pairs with sum " << target << " is: " << countPairsWithSum(arr, target) << endl;

    return 0;
}

