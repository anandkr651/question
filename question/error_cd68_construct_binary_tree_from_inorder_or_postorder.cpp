#include <iostream>
#include <vector>
#include<queue>
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
   // cout << "enter the data " << endl;
    int data;
    cin >> data;
    root = new node(data);         //constructor call
    if (data == -1)
    {
        return NULL;
    }
   // cout << "enter data for inserting in left " << data << endl;
    root->left = buildtree(root->left);
   // cout << "enter data for inserting in right " << data << endl;
    root->right = buildtree(root->right);
    return root;
}
void inorder(node* root,vector<int>&inrder)
{
    //base case
    if(root==NULL)
    {
        return;
    }
    inorder(root->left,inrder);
    cout<<root->data<<" ";
    inrder.push_back(root->data);
    inorder(root->right,inrder);
}
void preorder(node* root,vector<int>&prerder)
{
    //base case
    if(root==NULL)
    {
        return;
    }
    //cout<<root->data<<" ";
    prerder.push_back(root->data);
    preorder(root->left,prerder);
    preorder(root->right,prerder);
}
int findelement(vector<int>inrder,int element,int p)
{
    for(int i=0;i<p;i++)
    {
        if(element==inrder[i])
        {
            return i;
        }
    }
    return -1;
}
node* solve(vector<int>&inrder,vector<int>&prerder,int index,int instart,int inend,int p)
{
    if((index>=p)||(instart>=inend))
    {
        return NULL;
    }
    int element=prerder[index++];
    node *temp=new node(element);
    int position=findelement(inrder,element,p);
    temp->left=solve(inrder,prerder,index,0,position-1,p);
    temp->right=solve(inrder,prerder,index,position+1,inend,p);
    return temp;
}

node *buildbinarytree(vector<int>&inrder,vector<int>&prerder)
{
    int p=inrder.size();
    int preorderindex=0;
    node* ans= solve(inrder,prerder,preorderindex,0,p-1,p);
    return ans;
}
void levelorder(node *root)
{
    queue<node *> q;
    q.push(root);        //single node
    // q.push(NULL);
    while (!q.empty())
    {
        node *temp = q.front();
        q.pop();
        // if (temp == NULL)
        // {
        //     cout << endl;
        //     if (!q.empty())
        //     {
        //         q.push(NULL);
        //     }
        // }
        // else
        // {
            cout << temp->data << " ";
            if (temp->left)
            {
                q.push(temp->left);
            }
            if (temp->right)
            {
                q.push(temp->right);
            }
        //}
    }
}
int main()
{
    node *root = NULL;
    // node *ptr=NULL;
    // ceating a tree
    root = buildtree(root);
    // 1 3 7 -1 -1 11 -1 -1 5 17 -1 -1 -1
    levelorder(root);

    vector<int>inrder;
    vector<int>prerder;
    vector<int>abc;
    
    cout<<"inorder traversal"<<endl;
    inorder(root,inrder);

    cout<<endl;
    cout<<"preorder traversal"<<endl;
    preorder(root,prerder);
    cout<<endl;

    node *ptr=buildbinarytree(inrder,prerder);
}