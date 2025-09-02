#include<bits/stdc++.h>
using namespace std;

bool amstrong(int n)
{
    int sum=0;
    int lastdigit;
    int dup=n;
    int digits = to_string(n).size();

    while(n>0)
    {
        int lastdigit =n%10;
        sum += pow(lastdigit, digits);
        n=n/10;
    }
    return sum==dup;

}
int main()
{
    int num;
    cout<<"enter a number ";
    cin>> num;

    if(amstrong(num))
    {
        cout<<num<<"is an armstrong number"<<endl;
    }
    else{
        cout<< num << " is not an armstrong number"<< endl;

    }
    return 0;



}