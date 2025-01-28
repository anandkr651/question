#include<iostream>
using namespace std;
int solve(int n){
    if(n<0){
        return 0;
    }if(n==0){
        return 1;
    }
    return solve(n-1)+solve(n-2);
}
int main(){
    int n;
    cout<<"enter the number ";
    cin>>n;
    int ans = solve(n);
    cout<<"climbing stair "<<ans;
}
/*enter the number 3
climbing stair 3
PS D:\question\tcs question>*/

#include<bits/stdc++.h>
using namespace std;
int solve(int n,vector<int>&dp){
    if(n<0){
        return 0;
    }if(n==0){
        return 1;
    }
    if(dp[n]!=-1){
        return dp[n];
    }
    dp[n] = solve(n-1,dp)+solve(n-2,dp);
    return dp[n];
}
int main(){
    int n;
    cout<<"enter the number ";
    cin>>n;
    vector<int>dp(n+1,-1);
    int ans = solve(n,dp);
    cout<<"climbing stair "<<ans;
}
/*enter the number 45
climbing stair 1836311903
PS D:\question\tcs question>*/