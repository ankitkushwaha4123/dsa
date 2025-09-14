#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int ans = 0;
        for (int num : nums) {
            ans ^= num;  
        }
        return ans;
    }
};

int main() {
    Solution s;
    vector<int> nums1 = {2,2,1};
    vector<int> nums2 = {4,1,2,1,2};
    vector<int> nums3 = {1};

    cout << s.singleNumber(nums1) << endl; 
    cout << s.singleNumber(nums2) << endl; 
    cout << s.singleNumber(nums3) << endl; 

    return 0;
}
