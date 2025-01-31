#include<bits/stdc++.h>
using namespace std;
map<int,int> solve(vector<int>&arr){
    map<int,int>mp;
    for(int i=0;i<arr.size();i++){
       mp[arr[i]]++;
    }
    return mp;
}
int main(){
    int n;
    cout<<"enter the size of vector ";
    cin>>n;
    vector<int>arr(n);
    cout<<"enter the number ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    map<int,int> ans = solve(arr);
    cout<<"number of frequencies "<<endl;
    for(auto x:ans){
        cout<<x.first<<" "<<x.second<<endl;
    }
}
/*enter the size of vector 8
enter the number 10
20
20
10
10
20
5
20
number of frequencies
5 1
10 3
20 4
PS D:\question\tcs question>*/