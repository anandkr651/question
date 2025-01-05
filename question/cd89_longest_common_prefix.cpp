#include<bits/stdc++.h>
using namespace std;
string longestCommonPrefix(vector<string>&str,int n){
    string output="";
    for(int i=0;i<str[0].size();i++){
        char ch=str[0][i];
        bool match=true;
        for(int j=1;j<n;j++){
            if(str[j].size()<i||ch!=str[j][i]){
                match=false;
                break;
            }
        }
        if(match==false){
            break;
        }else{
         output.push_back(ch);
        }
    }
    return output;
}
int main()
{
    int n;
    cout<<"enter the size of an array ";
    cin>>n;
    vector<string>str(n);
    cout<<"enter the string ";
    for(int i=0;i<n;i++){
        cin>>str[i];
    }
    string ans = longestCommonPrefix(str,n);  
    cout<<"prefix is "<<ans;
}
/*enter the size of an array 4
enter the string coding
codezen
codingninja
coders
prefix is cod
PS D:\question\question>*/