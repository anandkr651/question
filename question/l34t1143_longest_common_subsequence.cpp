#include<bits/stdc++.h>
using namespace std;
int solve(string a,string b,int i,int j,vector<vector<int>>& dp){
    if(i==a.length())
        {
            return 0;
        }
        if(j==b.length())
        {
            return 0;
        }
        if(dp[i][j]!=-1)
        {
            return dp[i][j];
        }
        int inc=0,exc=0;
        if(a[i]==b[j])
        {
            inc=1+solve(a,b,i+1,j+1,dp);
        }
        else{
            exc=max(solve(a,b,i,j+1,dp),solve(a,b,i+1,j,dp));
        }
        return dp[i][j]=max(inc,exc);
}
int longestCommonSubsequence(string s1,string s2){
    vector<vector<int>> dp(s1.length()+1,vector<int>(s2.length()+1,-1));
    return solve(s1,s2,0,0,dp);
}
int main(){
    string s1,s2;
    cout<<"Enter the first string: ";
    getline(cin,s1);
    cout<<"Enter the second string: ";
    getline(cin,s2);
    int ans = longestCommonSubsequence(s1,s2);
    cout<<"The length of longest common subsequence is: "<<ans<<endl;
    return 0;
}
/*Enter the first string: abcde
Enter the second string: ace
The length of longest common subsequence is: 3
PS D:\question\question>*/