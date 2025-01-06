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
int longestPalindromeSubseq(string s1){
    string s2=s1;
    reverse(s2.begin(),s2.end());
    vector<vector<int>> dp(s1.length()+1,vector<int>(s2.length()+1,-1));
    return solve(s1,s2,0,0,dp);
}
int main(){
    string s1,s2;
    cout<<"Enter the first string: ";
    getline(cin,s1);
    int ans = longestPalindromeSubseq(s1);
    cout<<"The length of longest palindromic subsequence is: "<<ans<<endl;
    return 0;
}
/*Enter the first string: bbbab
The length of longest palindromic subsequence is: 4
PS D:\question\question>*/