#include<bits/stdc++.h>
using namespace std;
string countAndSay(int n){
    string ans="1";
    for(int i=1;i<n;i++){
        string cur="";
        for(int j=0;j<ans.length();j++){
            int count=1;
            while(j+1<ans.length()&&ans[j]==ans[j+1]){
                count++;
                j++;
            }
            cur += to_string(count) + ans[j];
        }
        ans=cur;
    }
    return ans;
}
int main(){
    int n;
    cout<<"enter the number ";
    cin>>n;
    string ans = countAndSay(n);
    cout<<"countAndSay "<<ans;
}
/*enter the number 4
countAndSay 1211
PS D:\question\question>*/