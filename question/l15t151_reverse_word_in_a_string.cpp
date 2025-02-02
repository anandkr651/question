#include <iostream>
using namespace std;
class solution
{
public:
    string reverseword(string s)
    {
        int i = 0, x = s.length();
        string ans = "";
        while (i < x)
        {
            string temp = "";
            while (s[i] == ' ')
                i++;
            while (s[i] != ' ' && i < x)
            {
                temp = temp + s[i];
                i++;
            }
            if (temp.size() > 0)
            {
                if (ans.size() == 0)
                {
                    ans = temp;
                }
                else
                {
                    ans = temp + " " + ans;
                }
            }
        }
        s = ans;
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
the sky is blue
blue is sky the
PS C:\Users\DELL\OneDrive\Desktop\question\question>*/

#include<bits/stdc++.h>
using namespace std;
string reverseword(string s){
    stringstream ss1(s);
    string word;
    vector<string>ans;
    while(ss1>>word){
      ans.push_back(word);
      ans.push_back(" ");
    }
    ans.pop_back();
    string p;
    for(auto x:ans){
       p=x+p;
    }
    return p;
}
int main()
{
    string s;
    cout << "enter the string " << endl;
    getline(cin, s);
    cout <<reverseword(s);
}
/*enter the string 
the sky is blue
blue is sky the
PS D:\question\question>*/