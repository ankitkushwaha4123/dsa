#include<bits/stdc++.h>
using namespace std;
int cnt=0;
void recurssion(string name )
{
    if(cnt==5)return ;
    cout<<name <<endl;
    cnt++;

    recurssion(name);
}
int main()
{
    string name;
    cout<<"enter name"<<endl;
    cin>>name;
    recurssion(name);
    return 0;

}