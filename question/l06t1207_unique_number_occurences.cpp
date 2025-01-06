#include <bits/stdc++.h>
using namespace std;
#define N 10

int main()
{
  unordered_map<int, int> mp;
  set<int> s;
  int x[N], i, j, p, t, count;
  cout << "enter the size of an array";
  cin >> p;
  cout << "enter the number";
  for (i = 0; i < p; i++)
  {
    cin >> x[i];
  }
  for (int i = 0; i < p; i++)
  {
    mp[x[i]]++;
  }
  for (auto i : mp)
  {
    s.insert(i.second);
  }
  if (s.size() == mp.size())
  {
    cout << "unique number occurance ";
  }
  else
  {
    cout << "unique number not occurance ";
  }
}
/*enter the size of an array6
enter the number1
3
2
3
2
3
unique number occurance
PS D:\question\question>*/

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
class solution
{
public:
  bool unique(vector<int> &s)
  {
    sort(s.begin(), s.end());
    vector<int> ans;
    for (int i = 0; i < s.size(); i++)
    {
      int count = 1;
      while (s[i] == s[i + 1])
      {
        count++;
        i++;
      }
      ans.push_back(count);
    }
    sort(ans.begin(), ans.end());
    for (int i = 0; i < ans.size(); i++)
    {
      if (ans[i] == ans[i + 1])
        return 0;
    }
    return 1;
  }
};
int main()
{
  vector<int> s(10);
  for (int i = 0; i < s.size(); i++)
  {
    cin >> s[i];
  }
  solution t;
  cout << t.unique(s);
}
/*1
1
1
2
2
3
3
3
3
7

1
PS C:\Users\DELL\OneDrive\Desktop\question\question>*/

#include <iostream>
#include <vector>
#include <algorithm>
#include <set>
using namespace std;
class solution
{
public:
  bool unique(vector<int> &s)
  {
    sort(s.begin(), s.end());
    vector<int> ans;
    for (int i = 0; i < s.size(); i++)
    {
      int count = 1;
      while (s[i] == s[i + 1])
      {
        count++;
        i++;
      }
      ans.push_back(count);
    }
    set<int> p;
    for (auto a : ans)
    {
      p.insert(a);
    }
    if (ans.size() == p.size())
    {
      return 1;
    }
    return 0;
  }
};
int main()
{
  vector<int> s(10);
  for (int i = 0; i < s.size(); i++)
  {
    cin >> s[i];
  }
  solution t;
  cout << t.unique(s);
}
/*1 1 1 2 2 3 3 3 3 4
1
PS C:\Users\DELL\OneDrive\Desktop\question\question>*/
/*1 2 3 4 3 3 2 4 1 9
0
PS C:\Users\DELL\OneDrive\Desktop\question\question>*/