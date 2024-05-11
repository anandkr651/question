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
node *findlen(node *head)
{
    node *slow = head;
    node *fast = head->next;
    while (fast != NULL && fast->next != NULL)
    {
        slow = slow->next;
        fast = fast->next->next;
    }
    return slow;
}
node *merge(node *left, node *right)
{
    if (left == NULL)
    {
        return right;
    }
    if (right == NULL)
    {
        return left;
    }
    node *ans = new node(-1);
    node *temp = ans;
    while (left != NULL && right != NULL)
    {
        if (left->data <= right->data)
        {
            temp->next = left;
            temp = left;
            left = left->next;
        }
        else
        {
            temp->next = right;
            temp = right;
            right = right->next;
        }
    }
    while (left != NULL)
    {
        temp->next = left;
        temp = left;
        left = left->next;
    }
    while (right != NULL)
    {
        temp->next = right;
        temp = right;
        right = right->next;
    }
    ans = ans->next;
    return ans;
}
node *sortll(node *head)
{
    if (head == NULL || head->next == NULL)
        return head;

    node *mid = findlen(head);
    node *left = head;
    node *right = mid->next;
    mid->next = NULL;
    left = sortll(left);
    right = sortll(right);
    node *result = merge(left, right);
    return result;
}
int main()
{
    node *node1 = new node(70);
    node *head = node1;
    insertathead(head, 50);
    insertathead(head, 30);
    insertathead(head, 10);
    insertathead(head, 60);
    insertathead(head, 20);
    insertathead(head, 40);
    print(head);
    node *ptr = sortll(head);
    print(ptr);
}
/*40 20 60 10 30 50 70
10 20 30 40 50 60 70
PS C:\Users\DELL\OneDrive\Desktop\question\question>*/