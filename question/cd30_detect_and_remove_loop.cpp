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
node *floyddetectloop(node *head) // O(n)  time complexity
{
    if (head == NULL)
    {
        return NULL;
    }
    node *slow = head;
    node *fast = head;
    while (slow != NULL && fast != NULL)
    {
        fast = fast->next;
        if (fast != NULL)
        {
            fast = fast->next;
        }
        slow = slow->next;
        if (slow == fast)
        {
            cout << "present on which elements " << slow->data << endl;
            return slow;
        }
    }
    return NULL;
}
node *getstartingnode(node *head)
{
    if (head == NULL)
    {
        return NULL;
    }
    node *intersection = floyddetectloop(head);
    if (intersection == NULL)
        return NULL;
    node *slow = head;
    while (intersection != slow)
    {
        slow = slow->next;
        intersection = intersection->next;
    }
    return slow;
}

void removeloop(node *head) // or code studio mi node* removeloop(node* head)
{
    if (head == NULL)
    {
        return; // or code studio mi return NULL;
    }
    node *startofloop = getstartingnode(head);

    if (startofloop == NULL)
        return; // or code studio mi return head;

    node *temp = startofloop;
    while (temp->next != startofloop)
    {
        temp = temp->next;
    }
    temp->next = NULL;
    // or code studio mi return head
}
int main()
{
 node* node1=new node(10);
 node *head=node1;
 node *tail=node1;
 insertathead(head,20);
 insertathead(head,30);
 insertathead(head,40);
 tail->next=head->next;
 insertathead(head,50);
 insertathead(head,60);
 insertathead(head,70);
//  print(head);
if (floyddetectloop(head))
    {
        cout << "floyddetect the loop in linked list" << endl;
    }
    else
    {
        cout << "floyd there is no detected the loop " << endl;
    }
    node *loop = getstartingnode(head);
    cout << "loop starting " << loop->data << endl;

    //for removing the loop
    removeloop(head);
    print(head);
}
/*present on which elements 10
floyddetect the loop in linked list
present on which elements 10
loop starting 30
present on which elements 10
70 60 50 40 30 20 10 
PS C:\Users\DELL\OneDrive\Desktop\question\question> */