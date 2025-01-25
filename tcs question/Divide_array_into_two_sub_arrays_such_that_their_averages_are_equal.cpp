#include<bits/stdc++.h>
using namespace std;
vector<pair<int,int>>solve(int arr[],int n){
    vector<pair<int,int>>ans;
    int start=0,end=n-1,lsum=0;
    bool found=false;
    for(int i=0;i<n-1;i++){
        lsum += arr[i];
        int rsum=0;
        for(int j=i+1;j<n;j++){
            rsum +=arr[j];
        }
        if(lsum * (n-i-1)== rsum*(i+1)){
            ans.push_back({0,i});
            ans.push_back({i+1,n-1});
            found = true;
        }
    }
    if(found==false){
        ans.push_back({0,0});
    }
    return ans;
}
int main()
{
    int arr[] = {1,5,7,2,0};
    int n = sizeof(arr)/sizeof(arr[0]);
    vector<pair<int,int>> ans = solve(arr,n);
    for(auto i:ans){
        cout<<i.first<<","<<i.second<<endl;
    }
}
/*0,1
2,4
PS D:\question\tcs question>*/