#include<bits/stdc++.h>
using namespace std;
int majorityElement(vector<int>& nums) {
        int n= nums.size(),ans;
        map<int,int>mp;
        for(auto x:nums){
            mp[x]++;
        }
        for(auto x:mp){
            if(x.second>n/2){
                return x.first;
            }
        }
        return -1;
    }
int main(){
    int n;
    cout<<"enter the size of an array ";
    cin>>n;
    vector<int>arr(n);
    cout<<"enter the data ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int ans = majorityElement(arr);
    cout<<"maximum element is "<<ans;
}
/*enter the size of an array 7
enter the data 2
2
1
1
1
2
2
maximum element is 2
PS D:\question\tcs question>*/