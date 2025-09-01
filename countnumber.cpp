#include<bits/stdc++.h>
using namespace std;

int count (int n )
{
    int cnt=0;
    int lastdigit;

    while(n>0)
    {
        lastdigit=n%10;
        cnt=cnt+1;
        cout<<lastdigit<<endl;


        n=n/10;

    }
    cout <<"total digit "<< cnt<< endl;
    return cnt;


}
int main()
{
    
    int n;
    cout<<"enter a number ";
    cin>>n;
    count(n);
    return 0;


}

