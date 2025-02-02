// important --> "string::npos" ----> As a return value, it is usually used to indicate no matches.

#include <bits/stdc++.h>
using namespace std;
vector<string> commonChars(vector<string> words)
{
    int n = words.size();
    sort(words.begin(), words.end()); // this line only sort the string by the first character but when we use this line the time complexity decrease from 4ms to 0ms.
    // for(auto x:words){
    //     cout<<x<<",";
    // }
    string first = words[0];
    vector<string> ans;
    for (int i = 0; i < first.size(); i++)
    {
        bool common = true;
        for (int j = 1; j < n; j++)
        {
            if (words[j].find(first[i]) == string::npos)
            {
                common = false;
                break;
            }
            else
            {
                words[j].erase(words[j].find(first[i]), 1);
            }
        }
        if (common)
        {
            ans.push_back(string(1, first[i]));
        }
    }
    return ans;
}
int main()
{
    int n;
    cout << "enter the size of vector ";
    cin >> n;
    vector<string> words(n);
    cout << "enter the string ";
    for (int i = 0; i < n; i++)
    {
        cin >> words[i];
    }
    // OR
    //  vector<string>words;
    //  words.push_back("bella");
    //  words.push_back("roller");
    //  words.push_back("label");

    vector<string> ans = commonChars(words);
    cout << "[ ";
    for (auto x : ans)
    {
        cout << "\"" << x << "\"" << ",";
    }
    cout << " ]";
}
/*enter the size of vector 3
enter the string cool
lock
cook
[ "c","o", ]
PS D:\question\tcs question>*/

// ############################ the uses of string::npos  #################################3

#include <iostream>
using namespace std;

int main()
{
    string str = "Hello, world!";
    // Returns std::string::npos because "abc" is not found.
    int position = str.find("abc");

    if (position == std::string::npos)
        cout << "Substring not found";
    else
        cout << position;
    return 0;
}
/*Substring not found
PS D:\question\tcs question>*/

#include <bits/stdc++.h>
using namespace std;

// Function that using string::npos
// to find the index of the occurrence
// of any string in the given string
void fun(string s1, string s2)
{
    // Find position of string s2
    int found = s1.find(s2);

    // Check if position is -1 or not
    if (found != string::npos)
    {
        cout << "first " << s2 << " found at: " << (found)<< endl;
    }else
        cout << s2 << " is not in"<< "the string" << endl;
}

int main()
{
    string s1 = "geeksforgeeks";
    string s2 = "for";
    fun(s1, s2);
    return 0;
}
/*first for found at: 5
PS D:\question\tcs question>*/