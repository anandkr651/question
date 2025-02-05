#include <bits/stdc++.h>
using namespace std;
bool isAnagram(string s, string t)
{
    if(s.length()!=t.length()){
        return false;
    }
    unordered_map<char, int> ans1;
    for (auto x : s)
    {
        ans1[x]++;
    }
    for (auto x : t)
    {
        ans1[x]--;
    }
    for(auto x:ans1){
        if(x.second<0){
            return false;
        }
    }
    return true;
}
int main()
{
    string s, t;
    cout << "enter the first string ";
    getline(cin, s);
    cout << "enter the second string ";
    getline(cin, t);
    bool ans = isAnagram(s, t);
    if (ans == 1)
    {
        cout << "valid anagram";
    }
    else
    {
        cout << "not valid anagram";
    }
}
/*enter the first string rafa
enter the second string raja
not valid anagram
PS D:\question\tcs question>*/
/*enter the first string anans
enter the second string anans
valid anagram
PS D:\question\tcs question> */