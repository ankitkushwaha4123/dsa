#include <bits/stdc++.h>
using namespace std;

int longestSubarrayWithSumK(const vector<int>& arr, int K) {
    unordered_map<long long,int> mp;
    long long prefix = 0;
    int maxLen = 0;
    for(int i = 0; i < (int)arr.size(); i++){
        prefix += arr[i];
        if(prefix == K) maxLen = i + 1;
        if(mp.find(prefix - K) != mp.end())
            maxLen = max(maxLen, i - mp[prefix - K]);
        if(mp.find(prefix) == mp.end())
            mp[prefix] = i;
    }
    return maxLen;
}

int main(){
    vector<int> arr = {10, 5, 2, 7, 1, -10};
    int K = 15;
    cout << longestSubarrayWithSumK(arr, K) << "\n";
    return 0;
}
