#include<bits/stdc++.h>
using namespace std;
int fiboo(int n)
{
    if(n<=1) return n;
    int last=fiboo(n-1);
    int slast=fiboo(n-2);
    return last+slast;
}
int main()
{
    cout<<fiboo(4);
    return 0;

}