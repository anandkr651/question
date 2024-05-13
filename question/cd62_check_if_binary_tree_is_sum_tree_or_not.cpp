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
pair<bool, int> sumfast(node *root)
{
    if (root == NULL)
    {
        pair<bool, int> p = make_pair(true, 0);
        return p;
    }
    if (root->left == NULL && root->right == NULL)
    {
        pair<bool, int> p = make_pair(true, root->data);
        return p;
    }
    pair<bool, int> leftans = sumfast(root->left);
    pair<bool, int> rightans = sumfast(root->right);

    bool left = leftans.first;
    bool right = rightans.first;

    bool value = root->data == leftans.second + rightans.second;
    pair<bool, int> ans;
    if (left && right && value)
    {
        ans.first = true;
        ans.second = root->data + leftans.second + rightans.second;
    }
    else
    {
        ans.first = false;
    }
    return ans;
}
bool issumtree(node *root)
{
    return sumfast(root).first;
}
int main()
{
    node *root = NULL;

    cout << "ceating the first tree" << endl;
    root = buildtree(root);
    // 3 1 -1 -1 2 -1 -1

    cout << "isidentical of the tree " << issumtree(root);
}
/*ceating the first tree
3 1 -1 -1 2 -1 -1
isidentical of the tree 1
PS C:\Users\DELL\OneDrive\Desktop\question\question>*/

/*ceating the first tree
3 1 -1 -1 1 -1 -1
isidentical of the tree 0
PS C:\Users\DELL\OneDrive\Desktop\question\question> */