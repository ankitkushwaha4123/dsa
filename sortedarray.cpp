#include<bits/stdc++.h>
using namespace std;

int issorted(int n,vector<int> a)
{
    for(int i=0;i<n;i++)
    {
        if(a[i]>=a[i-1])
        {

        }
        else{
            return false ;

        }
    }
    return true ;
}
int main()
{
    int n;
    cout<<"enter the number"<<endl;
    cin>>n;
    vector<int> a(n);
    cout<<"enter the element ";
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }

    if( issorted(n,a))
    {
        cout<<"array is sorted";
    }
    else
    {
        cout<<"array is not sorted ";

    }
    return 0;


}