#include <bits/stdc++.h>
using namespace std;

void movezero(vector<int> &nums)
{
    int n = nums.size();
    if (n == 0) return;

    int j = -1;
    for (int i = 0; i < n; i++)
    {
        if (nums[i] == 0)
        {
            j = i;
            break;
        }
    }
    if (j == -1) return;
    for (int i = j + 1; i < n; i++)
    {
        if (nums[i] != 0)
        {
            swap(nums[i], nums[j]);
            j++;
        }
    }
}

int main()
{
    int n;
    cout << "Enter size of array: ";
    cin >> n;

    vector<int> arr(n);
    cout << "Enter " << n << " elements: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    movezero(arr);

    cout << "Array after moving zeros to the end: ";
    for (int x : arr)
        cout << x << " ";
    cout << endl;

    return 0;
}
