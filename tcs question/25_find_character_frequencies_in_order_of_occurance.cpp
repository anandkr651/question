#include <bits/stdc++.h>
using namespace std;
string countFrequency(string s)
{
    sort(s.begin(), s.end());
    int n = s.length();
    int j = 0;
    string ans;
    for (int i = 1; i < n; i++)
    {
        int count = 1;
        while (s[i - 1] == s[i])
        {
            count++;
            i++;
        }
        ans.push_back(s[i - 1]);
        ans += to_string(count);
    }
    return ans;
}
int main()
{
    string s;
    cout << "enter the string ";
    getline(cin, s);
    string ans = countFrequency(s);
    cout << ans;
}
/*enter the string anand
a2d1n2
PS D:\question\tcs question>*/