#include <bits/stdc++.h>
using namespace std;

int longestSubarrayWithSumK(vector<int>& nums, int k) {
    int n = nums.size();
    int left = 0, right = 0;
    int sum = 0, maxLen = 0;

    while (right < n) {
        // expand the window
        sum += nums[right];

        // shrink the window until sum <= k
        while (sum > k && left <= right) {
            sum -= nums[left];
            left++;
        }

        // check if we found a valid subarray
        if (sum == k) {
            maxLen = max(maxLen, right - left + 1);
        }

        right++;
    }

    return maxLen;
}

int main() {
    vector<int> nums = {1, 2, 1, 1, 1, 3, 2, 1};
    int k = 5;

    cout << "Longest subarray length with sum " << k << " is: "
         << longestSubarrayWithSumK(nums, k) << endl;

    return 0;
}
