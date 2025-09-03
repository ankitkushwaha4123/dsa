#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node*next;

    Node(int data1)
    {
        data=data1;
        next=nullptr;

    }

};
bool search(Node*head,int key)
{
    Node*temp=head;
    while(temp!=nullptr)
    {
        if(temp->data==key)
        {
            return true;
        }
        temp=temp->next;
    }
    return false ;
}
int main()
{

    Node*first=new Node(2);
    Node*second=new Node(4);
    Node*third=new Node(7);

    first->next=second;
    second->next=third;

    Node*head=first;

    int key;
    cout<<"enter the value to search ";

    cin>>key;

    if(search(head,key))
        cout<<"found"<<endl;
    else
        cout<<"not found"<<endl;

    return 0;


}