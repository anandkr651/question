#include <iostream>
#include <vector>
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
    // cout << "enter the data " << endl;
    int data;
    cin >> data;
    root = new node(data); // constructor call
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
node *lca(node *root, int n1, int n2)
{
    if (root == NULL)
    {
        return NULL;
    }
    if (root->data == n1 || root->data == n2)
    {
        return root;
    }
    node *leftans = lca(root->left, n1, n2);
    node *rightans = lca(root->right, n1, n2);

    if (leftans != NULL && rightans != NULL)
    {
        return root;
    }
    else if (leftans == NULL && rightans != NULL)
    {
        return rightans;
    }
    else if (leftans != NULL && rightans == NULL)
    {
        return leftans;
    }
    else
    {
        return NULL;
    }
}
int main()
{
    node *root = NULL;
    root = buildtree(root);
    // 5 2 3 7 -1 -1 11 -1 -1 5 17 -1 -1 -1 -1
    int n1 = 7, n2 = 17;
    cout << "boundary of the tree " << lca(root, n1, n2)->data << endl;
}
/*5 2 3 7 -1 -1 11 -1 -1 5 17 -1 -1 -1 -1
boundary of the tree 2
PS C:\Users\DELL\OneDrive\Desktop\question\question>*/