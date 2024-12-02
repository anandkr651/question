#include<bits/stdc++.h>
using namespace std;
void rotate(vector<int> &arr){
    int last=arr.size()-1;
        vector<int>ans;
        ans.push_back(arr[last]);
        for(int i=0;i<last;i++){
            ans.push_back(arr[i]);
        }
        arr=ans;
}
int main(){
    int n;
    cout<<"enter the size of an array ";
    cin>>n;
    vector<int> arr(n);
    cout<<"enter the element ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    rotate(arr);
    for(int i:arr){
        cout<<i<<" ";
    }
}