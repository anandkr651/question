#include <iostream>
using namespace std;
int main()
{
    string s = "my name is anand kumar";
    string temp = "";
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == ' ')
        {
            temp.push_back('@');
            temp.push_back('4');
            temp.push_back('0');
        }
        else
        {
            temp.push_back(s[i]);
        }
    }
    cout << temp;
}
/*my@40name@40is@40anand@40kumar
PS C:\Users\DELL\OneDrive\Desktop\dsa in c++\STL> */

#include <iostream>
using namespace std;
#include <algorithm>
int main()
{
    string s = "my name is anand kumar";
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == ' ')
        {
            s[i] = '@';
        }
    }
    cout << s;
}
/*my@name@is@anand@kumar
PS C:\Users\DELL\OneDrive\Desktop\dsa in c++\STL> */