#include <iostream>
#include <vector>
using namespace std;
void reversearry(vector<int> &ans, int m)
{
  int start = m+1;
  int end = ans.size() - 1;
  while (start <= end)
  {
    swap(ans[start], ans[end]);
    {
      start++;
      end--;
    }
  }
}
int main()
{
  vector<int> ans;
  int p, m = 3; // HERE M IS THE INDEX NUMBER WHERE HAS BEEN NUMBER BEEN REVERSE.
  cout << "enter the number ";
  for (int i = 0; i < 10; i++)
  {
    cin >> p;
    ans.push_back(p);
  }
  reversearry(ans, m);
  for (int i : ans)
  {
    cout << i << " ";
  }
  cout << endl;
}
/*enter the number 1
2
3
4
5
6
7
8
9
10
1 2 3 4 10 9 8 7 6 5 
PS D:\question\question>*/