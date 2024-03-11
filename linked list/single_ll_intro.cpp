#include <iostream>
#include <map>
using namespace std;
class node
{
public:
    int data;
    node *next;

    // constructor
    node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
    //destructor
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

void insertathead(node *&head, int d)
{
    // new node create
    node *temp = new node(d);
    temp->next = head;
    head = temp;
}

void insertattail(node *&tail, int d)
{
    // new node create
    node *temp = new node(d);
    tail->next = temp;
    tail = temp;
}
void print(node *&head)
{
    if (head == NULL) // if head equal to null than it is circular ll.
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

void inseratposition(node *&tail, node *&head, int position, int d)
{
    if (position == 1) // line 88
    {
        insertathead(head, d);
        return;
    }
    node *temp = head;
    int cnt = 1;
    while (cnt < position - 1)
    {
        temp = temp->next;
        cnt++;
    }
    if (temp->next == NULL)
    {
        insertattail(tail, d);
        return;
    }
    node *nodetoinsert = new node(d);
    nodetoinsert->next = temp->next;
    temp->next = nodetoinsert;
}
void deletenode(int position, node *&head)
{
    if (position == 1)
    {
        node *temp = head;
        head = head->next;
        // memory free start node
        temp->next = NULL;
        delete temp;
    }
    else
    {
        // delete any middle node or last node
        node *curr = head;
        node *prev = NULL;
        node *tail;

        int cnt = 1;
        while (cnt < position)
        {
            prev = curr;
            curr = curr->next;
            cnt++;
        }
        prev->next = curr->next;
        curr->next = NULL;
        delete curr;
    }
}

bool iscircular(node *head)
{
    if (head == NULL)
    {
        return true;
    }
    node *temp = head->next;
    while (temp != NULL && temp != head)
    {
        temp = temp->next;
    }
    if (temp == head)
    {
        return true;
    }
    return false;
}

bool detectloop(node *head) // O(n)  time complexity
{
    if (head == NULL)
    {
        return false;
    }
    map<node *, bool> visited;
    node *temp = head;
    while (temp != NULL)
    {
        if (visited[temp] == true)
        {
            cout << "present on which elements " << temp->data << endl;
            return true;
        }
        visited[temp] = true;
        temp = temp->next;
    }
    return false;
}

// floyd's cycle detection algorithm
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

void removedub(node* head)
{
    if(head==NULL)
    {
        return ;
    }
    node*curr=head;
    while(curr!=NULL)
    {
        if((curr->next !=NULL)&&(curr->data==curr->next->data))
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
    // create a new node
    node *node1 = new node(10);
    // cout << node1->data << endl;
    // cout << node1->next << endl;

    // head pointed to node1
    node *head = node1;
    node *tail = node1;
    print(head);

    insertathead(head, 20);
    print(head);

    insertathead(head, 30);
    print(head);

    insertathead(head, 50);
    print(head);

    insertathead(head, 40);
    print(head);

    // tail pointed to node1
    cout << "hello" << endl;
    print(head);

    insertattail(tail, 60);
    print(head);

    /*  for detect the circular loop in ll
    tail->next=head->next;
    //   print(head);    //when we can write this line then infinite loop is present
    if(detectloop(head))
    {
        cout<<"detect the loop in linked list"<<endl;
    }
    else{
        cout<<"there is no detected the loop "<<endl;
    }*/

    /*  for detect the circular loop in ll by floyddetect algorithm
    tail->next = head->next;
    if (floyddetectloop(head))
    {
        cout << "floyddetect the loop in linked list" << endl;
    }
    else
    {
        cout << "floyd there is no detected the loop " << endl;
    }*/

    /*for search begining of the circular loop in ll by floyddetect algorithm
    node *loop = getstartingnode(head);
    cout << "loop starting " << loop->data << endl;

    //for removing the loop
    removeloop(head);
    print(head);
    */

    //    insertattail(tail,70);
    //    print(head);

       inseratposition(tail,head,3,40);
       print(head);

    //    inseratposition(tail,head,1,10);       //  line 41 to 45
    //    print(head);

    //    inseratposition(tail,head,8,80);       //  line 41 to 45
    //    print(head);

    //     insertattail(tail,80);
    //    print(head);

    // cout << "head" << head->data << endl;
    // cout << "tail" << tail->data << endl;

       deletenode(3,head);
       print(head);

    //    deletenode(1,head);
    //    print(head);

    //    deletenode(6,head);
    //    print(head);

    //    cout<<"head"<<head->data<<endl;
    //    cout<<"tail"<<tail->data<<endl;

    /*for linked list is circular or not
    if (iscircular(tail))
    {
        cout << "linked list is circular " << endl;
    }
    else
    {
        cout << "linked list is not circular " << endl;
    }*/

}

/*  #############################  NOTE  ###################################*/
/*REMOVE LINKED LIST
1. floyds algo
2.map
3.distance comparision
*/