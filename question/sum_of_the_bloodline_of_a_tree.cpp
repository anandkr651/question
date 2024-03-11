#include <iostream>
#include<vector>
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
void solve(node* root,int sum,int &maxsum,int len, int &maxlen)
{
    if(root==NULL)
    {
        if(len>maxlen)
        {
            maxlen=len;
            maxsum=sum;
        }
        else if(len==maxlen)
        {
            maxsum=max(sum,maxsum);
        }
        return;
    }
    sum=sum+root->data;
    solve(root->left,sum,maxsum,len+1,maxlen);
    solve(root->right,sum,maxsum,len+1,maxlen);
}
int sumoflength(node* root)
{
    int len=0;
    int maxlen=0;
    int sum=0;
    int maxsum=INT_MIN;

    solve(root,sum,maxsum,len,maxlen);
    return maxsum;
}
int main()
{
    node *root = NULL;
    root = buildtree(root);
    //1 3 7 -1 -1 11 -1 -1 5 17 -1 -1 -1

    cout<<"boundary of the tree "<<sumoflength(root)<<endl;
}
/*1 3 7 -1 -1 11 -1 -1 5 17 -1 -1 -1
boundary of the tree 23
PS C:\Users\DELL\OneDrive\Desktop\question\question>*/