#include<bits/stdc++.h>
using namespace std;
void recurssion(int i, int n )
{
    if(i>n)return ;
    cout<<i <<endl;
    recurssion(i+1,n );
}
int main()
{
    int n;
    cout<<"enter number "<<endl;
    cin>>n;
    recurssion(1,n);
    return 0;
}