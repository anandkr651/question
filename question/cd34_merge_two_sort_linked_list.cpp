#include<iostream>
using namespace std;
class node{
    public:
    int data;
    node* next;

node(int d)
{
    this->data=d;
    this->next=NULL;
}
};
void insertathead(node* &head,int d)
{
    node* temp=new node(d);
    temp->next=head;
    head=temp;
}
void secondathead(node* &tail,int d)
{
    node* temp=new node(d);
    temp->next=tail;
    tail=temp;
}
void printrt(node *tail)
{
    if(tail==NULL)
    {
        cout<<"list is empty"<<endl;
    }
    node* temp=tail;
    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}
void print(node *head)
{
    if(head==NULL)
    {
        cout<<"list is empty"<<endl;
    }
    node* temp=head;
    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}
node* solve(node* first,node* second)
{
    if(first->next==NULL)
    {
        first->next=second;
        return first;
    }
    node* curr1=first;
    node* next1=curr1->next;
    node* curr2=second;
    node* next2=curr2->next;

    while(next1 !=NULL && curr2 !=NULL)
    {
        if((curr1->data<=curr2->data)&&(next1->data>=curr2->data))
        {
            curr1->next=curr2;
            next2=curr2->next;
            curr2->next=next1;
            curr1=curr2;
            curr2=next2;
        }
        else{
            curr1=next1;
            next1=next1->next;
            if(next1==NULL)
            {
                curr1->next=curr2;
                return first;
            }
        }
    }
    return first;
}
node* sortnode(node* first,node* second)
{
    if(first==NULL)
    return second;
    if(second==NULL)
     return first;
     if(first->data<second->data)
     return solve(first,second);
     else
     {
        return solve(second,first);
     }
}
int main()
{
 node* node1=new node(70);
 node *head=node1;
 insertathead(head,50);
 insertathead(head,30);
 insertathead(head,10);
 print(head);

 node* node2=new node(80);
 node *tail=node2;
 secondathead(tail,60);
 secondathead(tail,40);
 secondathead(tail,20);
 printrt(tail);

 node* ptr=sortnode(head,tail);
 print(ptr);
}
/*10 30 50 70 
20 40 60 80 
10 20 30 40 50 60 70 80 
PS C:\Users\DELL\OneDrive\Desktop\question\question> */