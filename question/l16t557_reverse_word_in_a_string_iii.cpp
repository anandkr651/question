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
                i = j;
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

//it take more run time and more space complexities than previous.
#include <bits/stdc++.h>
using namespace std;
string reverseword(string s)
{
    stringstream ss1(s);
    string word;
    vector<string>ans;
    while(ss1>>word){
        reverse(word.begin(),word.end());
        ans.push_back(word);
        ans.push_back(" ");
    }
    ans.pop_back();
    string p;
    for(auto x:ans){
        p=p+x;
    }
    return p;
}
int main()
{
    string s;
    cout << "enter the string " << endl;
    getline(cin, s);
    cout << reverseword(s);
}
/*enter the string 
i am study in patna.
i ma yduts ni .antap 
PS D:\question\question>*/