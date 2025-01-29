#include<bits/stdc++.h>
using namespace std;
int hcf(int a,int b){
    if(a==0){
        return b;
    }else{
        hcf(b%a,a);
    }
}
int lcm(int arr[],int n){
    int ans=arr[0];
    for(int i=1;i<n;i++){
        ans=(arr[i]*ans)/hcf(arr[i],ans);
    }
    return ans;
}
int main(){
    int arr[]={3,4,6};
    int n= sizeof(arr)/sizeof(arr[0]);
    int ans = lcm(arr,n);
    cout<<"lcm of three number "<<ans;
}
/*lcm of three number 12       
PS D:\question\tcs question> */

#include<bits/stdc++.h>
using namespace std;
int hcf1(int a,int b){
    if(a==0){
        return b;
    }else{
        hcf1(b%a,a);
    }
}
int hcf(int arr[],int n){
    int ans=arr[0];
    for(int i=1;i<n;i++){
        ans=hcf1(arr[i],ans);
    }
    return ans;
}
int main(){
    int arr[]={8,4,6};
    int n= sizeof(arr)/sizeof(arr[0]);
    int ans = hcf(arr,n);
    cout<<"hcf of three number "<<ans;
}
/*hcf of three number 2        
PS D:\question\tcs question>*/