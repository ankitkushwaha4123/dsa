#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool isPalindrome(int x) {
        if (x < 0) return false; // negative numbers are not palindrome

        int dup = x;
        int reverse = 0;

        while (x != 0) {
            int lastdigit = x % 10;
            x = x / 10;

            reverse = reverse * 10 + lastdigit;
        }

        return dup == reverse;
    }
};

int main() {
    Solution sol;
    int x;

    cout << "Enter a number: ";
    cin >> x;

    if (sol.isPalindrome(x)) {
        cout << x << " is a palindrome number." << endl;
    } else {
        cout << x << " is not a palindrome number." << endl;
    }

    return 0;
}
