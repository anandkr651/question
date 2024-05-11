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
node *kreverse(node *head, int k)
{
    int size = 0;
    node *temp = head;
    while (temp) // important
    {
        size++;
        temp = temp->next;
    }
    if (size < k)
    {
        return head;
    }
    node *curr = head;
    node *prev = NULL;
    temp = NULL;
    int cnt = 0;
    while (curr != NULL && cnt < k)
    {
        temp = curr->next;
        curr->next = prev;
        prev = curr;
        curr = temp;
        cnt++;
    }
    if (temp != NULL)
    {
        head->next = kreverse(temp, k);
    }
    return prev;
}
int main()
{
    node *node1 = new node(10);
    node *head = node1;
    insertathead(head, 20);
    insertathead(head, 30);
    insertathead(head, 40);
    print(head);
    node *ptr = kreverse(head, 2);
    print(ptr);
}
/*40 30 20 10
30 40 10 20
PS C:\Users\DELL\OneDrive\Desktop\question\question>*/