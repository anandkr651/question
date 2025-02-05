// A stringstream associates a string object with a stream allowing you to read from the string as if it were a stream (like cin).
#include <bits/stdc++.h>
using namespace std;
vector<string> uncommonFromSentences(string s1, string s2)
{
    stringstream ss1(s1), ss2(s2);
    string word1, word2;
    map<string, int> mp;
    while (ss1 >> word1)
    {
        mp[word1]++;
    }
    while (ss2 >> word2)
    {
        mp[word2]++;
    }
    ss2 << "anand";
    vector<string> ans;
    for (auto x : mp)
    {
        if (x.second == 1)
        {
            ans.push_back(x.first);
        }
    }
    return ans;
}
int main()
{
    string s1, s2;
    cout << "enter the first string ";
    getline(cin, s1);
    cout << "enter the second string ";
    getline(cin, s2);
    vector<string> ans = uncommonFromSentences(s1, s2);
    for (auto x : ans)
    {
        cout << x << " ";
    }
}
/*enter the first string this apple is sweet
enter the second string this apple is sour
sour sweet
PS D:\question\tcs question>*/
/*enter the first string apple apple
enter the second string banana
banana
PS D:\question\tcs question>*/

// C++ program to count words in
// a string using stringstream.
#include <iostream>
#include <sstream>
#include <string>
using namespace std;

int countWords(string str)
{
    // Breaking input into word
    // using string stream

    // Used for breaking words
    stringstream s(str);

    // To store individual words
    string word;

    int count = 0;
    while (s >> word)
        count++;
    return count;
}

// Driver code
int main()
{
    string s = "geeks for geeks geeks "
               "contribution placements";
    cout << " Number of words are: " << countWords(s);
    return 0;
}
/* Number of words are: 6
PS D:\question\tcs question>*/