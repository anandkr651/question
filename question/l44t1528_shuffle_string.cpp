#include<bits/stdc++.h>
using namespace std;
string solve(string &s,vector<int>&num){
    int n=s.length();
    string ans(n,' ');
    for(int i=0;i<n;i++){
        int digit = num[i];
        char ch =s[i];
        ans[digit]=ch;
    }
    return ans;
}
int main(){
    string s;
    cout<<"enter your string ";
    getline(cin,s);
    int n=s.length();
    cout<<"enter the data"<<endl;
    vector<int>num(n);
    for(int i=0;i<n;i++){
        cin>>num[i];
    }
    string ans =solve(s,num);
    cout<<"shuffle the string "<<ans;
}
/*enter your string codeleet
enter the data
4
5
6
7
0
2
1
3
shuffle the string leetcode
PS D:\question\question>*/