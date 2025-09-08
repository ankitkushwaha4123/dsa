#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cout<<"enter the size of array";
    cin>>n;

    vector<int>arr(n);
    cout<<"enter the element ";
    for(int i=0;i< n;i++)
    {
        cin>>arr[i];
    }

    if(n<2)
    {
        cout<<"array must have 2 element ";
        return 0;
    }
    int largest=INT_MIN;
    int secondLargest = INT_MIN;

    for (int i = 0; i < n; i++) {
        if (arr[i] > largest) {
            secondLargest = largest;
            largest = arr[i];
        } else if (arr[i] > secondLargest && arr[i] != largest) {
            secondLargest = arr[i];
        }
    }

    if (secondLargest == INT_MIN) {
        cout << "No second largest element exists.\n";
    } else {
        cout << "Second largest element is: " << secondLargest << endl;
    }

    return 0;
}

