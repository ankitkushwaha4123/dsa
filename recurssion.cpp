#include<bits/stdc++.h>
using namespace std;

int c=0;
void ankit()

{
    if (c==3)
    return ;

    cout<<c<<endl;
    c++;
    ankit();

}
int main(){
    ankit();
    return 0;
}
