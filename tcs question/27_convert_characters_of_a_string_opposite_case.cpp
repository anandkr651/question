#include<bits/stdc++.h>
using namespace std;
string changeUtoL(string s){
    string ans="";
    for(int i=0;i<s.length();i++){
       if(s[i]>=65 && s[i]<=90){
        ans+=s[i]+32;
       }else{
        ans+=s[i]-32;
       }
    }
    return ans;
}
int main(){
    string s;
    cout<<"enter the string ";
    getline(cin,s);
    string ans=changeUtoL(s);
    cout<<ans;
}
/*enter the string anAnD
ANaNd
PS D:\question\tcs question>*/