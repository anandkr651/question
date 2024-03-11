#include <iostream>
#include <queue>
using namespace std;
class node
{
public:
    int data;
    node *left;
    node *right;
    node(int d)
    {
        this->data = d;
        this->left = NULL;
        this->right = NULL;
    }
};
node *buildtree(node *root)
{
    cout << "enter the data " << endl;
    int data;
    cin >> data;
    root = new node(data);         //constructor call
    if (data == -1)
    {
        return NULL;
    }
    cout << "enter data for inserting in left " << data << endl;
    root->left = buildtree(root->left);
    cout << "enter data for inserting in right " << data << endl;
    root->right = buildtree(root->right);
    return root;
}
void levelorder(node *root)
{
    queue<node *> q;
    q.push(root);        //single node
    q.push(NULL);
    while (!q.empty())
    {
        node *temp = q.front();
        q.pop();
        if (temp == NULL)
        {
            cout << endl;
            if (!q.empty())
            {
                q.push(NULL);
            }
        }
        else
        {
            cout << temp->data << " ";
            if (temp->left)
            {
                q.push(temp->left);
            }
            if (temp->right)
            {
                q.push(temp->right);
            }
        }
    }
}
void inorder(node* root,int &count)
{
    //base case
    if(root==NULL)
    {
        return;
    }
    inorder(root->left,count);
    if(root->left==NULL&&root->right==NULL)
    {
        count++;
    }
    cout<<root->data<<" ";
    inorder(root->right,count);
}
void preorder(node* root)
{
    //base case
    if(root==NULL)
    {
        return;
    }
    cout<<root->data<<" ";
    preorder(root->left);
    preorder(root->right);
}
void postorder(node* root)
{
    //base case
    if(root==NULL)
    {
        return;
    }
    postorder(root->left);
    postorder(root->right);
    cout<<root->data<<" ";

}
void buildfromlevel(node* &root)
{
    queue<node*> q;
    cout<<"enter the data for root"<<endl;
    int data;
    cin>>data;
    root=new node(data);
    q.push(root);
    while(!q.empty())
    {
        node* temp=q.front();
        q.pop();

        cout<<"enter left node for "<<temp->data<<endl;
        int leftdata;
        cin>>leftdata;

        if(leftdata !=-1)
        {
            temp->left=new node(leftdata);
            q.push(temp->left);
        }

        cout<<"enter right node for "<<temp->data<<endl;
        int rightdata;
        cin>>rightdata;

        if(rightdata !=-1)
        {
            temp->right=new node(rightdata);
            q.push(temp->right);
        }
    }
}

int main()
{
    int count=0;
    node *root = NULL;

    // ceating a tree
    root = buildtree(root);
    // 1 3 7 -1 -1 11 -1 -1 5 17 -1 -1 -1

    // cout << "printing the level order traversal output " << endl;
    // levelorder(root);

    cout<<"inorder traversal"<<endl;
    inorder(root,count);
    cout<<endl<<"number of leaf node "<<count<<endl;

    // cout<<endl<<"preorder traversal"<<endl;
    // preorder(root);

    // cout<<endl<<"postorder traversal"<<endl;
    // postorder(root);

    // buildfromlevel(root);
    // //1 3 5 7 11 17 -1 -1 -1 -1 -1 -1 -1
    // levelorder(root);
}