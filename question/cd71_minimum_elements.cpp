#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int solve(vector<int>&x,int target)
{
    if(target==0)
    {
        return 0;
    }
    if(target<0)
    {
        return INT_MAX;
    }
    int mini=INT_MAX;
    for(int i=0;i<x.size();i++)
    {
        int ans=solve(x,target-x[i]);
        if(ans!=INT_MAX)
        {
            mini=min(mini,1+ans);
        }
    }
    return mini;
}
int main()
{
    int p,q;
    cout<<"enter the size of a vector ";
    cin>>p;
    vector<int>x(p);
    cout<<"enter the elements ";
    for(int i=0;i<p;i++)
    {
        cin>>x[i];
    }
    cout<<"enter the target sum ";
    cin>>q;
    cout<<"how many coin to spend to reach the target sum "<<q<<" is "<<solve(x,q);
}
/*enter the size of a vector 3
enter the elements 1
2
3
enter the target sum 7
how many coin to spend to reach the target sum 7 is 3
PS C:\Users\DELL\OneDrive\Desktop\question\question>*/


//top to down approach
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int solve(vector<int>&x,int target,vector<int>&dp)
{
    if(target==0)
    {
        return 0;
    }
    if(target<0)
    {
        return INT_MAX;
    }
    int mini=INT_MAX;
    if(dp[target] !=-1)
    {
        return dp[target];
    }
    for(int i=0;i<x.size();i++)
    {
        int ans=solve(x,target-x[i],dp);
        if(ans!=INT_MAX)
        {
            mini=min(mini,1+ans);
        }
    }
    dp[target]=mini;
    return dp[target];
}
int main()
{
    int p,q;
    cout<<"enter the size of a vector ";
    cin>>p;
    vector<int>x(p);
    cout<<"enter the elements ";
    for(int i=0;i<p;i++)
    {
        cin>>x[i];
    }
    cout<<"enter the target sum ";
    cin>>q;
    vector<int>dp(q+1,-1);
    cout<<"how many coin to spend to reach the target sum "<<q<<" is "<<solve(x,q,dp);
}
/*enter the size of a vector 3
enter the elements 1
2
3
enter the target sum 7
how many coin to spend to reach the target sum 7 is 3
PS C:\Users\DELL\OneDrive\Desktop\question\question>*/