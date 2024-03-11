#include<iostream>
#include<vector>
using namespace std;
void insert(vector<int> &ans,int s)
{
    int j,i;
    for(i=1;i<s;i++)
    {
        int temp=ans[i];
        for(j=i-1;j>=0 && ans[j]>temp;j--)
        {
              ans[j+1]=ans[j];
        }
        ans[j+1]=temp;
    }
}
int main()
{
    int p,s=6;
    vector<int> ans;
    cout<<"enter the number"<<endl;
    for(int i=0;i<s;i++)
    {
        cin>>p;
        ans.push_back(p);
    }
    insert(ans,s);
    for(int k:ans)
    {
        cout<<k<<" ";
    }
}
/*enter the number
5
4
10
1
6
2
1 2 4 5 6 10 
PS C:\Users\DELL\OneDrive\Desktop\dsa in c++\question>*/