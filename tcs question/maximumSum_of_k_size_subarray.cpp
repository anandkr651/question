#include<bits/stdc++.h>
using namespace std;
int solve(vector<int>arr,int k){
    int n=arr.size(),sum=0;
    for(int i=0;i<k;i++){
       sum +=arr[i];
    }
    int maxsum=sum;
    for(int i=0,j=k;i<n-k&&j<n;i++,j++){
        sum -=arr[i];
        sum +=arr[j];
        maxsum = max(maxsum,sum);
    }
    return maxsum;
}
int main(){
    int n,k;
    cout<<"enter the size of an array ";
    cin>>n;
    vector<int>arr(n);
    cout<<"enter the number ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"enter the window size ";
    cin>>k;
    int ans=solve(arr,k);
    cout<<"maximumSum of subarray "<<ans;
}
/*enter the size of an array 8
enter the number 1
3
-1
-3
5
3
6
7
enter the window size 3
maximumSum of subarray 16
PS D:\question\tcs question>*/