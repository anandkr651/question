#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
class solution{
    void solve(vector<string>&ans,int index,string &str)
    {
       if(index>=str.size())
        {
            ans.push_back(str);
            return;
        }
        for(int i=index;i<str.size();i++)
        {
            swap(str[index],str[i]);
            solve(ans,index+1,str);
            //backtracks
            swap(str[index],str[i]);
        }
    }
    public:
    vector<string> subsequences(string &str)
{
//    string output="";
   vector<string>ans;
   int index=0;
   solve(ans,index,str);
   sort(ans.begin(),ans.end());
   return ans;
}
};
int main()
{
    string str="abc";
    solution t;
   vector<string> arr=t.subsequences(str);
   for(string a:arr)
   {
    cout<<a<<" ";
   }
}
/*abc acb bac bca cba cab 
PS C:\Users\DELL\OneDrive\Desktop\question\question>*/