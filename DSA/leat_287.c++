#include <iostream>
#include <vector>

using namespace std;

int findDuplicate(vector<int>& nums) {
    int slow = nums[0];
    int fast = nums[0];

    // Phase 1: Detect cycle using Floyd’s Algorithm
    do {
        slow = nums[slow];
        fast = nums[nums[fast]];
    } while (slow != fast);

    // Phase 2: Find the duplicate number
    slow = nums[0];  // Reset slow to the beginning
    while (slow != fast) {
        slow = nums[slow];
        fast = nums[fast];
    }

    return slow; // The duplicate number
}

int main() {
    vector<int> nums1 = {1, 3, 4, 2, 2};
    cout << "Duplicate number: " << findDuplicate(nums1) << endl; // Output: 2

    vector<int> nums2 = {3, 1, 3, 4, 2};
    cout << "Duplicate number: " << findDuplicate(nums2) << endl; // Output: 3

    vector<int> nums3 = {3, 3, 3, 3, 3};
    cout << "Duplicate number: " << findDuplicate(nums3) << endl; // Output: 3

    return 0;
}
