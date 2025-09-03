#include<bits/stdc++.h>
using namespace std;

void number( int i)
{
    if (i<1) return ;
    cout<< i<< endl;
    number(i-1);


}
int main()
{ 
    int n;
    cout<<"enter a number"<<endl;
    cin>>n;
    number(n);
    return 0;
}