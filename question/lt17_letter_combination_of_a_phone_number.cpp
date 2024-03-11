#include<iostream>
using namespace std;
#include<vector>
class solution
{
    private:
    void solve(string digit,string output,int index,vector<string> &ans,string mapping[])
    {
       if(index>=digit.length())
       {
        ans.push_back(output);
        return;
       } 
       int number=digit[index]-'0';
       string value=mapping[number];
       for(int i=0;i<value.length();i++)
       {
        output.push_back(value[i]);
        solve(digit,output,index+1,ans,mapping);
        output.pop_back();
       }
    }
    public:
    vector<string> lettercombination(string digit)
    {
       string output="";
       int index=0;
       vector<string>ans;
       if(digit.length()==0)
       return ans;
       string mapping[10]={"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
       solve(digit,output,index,ans,mapping);
       return ans;
    }
   void display(vector<string>res)
{
    for(int i=0;i<res.size();i++)
    {
        cout<<res[i]<<" ";
    }cout<<endl;
}
};
int main()
{
    string digit;
    cout<<"enter the number ";
    cin>>digit;
    solution t;
    vector<string> k= t.lettercombination(digit);
    t.display(k);
}
/*enter the number 23
ad ae af bd be bf cd ce cf 
PS C:\Users\DELL\OneDrive\Desktop\dsa in c++\question>*/