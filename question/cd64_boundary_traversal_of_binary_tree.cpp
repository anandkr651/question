#include <iostream>
#include<vector>
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
void traversalleft(node *root,vector<int>&ans)
{
    if((root==NULL)||(root->left==NULL&&root->right==NULL))
    {
        return;
    }
    ans.push_back(root->data);
    if(root->left)
    {
        traversalleft(root->left,ans);
    }
    else{
        traversalleft(root->right,ans);
    }

}
void traversalleaf(node *root,vector<int>&ans)
{
    if(root==NULL)
    {
        return;
    }
    if(root->left==NULL&&root->right==NULL)
    {
        ans.push_back(root->data);
    }
    traversalleaf(root->left,ans);
    traversalleaf(root->right,ans);
}
void traversalright(node* root,vector<int>&ans)
{
    if((root==NULL)||(root->left==NULL&&root->right==NULL))
    {
        return;
    }
    if(root->right)
    {
        traversalleft(root->right,ans);
    }
    else{
        traversalleft(root->left,ans);
    }
    ans.push_back(root->data);
}
vector<int>boundary(node* root)
{
    vector<int>ans;
    if(root==NULL)
    {
        return ans;
    }
    ans.push_back(root->data);
    traversalleft(root->left,ans);
    traversalleaf(root->left,ans);
    traversalleaf(root->right,ans);
    traversalright(root->right,ans);
    return ans;
}
int main()
{
    node *root = NULL;
    root = buildtree(root);
    //1 3 7 -1 -1 11 -1 -1 5 17 -1 -1 -1

    cout<<"boundary of the tree "<<endl;
    vector<int>ptr=boundary(root);
    for(int i:ptr)
    {
        cout<<i<<" ";
    }
    cout<<endl;
}
/*1 3 7 -1 -1 11 -1 -1 5 17 -1 -1 -1
boundary of the tree 
1 3 7 11 17 5 
PS C:\Users\DELL\OneDrive\Desktop\question\question> */