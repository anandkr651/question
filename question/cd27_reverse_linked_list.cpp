#include <iostream>
using namespace std;
class node
{
public:
    int data;
    node *next;

    node(int d)
    {
        this->data = d;
        this->next = NULL;
    }
};
void insertathead(node *&head, int d)
{
    node *temp = new node(d);
    temp->next = head;
    head = temp;
}
void print(node *head)
{
    if (head == NULL)
    {
        cout << "list is empty" << endl;
    }
    node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}
void reverse(node *&head)
{
    node *forward = NULL;
    node *prev = NULL;
    node *curr = head;
    if (head == 0 || head->next == head)
    {
        return;
    }
    while (curr != NULL)
    {
        forward = curr->next;
        curr->next = prev;
        prev = curr;
        curr = forward;
    }
    head = prev;
}
int main()
{
    node *node1 = new node(10);
    node *head = node1;
    insertathead(head, 20);
    insertathead(head, 30);
    insertathead(head, 40);
    print(head);
    cout << "reverse the node" << endl;
    reverse(head);
    print(head);
}
/*40 30 20 10
reverse the node
10 20 30 40
PS C:\Users\DELL\OneDrive\Desktop\question\question>*/

// we can reverse the doubly linked list
#include <iostream>
using namespace std;
class node
{
public:
    int data;
    node *next;
    node *prev;

    node(int d)
    {
        this->data = d;
        this->next = NULL;
        this->prev = NULL;
    }
};
void insertattail(node *&tail, int d)
{
    node *temp = new node(d);
    tail->next = temp;
    temp->prev = tail;
    tail = temp;
}
void print(node *head)
{
    if (head == NULL)
    {
        cout << "list is empty" << endl;
    }
    node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}
void reverse(node *&head)
{
    node *forward = NULL;
    node *temp = NULL;
    node *prev = NULL;
    node *curr = head;
    if (head == 0 || head->next == head)
    {
        return;
    }
    while (curr != NULL)
    {
        forward = curr->next;
        curr->next = curr->prev;
        curr->prev = forward;
        temp = curr;
        curr = forward;
    }
    head = temp;
}
int main()
{
    node *node1 = new node(10);
    node *head = node1;
    node *tail = node1;
    insertattail(tail, 20);
    insertattail(tail, 30);
    insertattail(tail, 40);
    print(head);
    cout << "reverse the node" << endl;
    reverse(head);
    print(head);
}
/*10 20 30 40
reverse the node
40 30 20 10
PS C:\Users\DELL\OneDrive\Desktop\question\question>*/