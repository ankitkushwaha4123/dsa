#include <iostream>
#include <unordered_map>
#include <vector>
using namespace std;

vector<int> twoSum(const vector<int>& arr, int target) {
    unordered_map<int, int> seen;
    for (int i = 0; i < arr.size(); ++i) {
        int complement = target - arr[i];
        if (seen.count(complement)) {
            return {seen[complement], i};
        }
        seen[arr[i]] = i;
    }
    return {-1, -1}; // No valid pair found
}

int main() {
    vector<int> arr = {2, 6, 5, 8, 11};
    int target = 14;
    vector<int> result = twoSum(arr, target);
    cout << result[0] << " " << result[1] << endl; // Output: 1 3
    return 0;
}
