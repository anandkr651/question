//only space and symbol are ignore.
#include <iostream>
using namespace std;
#include<algorithm>
#include <ctype.h>

int character(char p)
{
    if (p >= 'A' && p <= 'Z')
    {
        return p = p + 32;
    }
    else
    {
        return p;
    }
}

int check(string s)
{
    int st = 0;
    int e = s.size() - 1;
    while (st < e)
    {
         if (!isalnum(s[st]) &&!isalpha(s[st]))
        {
            st++;
        }
        else if (!isalnum(s[e]) && !isalpha(s[e]))
        {
            e--;
        }
        else if (character(s[st]) != character(s[e]))
        {
            return 0;
        }
        else
        {
            st++;
            e--;
        }
    }
    return 1;
}
string remove(string s,string part)
{
    while(s.length() !=0 && s.find(part)<s.length())
    {
        s.erase(s.find(part),part.length());
    }
    return s;
}
int main()
{
    string ch,p;
    cout<<"enter the string";
    getline(cin,ch);
    string part=" ";
    p=remove(ch,part);
    int i=check(p);
    cout << i;
}
/*enter the string#1(a&)nana1
1
PS C:\Users\DELL\OneDrive\Desktop\dsa in c++\STL>*/

