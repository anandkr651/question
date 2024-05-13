#include <iostream>
#include <algorithm>
using namespace std;
class solution
{
public:
    string reverseword(string s)
    {
        for (int i = 0; i < s.length(); i++)
        {
            if (s[i] != ' ')
            {
                int j;
                for (j = i; j < s.length() && s[j] != ' '; j++)
                {
                }
                reverse(s.begin() + i, s.begin() + j);
                i = j - 1;
            }
        }
        return s;
    }
};
int main()
{
    string s;
    cout << "enter the string " << endl;
    getline(cin, s);
    solution t;
    cout << t.reverseword(s);
}
/*enter the string
my name is anand kumar
ym eman si dnana ramuk
PS C:\Users\DELL\OneDrive\Desktop\question\question>*/