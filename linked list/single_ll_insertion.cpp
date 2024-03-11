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
~node()
{
    int value=this->data;
    if(this->next!=NULL)
    {
        delete next;
        this->next=NULL;
    }
    cout<<"your data delete "<<value<<endl;
}
};
void insertathead(node* &head,int d)
{
    node* temp=new node(d);
    temp->next=head;
    head=temp;
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
void insertattail(node* &tail,int d)
{
    node* temp=new node(d);
    tail->next=temp;;
    tail=temp;
}
void inseratposition(node* &tail,node* &head,int position,int d)
{
   if(position==1)
   {
    insertathead(head,d);
    return;
   }
   node* temp=head;
   int count=1;
   while(count<position-1)
   {
    temp=temp->next;
    count++;
   }
   if(temp->next==NULL)
   {
    insertattail(tail,d);
    return;
   }
   node* startnode=new node(d);
   startnode->next=temp->next;
   temp->next=startnode;
}
void deletep(node* &head,int position)
{
    if(position==1)
    {
       node* temp=head;
       head=head->next;
       temp->next=NULL;
       delete temp;
    }
    else{
        node* curr=head;
        node* prev=NULL;
        int count=1;
        while(count < position)
        {
            prev=curr;
            curr=curr->next;
            count++;
        }
        prev->next=curr->next;
        curr->next=NULL;
        delete curr;
    }
}
void deletev(node* &head,int value)
{
   node *curr=head;
   node *prev=NULL;
   if(curr->data==value)
   {
    head=head->next;
    curr->next=NULL;
    delete curr;
   }
   else{
    while(curr->next!=NULL)
    {
       if(curr->data==value)
       {
        prev->next=curr->next;
        curr->next=NULL;
        delete curr;
       }
       else{
        prev=curr;
        curr=curr->next;
       }
    }
   }
}
int main()
{
 node* node1=new node(10);
 node *head=node1;
 insertathead(head,20);
 insertathead(head,30);
 insertathead(head,40);
 print(head);

 node*tail=node1;
 insertattail(tail,50);
 insertattail(tail,60);
 insertattail(tail,70);
 print(head);
cout<<"head"<<head->data<<endl;
cout<<"tail"<<tail->data<<endl;

 inseratposition(tail,head,3,88);
 inseratposition(tail,head,5,66);
 inseratposition(tail,head,10,77);
 print(head);

    deletep(head,3);
    deletep(head,1);
    print(head);

    deletev(head,66);
    print(head);

}
/*40 30 20 10 
40 30 20 10 50 60 70 
head40
tail70
40 30 88 20 66 10 50 60 70 77 
your data delete 88
your data delete 40
30 20 66 10 50 60 70 77
PS C:\Users\DELL\OneDrive\Desktop\question\linked list>*/