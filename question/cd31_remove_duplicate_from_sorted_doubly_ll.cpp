#include<iostream>
using namespace std;
class node{
    public:
    int data;
    node* prev;
    node* next;
    node(int d)
    {
        this->data=d;
        this->prev=NULL;
        this->next=NULL;
    }
};
void print(node* head)
{
    node* temp=head;
    while(temp !=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}
void insertathead(node* &tail,node* &head,int d)
{
    if(head==NULL)
    {
        node* temp=new node(d);
        head=temp;
        tail=temp;
    }
    else{
    node* temp=new node(d);
    temp->next=head;
    head->prev=temp;
    head=temp;
    }
}
void removedub(node* &head)
{
    if(head==NULL)
    {
        return ;
    }
    node*curr=head;
    while(curr!=NULL)
    {
        if(curr->next !=NULL&&curr->data==curr->next->data)
        {   
            node* loop=curr->next->next;
            node* deletedup= curr->next;
             delete(deletedup);
             curr->next=loop;
        }
        else{
            curr=curr->next;
        }
    }
}
int main()
{
      node* head=NULL;
      node* tail=NULL;

   insertathead(tail,head,91);
   insertathead(tail,head,81);
   insertathead(tail,head,71);
   insertathead(tail,head,61);
   insertathead(tail,head,41);
   insertathead(tail,head,41);
   print(head);
   removedub(head);
   print(head);
}
 /*41 41 61 71 81 91 
41 61 71 81 91 
PS C:\Users\DELL\OneDrive\Desktop\question\question>*/

