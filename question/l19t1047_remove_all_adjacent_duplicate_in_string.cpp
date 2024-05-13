#include <iostream>
using namespace std;
class solution
{
public:
    string removeduplicate(string s)
    {
        string ans;
        ans.push_back(s[0]);
        for (int i = 1; i < s.size(); i++)
        {
            if (!ans.empty() && ans.back() == s[i])
            {
                ans.pop_back();
            }
            else
            {
                ans.push_back(s[i]);
            }
        }
        return ans;
    }
};
int main()
{
    string s = "azxxzy";
    solution t;
    cout << t.removeduplicate(s);
}
/*ay
PS C:\Users\DELL\OneDrive\Desktop\dsa in c++\STL> */
