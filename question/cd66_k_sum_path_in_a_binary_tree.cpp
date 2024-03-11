// #include <iostream>
// #include<vector>
// using namespace std;
// class node
// {
// public:
//     int data;
//     node *left;
//     node *right;
//     node(int d)
//     {
//         this->data = d;
//         this->left = NULL;
//         this->right = NULL;
//     }
// };
// node *buildtree(node *root)
// {
//   // cout << "enter the data " << endl;
//     int data;
//     cin >> data;
//     root = new node(data);         //constructor call
//     if (data == -1)
//     {
//         return NULL;
//     }
//    // cout << "enter data for inserting in left " << data << endl;
//     root->left = buildtree(root->left);
//    // cout << "enter data for inserting in right " << data << endl;
//     root->right = buildtree(root->right);
//     return root;
// }
// void solve(node* root,vector<int>path,int &count,int k)
// {
//     if(root==NULL)
//     {
//         return ;
//     }
//     path.push_back(root->data);
//     solve(root->left,path,count,k);
//     solve(root->right,path,count,k);

//     int size=path.size();
//     int sum=0;
//     for(int i=size-1;i>=0;i--)
//     {
//         sum=sum+path[i];
//         if(sum==k)
//         {
//             count++;
//         }
//     }
//     path.pop_back();
// }
// int sumk(node* root,int k)
// {
//     vector<int>path;
//     int count=0;
//     solve(root,path,count,k);
//     return count;
// }
// int main()
// {
//     node *root = NULL;
//     root = buildtree(root);
//     //5 2 3 3 -1 -1 11 -1 -1 5 17 -1 -1 -1 -1
//     int k=5;
//     cout<<"boundary of the tree "<<sumk(root,k)<<endl;
// }
/*5 2 3 3 -1 -1 11 -1 -1 5 17 -1 -1 -1 -1
boundary of the tree 3
PS C:\Users\DELL\OneDrive\Desktop\question\question>*/

#include <iostream>
#include<vector>
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
void solve(node* root,vector<int>path,vector<vector<int>>&ans,int k)
{
    if(root==NULL)
    {
        return ;
    }
    path.push_back(root->data);
    if(root->left)
    solve(root->left,path,ans,k);
    if(root->right)
    solve(root->right,path,ans,k);

    int size=path.size();
    int sum=0;
    bool possible=false;
    for(int i=size-1;i>=0;i--)
    {
        sum=sum+path[i];
        if(sum==k)
        {
            possible=true;
            vector<int>dup(path.begin()+i,path.end());
            ans.push_back(dup);
        }
    }
    path.pop_back();
}
vector<vector<int>> sumk(node* root,int k)
{
    vector<int>path;
    vector<vector<int>>ans;
    solve(root,path,ans,k);
    return ans;
}
int main()
{
    node *root = NULL;
    root = buildtree(root);
    //5 2 3 3 -1 -1 11 -1 -1 5 17 -1 -1 -1 -1
    int k=5;
    vector<vector<int>> ptr=sumk(root,k);
    for(int i=0;i<ptr.size();i++)
    {
        for(int j=0;j<ptr[0].size();j++)
        {
            cout<<ptr[i][j]<<" ";
        }
        cout<<endl;
    }
}