#include<bits/stdc++.h>
using namespace std;
vector<int>solve(vector<int>&arr){
    int n=arr.size(),gola_index=-1,swap_index=0;
    for(int i=n-1;i>0;i--){
        if(arr[i]>arr[i-1]){
            gola_index=i-1;
            break;
        }
    }
    if(gola_index!=-1){
        for(int i=n-1;i>gola_index;i--){
            if(arr[i]>arr[gola_index]){
                swap_index=i;
                break;
            }
        }
        swap(arr[swap_index],arr[gola_index]);
        reverse(arr.begin()+gola_index+1,arr.end());
    }else{
        reverse(arr.begin(),arr.end());
    }
    return arr;
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
    vector<int>ans = solve(arr);
    for(auto i:ans){
     cout<<i<<" ";   
    }
}
/*enter the size of an array 5
enter the data 3
6
5
3
2
5 2 3 3 6 
PS D:\question\question>*/