#include<bits/stdc++.h>
using namespace std;

void number(int i,int sum)
{
    if(i<1) 
    {
        cout<<sum;
        return ;

    

    }
    number(i-1,sum+i);
}
int main()
{
    int n;
    cout<<"enter the number";
    cin>>n;
    number(n,0);
    return 0;
}