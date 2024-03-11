#include<iostream>
using namespace std;
bool palindrome(string s,int q,int p)
{
    while(q<p)
    {
        if(s[q]==s[p])
        {
            q++;
            p--;
        }
        else{
            return 0;
        }
    }
    return 1;
}
int main()
{
    string s;
    cout<<"enter the string"<<endl;
    cin>>s;
    int q=0;
    int p=s.length();
    cout<<palindrome(s,q,p-1)<<endl;
}
/*enter the string
racecar
1
PS C:\Users\DELL\OneDrive\Desktop\question\question>*/