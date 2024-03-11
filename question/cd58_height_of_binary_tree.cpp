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
    //cout << "enter the data " << endl;
    int data;
    cin >> data;
    root = new node(data);         //constructor call
    if (data == -1)
    {
        return NULL;
    }
   // cout << "enter data for inserting in left " << data << endl;
    root->left = buildtree(root->left);
    //cout << "enter data for inserting in right " << data << endl;
    root->right = buildtree(root->right);
    return root;
}
int heightofbinary(node *root)
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
int main()
{
    int count=0;
    node *root = NULL;

    // ceating a tree
    root = buildtree(root);
    // 1 3 7 -1 -1 11 -1 -1 5 17 -1 -1 -1

    cout<<"height of the tree "<<heightofbinary(root);
}
/*1 3 7 -1 -1 11 -1 -1 5 17 -1 -1 -1
height of the tree 3
PS C:\Users\DELL\OneDrive\Desktop\question\question>*/