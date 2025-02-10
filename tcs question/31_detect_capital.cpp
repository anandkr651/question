#include <bits/stdc++.h>
using namespace std;
bool detectCapitalUse(string s)
{
    int capital = 0, small = 0;
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] >= 65 && s[i] <= 90)
        {
            capital++;
        }
        else
        {
            small++;
        }
    }
    bool counter;
    if (capital == s.length() || small == s.length())
    {
        counter = 1;
    }
    else if (s[0] >= 65 && s[0] <= 90)
    {
        if (small + 1 == s.length())
        {
            counter = 1;
        }
        else
        {
            counter = 0;
        }
    }
    else
    {
        counter = 0;
    }
    return counter;
}
int main()
{
    string s;
    cout << "enter the string ";
    getline(cin, s);
    bool ans = detectCapitalUse(s);
    cout << ans;
}
/*enter the string FlaG
0
PS D:\question\tcs question>*/
/*enter the string Flag
1
PS D:\question\tcs question>*/
/*enter the string anand
1
PS D:\question\tcs question>*/
/*enter the string USA
1
PS D:\question\tcs question>*/