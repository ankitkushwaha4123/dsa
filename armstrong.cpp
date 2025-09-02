#include <bits/stdc++.h>
using namespace std;

bool isArmstrong(int n) {
    int sum = 0;
    int dup = n;
    int digits = to_string(n).size(); 

    while (n > 0) {
        int lastdigit = n % 10;
        sum += pow(lastdigit, digits);
        n /= 10;
    }

    return sum == dup;
}

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;

    if (isArmstrong(num)) {
        cout << num << " is an Armstrong number." << endl;
    } else {
        cout << num << " is not an Armstrong number." << endl;
    }

    return 0;
}
