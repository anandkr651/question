#include<bits/stdc++.h>
using namespace std;
int substring(string s,string t){
    int n=s.find(t);
    return n;
}
int main(){
    string s,t;
    cout<<"enter the string ";
    getline(cin,s);
    cout<<"enter the subString ";
    getline(cin,t);
    int ans= substring(s,t);
    if(ans==0){
        cout<<"-1";
    }else{
        cout<<ans;
    }
}
/*enter the string geeksforgeeks
enter the subString xyz
-1
PS D:\question\tcs question>*/
/*enter the string geeksforgeeks
enter the subString eks
2
PS D:\question\tcs question> */