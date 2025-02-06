#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cout<<"enter the string in which vowel,consonant,digit,special character ";
    getline(cin,s);
    int vowel=0,consonant=0,special=0,digit=0;
    for(int i=0;i<s.length();i++){
        if(isalpha(s[i])){
            if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'||s[i]=='A'||s[i]=='E'||s[i]=='I'||s[i]=='O'||s[i]=='U'){
                vowel++;
            }else{
                consonant++;
            }
        }else if(isdigit(s[i])){
            digit++;
        }else{
            special++;
        }
    }
    cout<<"Vowel "<<vowel<<endl
    <<"Consonant "<<consonant<<endl
    <<"Digit "<<digit<<endl
    <<"Special character "<<special;
}
/*enter the string in which vowel,consonant,digit,special character geeks for geeks121
Vowel 5
Consonant 8
Digit 3
Special character 2
PS D:\question\tcs question>*/