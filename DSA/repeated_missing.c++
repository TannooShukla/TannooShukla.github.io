#include <iostream>
#include <vector>
#include <map>
#include <algorithm>

using namespace std;

vector<int> findErrorNums(vector<int>& nums) {
    int n = nums.size();
    map<int, int> counts;
    int repeating = -1;
    int missing = -1;

    // 1. Count occurrences using a map
    for (int num : nums) {
        counts[num]++;
        if (counts[num] == 2) {
            repeating = num;
        }
    }

    // 2. Find the missing number using binary search (after sorting)
    vector<int> sorted_nums = nums;  // Create a copy for sorting
    sort(sorted_nums.begin(), sorted_nums.end());

    int left = 0;
    int right = n - 1;

    for (int i = 0; i < n; ++i) {
        if (sorted_nums[i] != i + 1) {
            missing = i + 1;
            break;
        }
    }
    if (missing == -1) missing = n; //If no missing number in between 1 to n then n is missing number

    return {repeating, missing};
}

int main() {
    vector<int> nums1 = {1, 2, 2, 4};
    vector<int> result1 = findErrorNums(nums1);
    cout << "Test Case 1: Repeating = " << result1[0] << ", Missing = " << result1[1] << endl; // Output: 2 3

    vector<int> nums2 = {1, 1};
    vector<int> result2 = findErrorNums(nums2);
    cout << "Test Case 2: Repeating = " << result2[0] << ", Missing = " << result2[1] << endl; // Output: 1 2

    vector<int> nums3 = {3, 2, 3, 4, 6, 5};
    vector<int> result3 = findErrorNums(nums3);
    cout << "Test Case 3: Repeating = " << result3[0] << ", Missing = " << result3[1] << endl; // Output: 3 1

        vector<int> nums4 = {1,5,3,2,2};
    vector<int> result4 = findErrorNums(nums4);
    cout << "Test Case 4: Repeating = " << result4[0] << ", Missing = " << result4[1] << endl; // Output: 2 4

    vector<int> nums5 = {8,7,6,5,4,3,2,10,9,10};
    vector<int> result5 = findErrorNums(nums5);
    cout << "Test Case 5: Repeating = " << result5[0] << ", Missing = " << result5[1] << endl; // Output: 10 1

    return 0;
}