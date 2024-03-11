#include<iostream>
#include<stack>
using namespace std;
int main()
{
    string str="anand";
    stack<char> s;
    for(int i=0;i<str.length();i++)
    {
        char ch=str[i];
        s.push(ch);
    }
    string ans="";
    while(!s.empty())
    {
        char c=s.top();
        ans.push_back(c);
        s.pop();
    }
    cout<<"answer is "<<ans<<endl;
}
/*answer is dnana
PS C:\Users\DELL\OneDrive\Desktop\question\linked list>*/