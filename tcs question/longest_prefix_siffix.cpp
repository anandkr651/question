#include<bits/stdc++.h>
using namespace std;
int longestPrefixSuffix(string &s) {
       int r=1; //suffix
       int p=0; //prefix
       int count=0;
       int pos=1;
       int n=s.size();
       while(p<n && r<n){
           if(s[p]==s[r]){
               p++;
               r++;
               count++;
           }else{
               count=0;
               pos++;
               r=pos;
            // r++; if we increase directly r then get problem in this case (aabaaab) 
               p=0;
           }
       }
       return count;
    }
int main(){
    string s="abababc";
    int n=longestPrefixSuffix(s);
    cout<<"answer is "<<n;
}