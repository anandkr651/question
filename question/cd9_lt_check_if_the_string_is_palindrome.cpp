// only space and symbol are ignore.

/* isalpha()  -->  check if the given character is an alphabet or not
   isdigit()  -->  check if the passed character is a digit or not
   isalnum()  -->  check the input is either an alphabet or number*/
#include <iostream>
using namespace std;
#include <algorithm>
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
        //if (!isdigit(s[st]) && !isalpha(s[st]))   OR
        if(!isalnum(s[st]))
        {
            st++;
        }
        else if(!isalnum(s[e]))
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
string remove(string s, string part)
{
    while (s.length() != 0 && s.find(part) < s.length())
    {
        s.erase(s.find(part), part.length());
    }
    return s;
}
//we can used the find because we can remove the space(" " or "  ").
int main()
{
    string ch, p;
    cout << "enter the string ";
    getline(cin, ch);
    string part = " ";
    p = remove(ch, part);
    int i = check(p);
    cout << i;
}
/*enter the string #1(a&)nana1
1
PS C:\Users\DELL\OneDrive\Desktop\dsa in c++\STL>*/

/*enter the string race  e car
1
PS C:\Users\DELL\OneDrive\Desktop\question\question>*/