#include<iostream>
#include<vector>
using namespace std;
class solution {
    void solve(vector<int>num,vector<int>output,int index,vector<vector<int>>&ans)
    {
        if(index>=num.size())
        {
            ans.push_back(output);
            return ;
        }
        solve(num,output,index+1,ans);
        int element=num[index];
        output.push_back(element);
        solve(num,output,index+1,ans);
    }
    public:
    vector<vector<int>> substring(vector<int> &num)
    {
        vector<vector<int>> ans;
        vector<int> output;
        int index=0;
        solve(num,output,index,ans);
        return ans;
    }
};
int main()
{
    vector<int> num;
    num.push_back(1);
    num.push_back(2);
    num.push_back(3);
    solution t;
  vector<vector<int>> arr=t.substring(num);
}