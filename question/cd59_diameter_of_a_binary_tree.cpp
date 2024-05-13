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
int diameterofbinary(node *root)
{
    if(root==NULL)
    {
        return 0;
    }
    int opt1=diameterodbinary(root->left);
    int opt2=diameterodbinary(root->right);
    int opt3=heightofbinary(root->left)+heightofbinary(root->right);
    int ans=max(opt1,max(opt2,opt3));
    return ans;
}*/
//                  OR
pair<int, int> diameterfast(node *root)
{
    if (root == NULL)
    {
        pair<int, int> p = make_pair(0, 0);
        return p;
    }
    pair<int, int> leftchild = diameterfast(root->left);
    pair<int, int> rightchild = diameterfast(root->right);

    int opt1 = leftchild.first;
    int opt2 = rightchild.first;
    int opt3 = leftchild.second + rightchild.second;

    pair<int, int> ans;
    ans.first = max(opt1, max(opt2, opt3));
    ans.second = max(leftchild.second, rightchild.second) + 1;
    return ans;
}
int diameterofbinary(node *root)
{
    return diameterfast(root).first;
}
int main()
{
    node *root = NULL;

    // ceating a tree
    root = buildtree(root);
    // 1 2 3 -1 -1 -1 4 5 6 7 -1 -1 -1 -1 8 -1 9 -1 -1

    cout << "diameter of the tree " << diameterofbinary(root);
}
/*enter the data
1
enter data for inserting in left 1
enter the data
2
enter data for inserting in left 2
enter the data
3
enter data for inserting in left 3
enter the data
-1
enter data for inserting in right 3
enter the data
-1
enter data for inserting in right 2
enter the data
-1
enter data for inserting in right 1
enter the data
4
enter data for inserting in left 4
enter the data
5
enter data for inserting in left 5
enter the data
6
enter data for inserting in left 6
enter the data
7
enter data for inserting in left 7
enter the data
-1
enter data for inserting in right 7
enter the data
-1
enter data for inserting in right 6
enter the data
-1
enter data for inserting in right 5
enter the data
-1
enter data for inserting in right 4
enter the data
8
enter data for inserting in left 8
enter the data
-1
enter data for inserting in right 8
enter the data
9
enter data for inserting in left 9
enter the data
-1
enter data for inserting in right 9
enter the data
-1
diameter of the tree 6
PS C:\Users\DELL\OneDrive\Desktop\question\question>*/

/*enter the data
1 2 3 -1 -1 -1 4 5 6 7 -1 -1 -1 -1 8 -1 9 -1 -1
enter data for inserting in left 1
enter the data
enter data for inserting in left 2
enter the data
enter data for inserting in left 3
enter the data
enter data for inserting in right 3
enter the data
enter data for inserting in right 2
enter the data
enter data for inserting in right 1
enter the data
enter data for inserting in left 4
enter the data
enter data for inserting in left 5
enter the data
enter data for inserting in left 6
enter the data
enter data for inserting in left 7
enter the data
enter data for inserting in right 7
enter the data
enter data for inserting in right 6
enter the data
enter data for inserting in right 5
enter the data
enter data for inserting in right 4
enter the data
enter data for inserting in left 8
enter the data
enter data for inserting in right 8
enter the data
enter data for inserting in left 9
enter the data
enter data for inserting in right 9
enter the data
diameter of the tree 6
PS C:\Users\DELL\OneDrive\Desktop\question\question>*/