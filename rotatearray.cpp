#include <bits/stdc++.h>
using namespace std;

void reverseArray(vector<int>& nums, int start, int end) {
    while (start < end) {
        swap(nums[start], nums[end]);
        start++;
        end--;
    }
}

void rotate(vector<int>& nums, int k) {
    int n = nums.size();
    k = k % n; // handle k >= n

    reverseArray(nums, 0, n - 1);
    reverseArray(nums, 0, k - 1);
    reverseArray(nums, k, n - 1);
}

int main() {
    vector<int> nums1 = {1,2,3,4,5,6,7};
    int k1 = 3;
    rotate(nums1, k1);
    for (int num : nums1) cout << num << " ";
    cout << endl;

    vector<int> nums2 = {-1,-100,3,99};
    int k2 = 2;
    rotate(nums2, k2);
    for (int num : nums2) cout << num << " ";
    cout << endl;

    return 0;
}
