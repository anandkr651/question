#include<iostream>
#include<queue>
using namespace std;
class node{
    public:
    int data;
    node* left;
    node* right;
    node(int d)
    {
        this->data=d;
        this->left=NULL;
        this->right=NULL;
    }
};
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
node* inserttobst(node* root,int d)      //o(logn)
{ 
    //base case
    if(root==NULL)
    {
        root=new node(d);
        return root;
    }
    if(d>root->data)
    { 
        //right part mi insert karna hai
        root->right=inserttobst(root->right,d);
    }
    else{
        //left part mi insert karna hai
        root->left=inserttobst(root->left,d);
    }
    return root;
}
void takeinput(node* &root)
{
    int data;
    cin>>data;
    while(data!=-1)
    {
        root = inserttobst(root,data);
            cin>>data;
    }
}
node* minval(node* root)
{
    node* temp=root;
    while(temp->left !=NULL)
    {
        temp=temp->left;
    }
    return temp;
}
node* maxval(node* root)
{
    node* temp=root;
    while(temp->right !=NULL)
    {
        temp=temp->right;
    }
    return temp;
}
node* deletefrombst(node* root,int val)
{
    if(root==NULL)
    {
        return root;
    }
    if(root->data==val)
    {
        //0 child
        if(root->left==NULL&&root->right==NULL)
        {
            delete root;
            return NULL;
        }
        //1 child
        //left part
        if(root->left!=NULL&&root->right==NULL)
        {
            node*temp=root->left;
            delete root;
            return temp;
        }
        //right part
        if(root->left==NULL&&root->right!=NULL)
        {
            node*temp=root->right;
            delete root;
            return temp;
        }
        //2 child
        if(root->left!=NULL&&root->right!=NULL)
        {
            int mini=minval(root->right)->data;
            root->data=mini;
            root->right=deletefrombst(root->right,mini);
            return root;
        }
    }
    else if(root->data>val)
    {
        //left part me jao
        root->left=deletefrombst(root->left,val);
        return root;
    }
    else{
        //right part mi jao
        root->right=deletefrombst(root->right,val);
        return root;
    }
}
int main()
{
    node* root=NULL;
    //10 8 21 7 27 5 4 3 -1
    cout<<"enter the data to create bst"<<endl;
    takeinput(root);
    cout<<"printing by level order traversal"<<endl;
    levelorder(root);

    cout<<"printing by inorder traversal"<<endl;
    int count=0;
    inorder(root,count);
    cout<<"\ncount the number of leaf node in a bst "<<count<<endl;

    cout<<"printing by preorder traversal"<<endl;
    preorder(root);

    cout<<"\nprinting by postorder traversal"<<endl;
    postorder(root);

    cout<<"\nminimun value in the bst "<<minval(root)->data<<endl;
    cout<<"maximun value in the bst "<<maxval(root)->data<<endl; 

    cout<<"delete from bst"<<endl;
    deletefrombst(root,8);
    levelorder(root);
}
/*  181 | }
      | ^
enter the data to create bst
10 8 21 7 27 5 4 3 -1
printing by level order traversal
10
8 21
7 27
5
4
3
printing by inorder traversal
3 4 5 7 8 10 21 27 
count the number of leaf node in a bst 2
printing by preorder traversal
10 8 7 5 4 3 21 27
printing by postorder traversal
3 4 5 7 8 27 21 10
minimun value in the bst 3
maximun value in the bst 27
delete from bst
10
7 21
5 27
4 
3
PS C:\Users\DELL\OneDrive\Desktop\question\tree>*/