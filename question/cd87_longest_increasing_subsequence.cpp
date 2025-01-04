#include<bits/stdc++.h>
using namespace std;
#define N 10
//this code get TLE

int solve(int arr[],int n){
    vector<int>dp(n,1);
    for(int i=1;i<n;i++){
        for(int j=0;j<i;j++){
            if(arr[j]<arr[i]){
               dp[i]=max(dp[i],dp[j]+1);
            }
        }
    }
    return *max_element(dp.begin(),dp.end());
}

//OR
// this code i can not understand 
int solve(int arr[], int n) {
  if (n == 0) {
    return 0;
  }
  vector<int> ans;
  ans.push_back(arr[0]);
  for (int i = 1; i < n; i++) {
    if (arr[i] > ans.back())
      ans.push_back(arr[i]);
    else {
      int index = lower_bound(ans.begin(), ans.end(), arr[i]) - ans.begin();
      ans[index] = arr[i];
    }
  }
  return ans.size();
}
int main(){
    int n,arr[N];
    cout<<"enter the size of an array ";
    cin>>n;
    cout<<"enter the data ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int ans = solve(arr,n);
    cout<<"longestIncreasingSubsequence "<<ans;
}
/*enter the size of an array 8
enter the data 10
22
9
33
21
50
41
60
longestIncreasingSubsequence 5
PS D:\question\question>*/