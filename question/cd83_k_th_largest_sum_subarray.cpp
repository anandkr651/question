#include<bits/stdc++.h>
using namespace std;
int solve(vector<int>&arr,int k){    //n2+logn
    int n=arr.size();
    vector<int>ans;
    for(int i=0;i<n;i++){
        int sum = 0;
        for(int j=i;j<n;j++){
             sum=sum+arr[j];
             ans.push_back(sum);
        }
    }
    sort(ans.begin(),ans.end());
    int result = ans[ans.size()-k];
    return result;
}
int main(){
    vector<int>arr(3);
    int k;
    cout<<"enter the data ";
    for(int i=0;i<3;i++){
        cin>>arr[i];
    }
    cout<<"enter the largest sum subarray ";
    cin>>k;
    int ans=solve(arr,k);
    cout<<"answer is "<<ans;
}
/*enter the data 3
-2
5
enter the largest sum subarray 3
answer is 3
PS D:\question\question>*/

#include<bits/stdc++.h>
using namespace std;
int solve(vector<int>&arr,int k){
    priority_queue<int,vector<int>,greater<int>>pq;
    int n=arr.size();
    for(int i=0;i<n;i++){
        int sum=0;
        for(int j=i;j<n;j++){
            sum=sum+arr[j];
            if(pq.size()<k){
                pq.push(sum);
            }else{
                if(sum>pq.top()){
                    pq.pop();
                    pq.push(sum);
                }
            }
        }
    }
    return pq.top();
}
int main(){
    vector<int>arr(5);
    int k;
    cout<<"enter the data ";
    for(int i=0;i<5;i++){
        cin>>arr[i];
    }
    cout<<"enter the largest sum subarray ";
    cin>>k;
    int ans=solve(arr,k);
    cout<<"answer is "<<ans;
}
/*enter the data 1
-2
3
-4
5
enter the largest sum subarray 2
answer is 4
PS D:\question\question>*/