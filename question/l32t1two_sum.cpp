#include<bits/stdc++.h>
using namespace std;
vector<int>solve(vector<int>&arr,int target){
    int n=arr.size();
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]+arr[j]==target){
                return {i,j};
            }
        }
    }
    return{};
}
int main(){
    int n,target;
    cout<<"enter the size of vector ";
    cin>>n;
    vector<int>arr(n);
    cout<<"enter the data ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"enter the target ";
    cin>>target;
    vector<int>ans =solve(arr,target);
    for(auto i:ans){
        cout<<i<<" ";
    }
}
/*enter the size of vector 4
enter the data 3
2
3
6
enter the target 6
0 2 
PS D:\question\question>*/