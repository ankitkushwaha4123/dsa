#include<bits/stdc++.h>
using namespace std;

int main()
{
    
    int n;
    cout<<"enter a number ";
    cin>>n;
    int count=0;
    int lastdigit;

    while(n>0)
    {
        lastdigit=n%10;
        count=count+1;
        cout<<lastdigit<<endl;


        n=n/10;

    }
    cout <<"total digit "<< count<< endl;
    return 0;

}

