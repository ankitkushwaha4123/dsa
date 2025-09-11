#include<bits/stdc++.h>
using namespace std;

void rotate(vector<int> &nums)
{
    int n=nums.size();
    if(n==0) return ;
    int temp=nums[0];

    for(int i=1;i<n;i++)
    {
        nums[i-1]=nums[i];

    }
    nums[n-1]=temp;

}
int main()
{
    int n;
    cout<<"enter the number ";
    cin>>n;

    vector<int> nums(n);
    cout<<"enter the element ";
    for(int i=0;i<n;i++)
    {
        cin>>nums[i];
    }

    rotate(nums);
    cout<<"new arr";
    for(int i=0;i<n;i++)
    {
        cout<<nums[i] << " ";
    }
    cout<<endl;
    return 0;
    
}