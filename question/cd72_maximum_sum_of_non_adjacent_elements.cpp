#include<iostream>
using namespace std;
#include<vector>
int solve(vector<int>&num,int n)
{
   if(n==0)
   {
    return num[0];
   }
   if(n<0)
   {
    return 0;
   }
   int inclu=solve(num,n-2)+num[n];
   int exclu=solve(num,n-1)+0;
   int ans=max(inclu,exclu);
   return ans;
}

//OR

int solve(vector<int>&num,int n){
    if(n>=num.size()){
       return 0;
    }
    int inclu=solve(num,n+2)+num[n];
    int exclu=solve(num,n+1)+0;
    int ans=max(inclu,exclu);
    return ans;
}
int main()
{
    int p;
    cout<<"enter the size of vector ";
    cin>>p;
    vector<int>num(p);
    cout<<"enter the number ";
    for(int i=0;i<p;i++)
    {
        cin>>num[i];
    }
    cout<<"sum of non adjacent elements "<<solve(num,p);
    //OR
    cout<<"sum of non adjacent elements "<<solve(num,0);
}
/*enter the size of vector 4
enter the number 9
9
8
2
sum of non adjacent elements 17
PS C:\Users\DELL\OneDrive\Desktop\question\question>*/

/*enter the size of vector 4
enter the number 3
2
7
10
sum of non adjacent elements 13
PS D:\question\question>*/

#include<iostream>
using namespace std;
#include<vector>
int solve(vector<int>&num,int n,vector<int>&dp)
{
   if(n>=num.size())
   {
    return 0;
   }
   if(dp[n]!=-1)
   {
    return dp[n];
   }
   int inclu=solve(num,n+2,dp)+num[n];
   int exclu=solve(num,n+1,dp)+0;
   return dp[n]=max(inclu,exclu);
}
int main()
{
    int p;
    cout<<"enter the size of vector ";
    cin>>p;
    vector<int>num(p);
    cout<<"enter the number ";
    for(int i=0;i<p;i++)
    {
        cin>>num[i];
    }
    vector<int>dp(p,-1);
    cout<<"sum of non adjacent elements "<<solve(num,0,dp);
}
/*enter the size of vector 4
enter the number 9
9
8
2
sum of non adjacent elements 17
PS C:\Users\DELL\OneDrive\Desktop\question\question>*/

#include <bits/stdc++.h>
using namespace std;
int solve(vector<int>&nums)
{
    int n=nums.size();
    int prev1=nums[0];
    int prev2=0;
    for(int i=1;i<n;i++)
    {
        int inclu=prev2+nums[i];
        int exclu=prev1+0;
        int ans=max(inclu,exclu);
        prev2=prev1;
        prev1=ans;
    }
    return prev1;
} 
int maximumNonAdjacentSum(vector<int> &nums){
    return solve(nums);
}
int main()
{
    int p;
    cout<<"enter the size of vector ";
    cin>>p;
    vector<int>num(p);
    cout<<"enter the number ";
    for(int i=0;i<p;i++)
    {
        cin>>num[i];
    }
    cout<<"sum of non adjacent elements "<<maximumNonAdjacentSum(num);
}
/*enter the size of vector 5
enter the number 1
2
3
5
4
sum of non adjacent elements 8
PS C:\Users\DELL\OneDrive\Desktop\question\question>*/