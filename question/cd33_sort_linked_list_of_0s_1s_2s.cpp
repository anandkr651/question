//   ********************************by change the value

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
void sort(node* &head)
{
    node* temp=head;
    int cone=0;
    int czero=0;
    int ctwo=0;
    while(temp!=NULL)
    {
        if(temp->data==0)
        {
            czero++;
        }
        else if(temp->data==1)
        {
            cone++;
        }
        else{
            ctwo++;
        }
        temp=temp->next;
    }
    temp=head;
    while(temp!=NULL)
    {
        if(czero!=0)
        {
            temp->data=0;
            czero--;
        }
        else if(cone!=1)
        {
            temp->data=1;
            cone--;
        }
        else{
            temp->data=2;
            ctwo--;
        }
        temp=temp->next;
    }
}
int main()
{
      node* head=NULL;
      node* tail=NULL;

   insertathead(tail,head,0);
   insertathead(tail,head,1);
   insertathead(tail,head,0);
   insertathead(tail,head,2);
   insertathead(tail,head,1);
   insertathead(tail,head,0);
   insertathead(tail,head,2);
   insertathead(tail,head,1);
   insertathead(tail,head,2);
   insertathead(tail,head,0);
   print(head);
   sort(head);
   print(head);
}
/*0 2 1 2 0 1 2 0 1 0 
0 0 0 0 1 1 1 2 2 2 
PS C:\Users\DELL\OneDrive\Desktop\question\question>*/


//*************************by changing the link
#include<iostream>
#include<map>
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
void inserttail(node* &tail,node* temp)
{
    tail->next=temp;
    tail=temp;
}
void sort(node* &head)
{
    node* zerohead=new node(-1);
    node* zerotail=zerohead;
    node* onehead=new node(-1);
    node* onetail=onehead;
    node* twohead=new node(-1);
    node* twotail=twohead;
     
    node*temp=head;
    while(temp !=NULL)
    {
       if(temp->data==0)
       {
        inserttail(zerotail,temp);
       }
       else if(temp->data==1)
       {
        inserttail(onetail,temp);
       }
       else
       {
        inserttail(twotail,temp);
       }
       temp=temp->next;
    }
    if(onehead->next !=NULL)
    {
        zerotail->next=onehead->next;
    }
    else{
        zerotail->next=twohead->next;
    }
    onetail->next=twohead->next;
    twotail->next=NULL;

    head=zerohead->next;
    delete zerohead;
    delete onehead;
    delete twohead;
}
int main()
{
      node* head=NULL;
      node* tail=NULL;

   insertathead(tail,head,0);
   insertathead(tail,head,1);
   insertathead(tail,head,0);
   insertathead(tail,head,2);
   insertathead(tail,head,1);
   insertathead(tail,head,0);
   insertathead(tail,head,2);
   insertathead(tail,head,1);
   insertathead(tail,head,2);
   insertathead(tail,head,0);
   print(head);
   sort(head);
   print(head);
}
/*0 2 1 2 0 1 2 0 1 0 
0 0 0 0 1 1 1 2 2 2 
PS C:\Users\DELL\OneDrive\Desktop\question\question>*/