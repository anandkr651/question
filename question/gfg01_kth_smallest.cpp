#include<bits/stdc++.h>
using namespace std;
int kthSmallest(vector<int>&arr,int k,int n){
    priority_queue<int>ans;
    for(int i=0;i<k;i++){
        ans.push(arr[i]);
    }
    for(int i=k;i<n;i++){
        if(ans.top()>arr[i]){
            ans.pop();
            ans.push(arr[i]);
        }
    }
    return ans.top();
}
int main(){
    int k;
    vector<int>arr(5);
    cout<<"enter the data ";
    for(int i=0;i<5;i++){
        cin>>arr[i];
    }
    cout<<"enter the kth smallest element ";
    cin>>k;
    int ans=kthSmallest(arr,k,5);
    cout<<"the kth smallest element is "<<ans;
}
/*enter the data 7
10
4
3
20
enter the kth smallest element 3
the kth smallest element is 7
PS D:\question\question>*/