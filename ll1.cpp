#include<bits/stdc++.h>
using namespace std;

class Node{
    public :

    int data;
    Node* next;

    Node(int data1)
    {
        data=data1;
        next=nullptr;
    }

};
void traverse(Node*head)
{
    Node*temp=head;
    while(temp!=nullptr)
    {
        cout<<temp->data<<" ";
        temp=temp->next;

    }
    cout<<endl;
}
int main()
{
    Node*first=new Node(2);
    Node*second=new Node(3);
    Node*third=new Node(5);

    first->next=second;
    second->next=third;

    Node*head=first;

    traverse(head);

    return 0;

}
