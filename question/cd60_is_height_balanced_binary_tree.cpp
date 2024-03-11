#include <iostream>
#include<cmath>
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
/*int heightofbinary(node *root)
{
    if(root==NULL)
    {
        return 0;
    }
    int left=heightofbinary(root->left);
    int right=heightofbinary(root->right);
    int ans=max(left,right)+1;
    return ans;
}
bool isbalance(node *root)
{
    if(root==NULL)
    {
        return true;
    }
    bool left=isbalance(root->left);
    bool right=isbalance(root->right);
    bool opt3=abs(heightofbinary(root->left)-heightofbinary(root->right))<=1;
    if(left &&right &&opt3)
    {
        return true;
    }
    return false;
}*/

pair<bool,int>balancefast(node *root)
{
    if(root==NULL)
    {
        pair<bool,int>p=make_pair(true,0);
        return p;
    }
    pair<int,int>left=balancefast(root->left);
    pair<int,int>right=balancefast(root->right);

    bool leftans=left.first;
    bool rightans=right.first;

    bool diff=abs(left.second-right.second)<=1;
     
    pair<bool,int>ans;
    ans.second=max(left.second,right.second)+1;

    if(leftans && rightans && diff)
    {
        ans.first=true;
    }
    else{
        ans.first=false;
    }
    return ans;
}
bool isbalance(node *root)
{
    return balancefast(root).first;
}
int main()
{
    node *root = NULL;

    // ceating a tree
    root = buildtree(root);
    //1 2 4 7 -1 -1 -1 5 -1 -1 3 -1 6 -1 -1

    cout<<"isbalance of the tree "<<isbalance(root);
}
/*1 2 4 7 -1 -1 -1 5 -1 -1 3 -1 6 -1 -1
isbalance of the tree 1
PS C:\Users\DELL\OneDrive\Desktop\question\question>*/
/*1 2 4 7 -1 -1 -1 5 -1 -1 3 -1 6 -1 -1
isbalance of the tree 1
PS C:\Users\DELL\OneDrive\Desktop\question\question>*/