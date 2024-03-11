#include <iostream>
using namespace std;
#include <vector>
#include<algorithm>

int main()
{
  vector<int> s;
  s.push_back(4);
  s.push_back(9);
  s.push_back(71);
  s.push_back(2);
  s.push_back(79);
  s.push_back(49);

  for (int i : s)
  {
    cout << i << " ";
  }
  cout << endl;
   
  reverse(s.begin(),s.end());
     for (int i : s)
  {
    cout << i << " ";
  }
  cout << endl;
}
/*4 9 71 2 79 49 
49 79 2 71 9 4 
PS C:\Users\DELL\OneDrive\Desktop\dsa in c++\STL>*/

//without algorithim header file
#include <iostream>
using namespace std;
#include <vector>

vector<int> reverse(vector<int> s)
{
  int start = 0;
  int end = s.size() - 1;
  while (start <= end)
  {
    swap(s[start], s[end]);
    start++;
    end;
  }
  return s;
}

void print(vector<int> s)
{
  for (int i = 0; i < s.size(); i++)
  {
    cout << s[i] << " ";
  }
  cout << endl;
}

int main()
{
  vector<int> s;
  s.push_back(4);
  s.push_back(9);
  s.push_back(71);
  s.push_back(2);
  s.push_back(79);
  s.push_back(49);

  for (int i : s)
  {
    cout << i << " ";
  }
  cout << endl;
   
  vector<int> ans = reverse(s);
  print(ans);
}
/*4 9 71 2 79 49 
49 4 9 71 2 79 
PS C:\Users\DELL\OneDrive\Desktop\dsa in c++\STL> */