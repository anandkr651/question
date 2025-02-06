#include<bits/stdc++.h>
using namespace std;
int countBinarySubstrings(string s){
    int counter=1;
    int answer=0;
    int pre=0;
    char ch=s[0];
    for(int i=1;i<s.length();i++){
        if(s[i]==ch){
            counter++;
        }else{
            if(counter>pre){
                answer+=pre;
            }else{
                answer+=counter;
            }
            pre=counter;
            ch=s[i];
            counter=1;
        }
    }
    if(counter>pre){
        answer+=pre;
    }else{
        answer+=counter;
    }
    return answer;
}
int main(){
    string s;
    cout<<"enter the binary string ";
    getline(cin,s);
    int ans = countBinarySubstrings(s);
    cout<<ans;
}
/*enter the binary string 00110011
6
PS D:\question\tcs question>*/