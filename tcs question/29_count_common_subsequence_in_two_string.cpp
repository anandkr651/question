#include<bits/stdc++.h>
using namespace std;
int countSequence(string s,string t){
    int n=s.length();
    int m=t.length();
    vector<vector<int>>dp(n+1,vector<int>(m+1,0));
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            if(s[i-1]==t[j-1]){
                dp[i][j]=1+dp[i-1][j]+dp[i][j-1];
            }else{
                dp[i][j]=dp[i-1][j]+dp[i][j-1]-dp[i-1][j-1];
            }
        }
    }
    return dp[n][m];
}
int main(){
    string s,t;
    cout<<"enter the first string ";
    getline(cin,s);
    cout<<"enter the second string ";
    getline(cin,t);
    int ans=countSequence(s,t);
    cout<<ans;
}
/*enter the first string abcd
enter the second string acbd
11
PS D:\question\tcs question>*/