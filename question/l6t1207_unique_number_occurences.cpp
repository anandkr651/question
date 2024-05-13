// leetcode
// Q. 1207. unique number of occurrence

/* given an array of integer arr, return true if the number of occurences of each value in the array is unique or
false otherwise*/

/*Example   input [1,2,2,1,1,3]  output : 1 ---- 3
                                          2 ---- 2
                                          3 ---- 1*/

#include <iostream>
using namespace std;
#define N 10

int main()
{
  int x[N], i, j, p, t, count;
  cout << "enter the size of an array";
  cin >> p;
  cout << "enter the number";
  for (i = 0; i < p; i++)
  {
    cin >> x[i];
  }
  for (i = 0; i < p; i++)
  {
    for (j = 0; j < p - 1 - i; j++)
    {
      if (x[j] > x[j + 1])
      {
        t = x[j];
        x[j] = x[j + 1];
        x[j + 1] = t;
      }
    }
  }
  cout << "your sorted data\n";
  for (i = 0; i < p; i++)
  {
    count = 1;
    static int a = 0;
    while (x[i] == x[i + 1])
    {
      count++;
      i++;
    }
    if (a != count)
    {
      a = count;
      cout << x[i] << "number in this array is " << count << endl;
    }
  }
}
/*enter the size of an array5
enter the number1
1
2
2
3
your sorted data
1number in this array is 2
3number in this array is 1
PS C:\Users\DELL\OneDrive\Desktop\dsa in c++>*/

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

#include <iostream>
#include <vector>
#include <algorithm>
#include <set>
#include <unordered_map>
using namespace std;
class solution
{
public:
  bool unique(vector<int> &arr)
  {
    int n = arr.size();
    unordered_map<int, int> m;
    for (int i = 0; i < n; i++)
    {
      m[arr[i]]++;
    }
    set<int> s;
    for (auto a : m)
    {
      s.insert(a.second);
    }
    if (s.size() == m.size())
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