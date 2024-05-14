#include<bits/stdc++.h>
using namespace std;
class node{
    public:
    int data;
    node *next;
    node(int data)
    {
        this->data=data;
        this->next=NULL;
    }
};
    void inserthead(node *&head,int d)
    {
        if(head==NULL)
        {
           node *temp=new node(d);
           head=temp;
           temp->next=temp;
        }
        else{
        node *temp=new node(d);
        temp->next=head->next;
        head->next=temp;
        head=temp;
        }
    }
    void print(node *&head)
    {
        if(head==NULL)
        {
            return;
        }
        node *temp=head->next;
        while(temp !=head)
        {
            cout<<temp->data<<" ";
            temp=temp->next;
        }
         cout<<temp->data<<" ";
         cout<<endl;
    }
bool circular(node *&head)
{
    if(head==NULL)
    {
        return true;
    }
    node*temp=head->next;
    while(temp!=head && temp!=NULL)
    {
        temp=temp->next;   
    }
    if(temp==head)
    {
        return true;
    }
    return false;
}
int main()
{
    // node *node1=new node(10);
    node *head=NULL;
    inserthead(head,20);
    inserthead(head,30);
    inserthead(head,40);
    inserthead(head,50);
    inserthead(head,60);
    print(head);
    cout<<"check whether the linked list is circular or not "<<circular(head);
}
/*20 30 40 50 60 
check whether the linked list is circular or not 1   
PS C:\Users\DELL\OneDrive\Desktop\question\question>*/