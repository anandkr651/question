// #include<bits/stdc++.h>
// using namespace std;
// int kthSmallest(vector<int>&arr,int k,int n){
//     priority_queue<int>ans;
//     for(int i=0;i<k;i++){
//         ans.push(arr[i]);
//     }
//     for(int i=k;i<n;i++){
//         if(ans.top()>arr[i]){
//             ans.pop();
//             ans.push(arr[i]);
//         }
//     }
//     return ans.top();
// }
// int main(){
//     int k;
//     vector<int>arr(5);
//     cout<<"enter the data ";
//     for(int i=0;i<5;i++){
//         cin>>arr[i];
//     }
//     cout<<"enter the kth smallest element ";
//     cin>>k;
//     // int ans=kthSmallest(arr,k,5);
//     //OR
//     sort(arr.begin(),arr.end());
//     rotate(arr.begin(),arr.begin()+k,arr.end());
//     int ans=arr.at(arr.size()-1);
//     arr.pop_back();
//     cout<<"the kth smallest element is "<<ans;
// }
// /*enter the data 7
// 10
// 4
// 3
// 20
// enter the kth smallest element 3
// the kth smallest element is 7
// PS D:\question\question>*/

#include<bits/stdc++.h>
using namespace std;
int main(){
    int k;
    vector<int>ans(5);
    cout<<"enter the data ";
    for(int i=0;i<5;i++){
        cin>>ans[i];
    }
    cout<<"enter the kth smallest element ";
    cin>>k;
    int m;
    cout<<"enter the index where you want to rotate";
    cin>>m;
    cout<<"sorted data";
    sort(ans.begin(),ans.end());
     for(auto x:ans){
        cout<<x<<",";
    }cout<<endl;

    vector<int>arr=ans;
    rotate(arr.begin(),arr.begin()+k,arr.end());
    cout<<"rotate function ";
    for(auto x:arr){
        cout<<x<<",";
    }cout<<endl;

    cout<<"reverse function ";
    vector<int>rev=ans;
    reverse(rev.begin()+m,rev.end());
    for(auto x:rev){
        cout<<x<<",";
    }
}
/*enter the data 7
10
4
3
20
enter the kth smallest element 3
enter the index where you want to rotate3
sorted data3,4,7,10,20,
rotate function 10,20,3,4,7,
reverse function 3,4,7,20,10,
PS D:\question\question>*/