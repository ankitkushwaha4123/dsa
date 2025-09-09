#include <bits/stdc++.h>
using namespace std;

bool check(vector<int>& nums) {
    int n = nums.size();
    int count = 0;

    for (int i = 0; i < n; i++) {
        if (nums[i] > nums[(i + 1) % n]) {
            count++;
        }
    }
    return count <= 1;
}

int main() {
    vector<int> nums1 = {3,4,5,1,2};
    cout << (check(nums1) ? "true" : "false") << endl;

    vector<int> nums2 = {2,1,3,4};
    cout << (check(nums2) ? "true" : "false") << endl;

    vector<int> nums3 = {1,2,3};
    cout << (check(nums3) ? "true" : "false") << endl;

    return 0;
}
