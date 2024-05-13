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
node *headtree(node *root)
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
    root->left = headtree(root->left);
    // cout << "enter data for inserting in right " << data << endl;
    root->right = headtree(root->right);
    return root;
}
node *tailtree(node *root)
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
    root->left = tailtree(root->left);
    // cout << "enter data for inserting in right " << data << endl;
    root->right = tailtree(root->right);
    return root;
}
bool identical(node *root, node *leaf)
{
    if (root == NULL && leaf == NULL)
    {
        return true;
    }
    if (root == NULL && leaf != NULL)
    {
        return false;
    }
    if (root != NULL && leaf == NULL)
    {
        return false;
    }
    bool left = identical(root->left, leaf->left);
    bool right = identical(root->right, leaf->right);
    bool value = root->data == leaf->data;

    if (left && right && value)
    {
        return true;
    }
    return false;
}
int main()
{
    node *root = NULL;
    node *leaf = NULL;

    cout << "ceating the first tree" << endl;
    root = headtree(root);
    // 5 2 -1 -1 3 6 -1 -1 -1
    cout << "creating the second tree" << endl;
    leaf = tailtree(leaf);

    cout << "isidentical of the tree " << identical(root, leaf);
}
/*ceating the first tree
5 2 -1 -1 3 6 -1 -1 -1
creating the second tree
5 2 -1 -1 3 6 -1 -1 -1
isidentical of the tree 1
PS C:\Users\DELL\OneDrive\Desktop\question\question>*/

/*ceating the first tree
5 2 -1 -1 3 6 -1 -1 -1
creating the second tree
5 2 -1 -1 3 4 -1 -1 -1
isidentical of the tree 0
PS C:\Users\DELL\OneDrive\Desktop\question\question>*/