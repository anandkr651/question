#include<iostream>
using namespace std;
#include<stack>
bool validparen(string s)
{
    stack<char>c;
    for(int i=0;i<s.length();i++)
    {
        char ch=s[i];
        if(ch=='('||ch=='{'||ch=='[')
        {
            c.push(ch);
        }
        else{
            if(!c.empty())
            {
                char s=c.top();
                if(ch==')'&&s=='('||ch=='}'&&s=='{'||ch==']'&&s=='[')
                c.pop();
                else{
                    return false;
                }
            }
            else{
                return false;
            }
        }
    }
    if(c.empty())
        return true;
}
int main()
{
    string s;
    cout<<"enter the parentheses (),{},[]"<<endl;
    cin>>s;
    cout<<validparen(s);
}
/*enter the parentheses (),{},[]
[()]{}{[()()]()}
1
PS C:\Users\DELL\OneDrive\Desktop\question\question>*/