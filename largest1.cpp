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

    int largest=arr[0];
    for(int i=1;i<n;i++)
    {
        if(arr[i]>largest)
        {
            largest=arr[i];
        }
        

    }
    cout<<"largest element is" <<largest<<endl;
    return 0;
}

