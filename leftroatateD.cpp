#include <bits/stdc++.h>
using namespace std;

// Helper function to reverse part of array
void reversePart(vector<int>& nums, int start, int end) {
    while (start < end) {
        swap(nums[start], nums[end]);
        start++;
        end--;
    }
}

// Rotate array function
void rotate(vector<int>& nums, int k) {
    int n = nums.size();
    k = k % n;  // effective rotations
    
    // Step 1: reverse entire array
    reversePart(nums, 0, n - 1);
    // Step 2: reverse first k elements
    reversePart(nums, 0, k - 1);
    // Step 3: reverse rest
    reversePart(nums, k, n - 1);
}

// Main function
int main() {
    // Example input
    vector<int> nums = {1, 2, 3, 4, 5, 6, 7};
    int k = 3;

    // Rotate array
    rotate(nums, k);

    // Print rotated array
    cout << "Rotated Array: ";
    for (int num : nums) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
