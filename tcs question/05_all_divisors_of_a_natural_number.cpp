#include<bits/stdc++.h>
using namespace std;
vector<int>solve(int n){
    vector<int>ans;
    for(int i=1;i<=n;i++){
        if(n%i==0){
            ans.push_back(i);
        }
    }
    return ans;
}
int main(){
    int n;
    cout<<"enter the number ";
    cin>>n;
    vector<int>ans = solve(n);
    for(auto i:ans){
        cout<<i<<" ";
    }
}
/*enter the number 100
1 2 4 5 10 20 25 50 100      
PS D:\question\tcs question>*/