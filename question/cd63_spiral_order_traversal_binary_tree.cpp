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
vector<int> zigzagtraversal(node *&root)
{
    vector<int> result;
    if (root == NULL)
    {
        return result;
    }
    queue<node *> q;
    q.push(root);
    bool lefttoright = true;
    while (!q.empty())
    {
        int size = q.size();
        vector<int> ans(size);
        for (int i = 0; i < size; i++)
        {
            node *frontnode = q.front();
            q.pop();

            int index = lefttoright ? i : size - i - 1;
            ans[index] = frontnode->data;
            if (frontnode->left)
            {
                q.push(frontnode->left);
            }
            if (frontnode->right)
            {
                q.push(frontnode->right);
            }
        }
        lefttoright = !lefttoright;
        for (auto i : ans)
        {
            result.push_back(i);
        }
    }
    return result;
}
int main()
{
    node *root = NULL;
    root = buildtree(root);
    // 1 3 7 -1 -1 11 -1 -1 5 17 -1 -1 -1

    cout << "zigzag of the tree " << endl;
    vector<int> ptr = zigzagtraversal(root);
    for (int i : ptr)
    {
        cout << i << " ";
    }
    cout << endl;
}
/*1 3 7 -1 -1 11 -1 -1 5 17 -1 -1 -1
zigzag of the tree
1 5 3 7 11 17
PS C:\Users\DELL\OneDrive\Desktop\question\question>*/