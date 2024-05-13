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
    root = new node(data); // constructor call
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
void inorder(node *root, int &count)
{
    // base case
    if (root == NULL)
    {
        return;
    }
    inorder(root->left, count);
    if (root->left == NULL && root->right == NULL)
    {
        count++;
    }
    cout << root->data << " ";
    inorder(root->right, count);
}
int main()
{
    int count = 0;
    node *root = NULL;

    // ceating a tree
    root = buildtree(root);
    // 1 3 7 -1 -1 11 -1 -1 5 17 -1 -1 -1

    cout << "inorder traversal" << endl;
    inorder(root, count);
    cout << endl
         << "number of leaf node " << count << endl;
}
/*enter the data
1 3 7 -1 -1 11 -1 -1 5 17 -1 -1 -1
enter data for inserting in left 1
enter the data
enter data for inserting in left 3
enter the data
enter data for inserting in left 7
enter the data
enter data for inserting in right 7
enter the data
enter data for inserting in right 3
enter the data
enter data for inserting in left 11
enter the data
enter data for inserting in right 11
enter the data
enter data for inserting in right 1
enter the data
enter data for inserting in left 5
enter the data
enter data for inserting in left 17
enter the data
enter data for inserting in right 17
enter the data
enter data for inserting in right 5
enter the data
inorder traversal
7 3 11 1 17 5
number of leaf node 3
PS C:\Users\DELL\OneDrive\Desktop\question\question>*/