#include<iostream>
#include<vector>
using namespace std;
void solve(vector<string> &ans,string output,int index,string str)
{
    if(index>=str.size())
    {
        if(output.length()>0)
        {
            ans.push_back(output);
        }
        return ;
    }
    solve(ans,output,index+1,str);
    int element=str[index];
    output.push_back(element);
    solve(ans,output,index+1,str);
}
vector<string> subsequences(string str)
{
   string output="";
   vector<string>ans;
   int index=0;
   solve(ans,output,index,str);
   return ans;
}
int main()
{
    string str="abc";
   vector<string> arr= subsequences(str);
   for(string a:arr)
   {
    cout<<a<<" ";
   }
}
/*c b bc a ac ab abc 
PS C:\Users\DELL\OneDrive\Desktop\dsa in c++\question>*/