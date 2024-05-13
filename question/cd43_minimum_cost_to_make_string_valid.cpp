//*******************************  KUCH TO ERROR HAI first wala code mi ****************************************

#include <iostream>
using namespace std;
#include <stack>
int minicost(string s)
{
    if (s.length() % 2 == 1)
        return -1;

    stack<char> p;
    for (int i = 0; i < s.length(); i++)
    {
        char ch = s[i];
        if (ch == '{')
        {
            p.push(ch);
        }
        else
        {
            if (p.top() == '{' && !p.empty())
            {
                p.pop();
            }
            else
            {
                p.push(ch);
            }
        }
    }
    int a = 0, b = 0;
    while (!p.empty())
    {
        if (p.top() == '{')
        {
            a++;
        }
        else
        {
            b++;
        }
        p.pop();
    }
    int ans = (a + 1) / 2 + (b + 1) / 2;
    return ans;
}
int main()
{
    string s;
    cout << "enter the curly braces {}" << endl;
    cin >> s;
    cout << minicost(s);
}
/*enter the curly braces {}
{{}}}}{
-1
PS C:\Users\DELL\OneDrive\Desktop\question\question>*/
/*enter the curly braces {}
{{{{
2
PS C:\Users\DELL\OneDrive\Desktop\question\question>*/
/*enter the curly braces {}
}}}{{{
PS C:\Users\DELL\OneDrive\Desktop\question\question>*/

#include <iostream>
#include <stack>
using namespace std;

int minicost(string s)
{
    if (s.length() % 2 == 1)
        return -1;

    stack<char> p;
    int unbalanced = 0;

    for (int i = 0; i < s.length(); i++)
    {
        char ch = s[i];
        if (ch == '{')
        {
            p.push(ch);
        }
        else
        {
            if (!p.empty() && p.top() == '{')
            {
                p.pop();
            }
            else
            {
                unbalanced++;
            }
        }
    }
    // unbalanced += p.size();
    int cost = (unbalanced + 1) / 2 + (p.size() + 1) / 2;
    return cost;
}
int main()
{
    string s;
    cout << "Enter the curly braces {}" << endl;
    cin >> s;
    cout << minicost(s);
    return 0;
}
/*Enter the curly braces {}
{{}}}}{
-1
PS C:\Users\DELL\OneDrive\Desktop\question\question>*/
/*Enter the curly braces {}
{{{{
2
PS C:\Users\DELL\OneDrive\Desktop\question\question>*/
/*Enter the curly braces {}
}}}{{{
4
PS C:\Users\DELL\OneDrive\Desktop\question\question>*/
/*Enter the curly braces {}
}}}}}{
4
PS C:\Users\DELL\OneDrive\Desktop\question\question>*/