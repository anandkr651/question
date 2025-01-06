#include<bits/stdc++.h>
using namespace std;

int solve(string a,string b,int i,int j,vector<vector<int>>&dp)
    {
        if(i==a.length())
        {
            return b.length()-j;
        }
        if(j==b.length())
        {
            return a.length()-i;
        }
        if(dp[i][j]!=-1)
        {
            return dp[i][j];
        }
        int ans=0;
        if(a[i]==b[j])
        {
            return solve(a,b,i+1,j+1,dp);
        }
        else{
            int insertto=1+solve(a,b,i,j+1,dp);
            int deleteto=1+solve(a,b,i+1,j,dp);
            int replaceto=1+solve(a,b,i+1,j+1,dp);
        ans=min(insertto,min(deleteto,replaceto));
        }
        return dp[i][j]=ans;
    }
    int minDistance(string word1, string word2) {
      vector<vector<int>>dp(word1.length(),vector<int>(word2.length(),-1));
        return solve(word1,word2,0,0,dp);
    }
int main(){
    string s1,s2;
    cout<<"Enter the first string: ";
    getline(cin,s1);
    cout<<"Enter the second string: ";
    getline(cin,s2);
    int ans = minDistance(s1,s2);
    cout<<" the minimum number of operations: "<<ans<<endl;
    return 0;
}
/*Enter the first string: horse
Enter the second string: ros
 the minimum number of operations: 3
PS D:\question\question>*/