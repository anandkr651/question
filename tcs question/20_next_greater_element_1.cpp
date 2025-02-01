#include<bits/stdc++.h>
using namespace std;
 vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        vector<int>ans;
        int n=nums1.size();
        int m=nums2.size();
        int x=-1;
        for(int i=0;i<n;i++){
            bool a=false;
            for(int j=m-1;j>=0;j--){
                if(nums1[i]<nums2[j]){
                    x=nums2[j];
                }
                if(nums1[i]==nums2[j]&&j+1!=m){
                    ans.push_back(x);
                    a=true;
                    x=-1;
                    break;
                }
            }
            if(a==false){
            ans.push_back(-1);
            x=-1;
            }
        }
        return ans;
    }
int main(){
    int n,m;
    cout<<"enter the size of first array ";
    cin>>n;
    vector<int>arr1(n);
    cout<<"enter the data ";
    for(int i=0;i<n;i++){
        cin>>arr1[i];
    }
    cout<<"enter the size of second array ";
    cin>>m;
    vector<int>arr2(m);
    cout<<"enter the data ";
    for(int i=0;i<m;i++){
        cin>>arr2[i];
    }
    vector<int> ans = nextGreaterElement(arr1,arr2);
    for(auto x:ans){
        cout<<x<<" ";
    }
}
/*enter the size of first array 5
enter the data 1
3
5
2
4
enter the size of second array 7
enter the data 6
5
4
3
2
1
7
7 7 7 7 7
PS D:\question\tcs question>*/
/*enter the size of first array 5
enter the data 1
3
5
2
7
enter the size of second array 7
enter the data 6
5
4
3
2
1
7
7 7 7 7 -1 
PS D:\question\tcs question>*/