//in this code we tle because when a size of is large.three loop are used;

#include<bits/stdc++.h>
using namespace std;
int maximumProduct(vector<int>&nums){
    int maxi=INT_MIN;
    int n=nums.size();
    for(int i=0;i<n-2;i++){
        for(int j=i+1;j<n-1;j++){
            for(int k=j+1;k<n;k++){
              int ans=nums[i]*nums[j]*nums[k];
              maxi=max(maxi,ans);
            }
        }
    }
    return maxi;
}
int main(){
    int n;
    cout<<"enter the size of vector";
    cin>>n;
    vector<int>nums(n);
    cout<<"enter the number ";
    for(int i=0;i<n;i++){
        cin>>nums[i];
    }
    int ans=maximumProduct(nums);
    cout<<"maximum product of three number "<<ans;
}
/*enter the size of vector6
enter the number -100
-1
2
3
-98
4
maximum product of three number 39200
PS D:\question\tcs question>*/

#include<bits/stdc++.h>
using namespace std;
int maximumProduct(vector<int>&nums){
    int n=nums.size();
    sort(nums.begin(),nums.end());
    int product1=nums[0]*nums[1]*nums[n-1];  //two are minimum and one is maximum
    int product2=nums[n-3]*nums[n-2]*nums[n-1]; //all are maximum value
    return max(product1,product2);
}
int main(){
    int n;
    cout<<"enter the size of vector";
    cin>>n;
    vector<int>nums(n);
    cout<<"enter the number ";
    for(int i=0;i<n;i++){
        cin>>nums[i];
    }
    int ans=maximumProduct(nums);
    cout<<"maximum product of three number "<<ans;
}
/*enter the size of vector4
enter the number 1
2
3
4
maximum product of three number 24
PS D:\question\tcs question>*/