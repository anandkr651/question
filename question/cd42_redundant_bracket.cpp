#include<iostream>
using namespace std;
#include<stack>
bool findredundant(string &s)
{
   stack<char>p;
   for(int i=0;i<s.length();i++)
   {
    char ch=s[i];
    if(ch=='('||ch=='+'||ch=='-'||ch=='*'||ch=='/')
    {
        p.push(ch);
    }
    else{
        if(ch==')')
        {
            bool anand=true;
            while(p.top() !='(')
            {
                char tp=p.top();
                if(tp =='+'||tp =='-'||tp =='*'||tp=='/')
                anand=false;
                p.pop();
            }
            if(anand==true)
            return true;
            p.pop();
        }
    }
   }
   return false;
}
int main()
{
    string s;
    cout<<"enter the parentheses (),{},[]"<<endl;
    cin>>s;
    cout<<findredundant(s);
}
/*enter the parentheses (),{},[]
((a+b))
1
PS C:\Users\DELL\OneDrive\Desktop\question\question>*/
/*enter the parentheses (),{},[]
(a+b)+(a-b)
0
PS C:\Users\DELL\OneDrive\Desktop\question\question>*/