#include <iostream>
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
node *solve(node *root, int &k, int nod)
{
    if (root == NULL)
    {
        return NULL;
    }
    if (root->data == nod)
    {
        return root;
    }
    node *leftans = solve(root->left, k, nod);
    node *rightans = solve(root->right, k, nod);

    if (leftans != NULL && rightans == NULL)
    {
        k--;
        if (k <= 0)
        {
            k = INT_MAX;
            return root;
        }
        return leftans;
    }
    if (leftans == NULL && rightans != NULL)
    {
        k--;
        if (k <= 0)
        {
            k = INT_MAX;
            return root;
        }
        return rightans;
    }
    return NULL;
}
int kancestor(node *root, int k, int nod)
{
    node *ans = solve(root, k, nod);
    if (ans == NULL || ans->data == nod)
    {
        return -1;
    }
    else
    {
        return ans->data;
    }
}
int main()
{
    node *root = NULL;
    root = buildtree(root);
    // 5 2 -1 -1 3 -1 -1
    int k = 1, nod = 3;
    cout << "boundary of the tree " << kancestor(root, k, nod) << endl;
}
/*5 2 -1 -1 3 -1 -1
boundary of the tree 5
PS C:\Users\DELL\OneDrive\Desktop\question\question>*/