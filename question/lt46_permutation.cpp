#include<iostream>
#include<vector>
using namespace std;
class solution{
    private:
    void solve(vector<int> num,int index,vector<vector<int>>& ans)
    {
       if(index>=num.size())
        {
            ans.push_back(num);
            return;
        }
        for(int i=index;i<num.size();i++)
        {
            swap(num[index],num[i]);
            solve(num,index+1,ans);
            //backtracks
            swap(num[index],num[i]);
        }
    }
    public:
     vector<vector<int>> permute(vector<int>&num)
     {
        int index=0;
       vector<vector<int>>ans;
       solve(num,index,ans);
       return ans;
     }
    void display(vector<int>&res)
{
    for(int i=0;i<res.size();i++)
    {
        cout<<res[i]<<" ";
    }cout<<endl;
}
};
int main()
{
   vector<int>num;
num.push_back(1);
num.push_back(2);
num.push_back(3);
   solution t;
  vector<vector<int>> k=t.permute(num);

  for(int i=0;i<k.size();i++){
   for(int j=0;j<k[0].size();j++)
   {
    cout<<k[i][j]<<" ";
   }
   cout<<endl;
  }
}
/*1 2 3 
1 3 2 
2 1 3 
2 3 1 
3 2 1 
3 1 2
PS C:\Users\DELL\OneDrive\Desktop\question\question>*/