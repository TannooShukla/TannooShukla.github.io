#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int maxSubArray(vector<int>& nums) {
    if (nums.empty()) {
        return 0; // Handle empty array case
    }

    int max_so_far = nums[0];  // Initialize with the first element
    int current_max = nums[0]; // Initialize with the first element

    for (int i = 1; i < nums.size(); ++i) {
        // Either extend the current subarray or start a new one
        current_max = max(nums[i], current_max + nums[i]); 
        max_so_far = max(max_so_far, current_max); // Update the overall max
    }

    return max_so_far;
}

int main() {
    // Example usage:
    vector<int> nums1 = {-2, 1, -3, 4, -1, 2, 1, -5, 4};
    cout << "Max subarray sum for nums1: " << maxSubArray(nums1) << endl; // Output: 6

    vector<int> nums2 = {1};
    cout << "Max subarray sum for nums2: " << maxSubArray(nums2) << endl; // Output: 1

    vector<int> nums3 = {5,4,-1,7,8};
    cout << "Max subarray sum for nums3: " << maxSubArray(nums3) << endl; // Output: 23

    vector<int> nums4 = {-2, -1};
    cout << "Max subarray sum for nums4: " << maxSubArray(nums4) << endl; // Output: -1

    vector<int> nums5 = {-1, 0};
    cout << "Max subarray sum for nums5: " << maxSubArray(nums5) << endl; // Output: 0


    return 0;
}