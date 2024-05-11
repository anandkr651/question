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
int getlength(node *head)
{
    node *temp = head;
    int length = 0;
    while (temp != NULL)
    {
        length++;
        temp = temp->next;
    }
    return length;
}
node *findmiddle(node *head)
{
    int get = getlength(head);
    int ans = get / 2;
    int count = 0;   //because of question we can use the count = 0
    node *temp = head;
    while (count < ans)
    {
        temp = temp->next;
        count++;
    }
    return temp;
}
int main()
{
    node *node1 = new node(10);
    node *head = node1;
    insertathead(head, 20);
    insertathead(head, 30);
    insertathead(head, 40);
    insertathead(head, 50);
    print(head);

    node *ptr = findmiddle(head);
    cout << ptr->data;
}
/*40 30 20 10
20
PS C:\Users\DELL\OneDrive\Desktop\question\question>*/

/*50 40 30 20 10 
30
PS C:\Users\DELL\OneDrive\Desktop\question\question> */