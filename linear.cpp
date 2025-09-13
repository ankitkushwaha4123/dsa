#include<bits/stdc++.h>
using namespace std;

int linearsearch(int n,int num,vector<int> &arr){
    for(int i=0;i<n;i++)
    {
        if(arr[i]==num)
        {
            return i;
        }

    }
    return -1;

}
int main()
{
    int n;
    cout<<"enter the number";
    cin>>n;

    vector<int> arr(n);
    cout << "Enter " << n << " elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    int num;
    cout << "Enter the element to search: ";
    cin >> num;

    int result = linearsearch(n, num, arr);

    if (result != -1)
        cout << "Element found at index " << result << endl;
    else
        cout << "Element not found" << endl;

    return 0;
}



