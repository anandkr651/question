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

    //destructor
    ~node(){
        int value=this->data;
        //memory free
        if(next != NULL)
        {
            delete next;
            next=NULL;
        }
        cout<<"memory is free for node with data"<<value<<endl; 
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
int getlength(node* head)
{
    int len=0;
    node* temp=head;
    while(temp !=NULL)
    {
        len++;
        temp=temp->next;
    }
    return len;
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

void insertatail(node* &tail,node* &head,int d)
{
        if(tail==NULL)
    {
        node* temp=new node(d);
        tail=temp;
        head=temp;
    }
    else{
    node* temp=new node(d);
    tail->next=temp;
    temp->prev=tail;
    tail=temp;
}
}

void inseratposition(node* & tail,node* &head,int position,int d)
{
    if(position==1)               
    {
        insertathead(tail,head,d);
        return;
    }
      node* temp=head;
      int cnt=1;
      while(cnt<position-1)
      {
        temp=temp->next;
        cnt++;
      }
      if(temp->next==NULL)
      {
        insertatail(tail,head,d);
        return;
      }
      node* nodetoinsert=new node(d);
      nodetoinsert->next=temp->next;
      temp->next->prev=nodetoinsert;
      temp->next=nodetoinsert;
      nodetoinsert->prev=temp;
}
void deletenode(int position,node* &head)
{
    if(position==1)
    {
        node* temp=head;
        temp->next->prev=NULL;
        head=temp->next;
        //memory free start node
        temp->next=NULL;
        delete temp;
    }
    else
    {
        //delete any middle node or last node
        node* curr=head;
        node* prev=NULL;
        node* tail;

        int cnt=1;
        while(cnt<position)
        {
            prev=curr;
            curr=curr->next;
            cnt++;
        }
        curr->prev=NULL;
        prev->next=curr->next;
        curr->next=NULL;
        delete curr;
    }
}
int main()
{
//    node* node1=new node(10);
//    node* head=node1;
//    node* tail=node1;

      node* head=NULL;
      node* tail=NULL;

   print(head);
   cout<<getlength(head)<<endl;

   insertathead(tail,head,11);
   print(head);

   insertathead(tail,head,15);
   print(head);

   insertathead(tail,head,91);
   print(head);

   cout<<getlength(head)<<endl;

   insertatail(tail,head,19);
   print(head);

   insertatail(tail,head,29);
   print(head);

   insertatail(tail,head,39);
   print(head);

   inseratposition(tail,head,2,10);
   print(head);

   inseratposition(tail,head,1,20);
   print(head);

   inseratposition(tail,head,9,30);
   print(head);

   cout<<"head"<<head->data<<endl;
   cout<<"tail"<<tail->data<<endl;

   deletenode(1,head);
   print(head);

   deletenode(5,head);
   print(head);

   deletenode(7,head);
   print(head);

   cout<<"head"<<head->data<<endl;
   cout<<"tail"<<tail->data<<endl;
}