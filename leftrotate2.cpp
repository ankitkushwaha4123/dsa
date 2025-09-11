#include <bits/stdc++.h>
using namespace std;

void leftrotate(vector<int>& nums, int k) {
    int n = nums.size();
    if (n == 0) return;

    k = k % n;
    if (k == 0) return;

    vector<int> temp(k);

    for (int i = 0; i < k; i++) {
        temp[i] = nums[i];
    }

    for (int i = k; i < n; i++) {
        nums[i - k] = nums[i];
    }

    for (int i = 0; i < k; i++) {
        nums[n - k + i] = temp[i];
    }
}

int main() {
    vector<int> nums = {1,2,3,4,5,6,7};
    int k = 2;

    leftrotate(nums, k);

    for (int x : nums) cout << x << " ";
    cout << endl;  
}
