#include<iostream>
using namespace std;
int findSum(int n){
    int sum=0;
    for(int i=1;i<=n;i++){
        sum += i;
    }
    return sum;
}
int main(){
    int n;
    cout<<"enter the number ";
    cin>>n;
    int ans=findSum(n);
    cout<<"sum of natural number "<<ans;
}
/*enter the number 3
sum of natural number 6      
PS D:\question\tcs question>*/