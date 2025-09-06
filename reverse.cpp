#include<bits/stdc++.h>
using namespace std;

void f(vector<int> &a, int l,int r){
    if(l>=r)
    return ;

    swap(a[l],a[r]);
    f(a,l+1,r-1);
    
}
int main()
{
    vector<int> a{2,3,4,5,6};
    int n=a.size();

    f(a,0,n-1);
    for (int x:a)
    {
        cout<<x<< " ";
    }
    return 0;


    
}