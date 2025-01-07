#include<bits/stdc++.h>
using namespace std;
vector<string>solve(vector<string>&ans){
    int n=ans.size();
    vector<string>arr;
    for(int i=0;i<n;i++){
        if(ans[i].size()>4){
            arr.push_back(ans[i]);
        }
    }
    return arr;
}
int main(){
    int n;
    cout<<"enter the size of an array ";
    cin>>n;
    vector<string>ans(n);
    cout<<"enter the string ";
    for(int i=0;i<n;i++){
        cin>>ans[i];
    }
    vector<string>arr = solve(ans);
    cout<<"extract the word greater than 4 "<<endl;
    for(auto i:arr){
        cout<<i<<" ";
    }
}
/*enter the size of an array 5
enter the string tarun
pathak
anand
slab
kumar
extract the word greater than 4 
tarun pathak anand kumar 
PS D:\question\tcs question>*/