#include <iostream>
using namespace std;
class solution
{
  int count = 0;

public:
  int hammingweight(int s)
  {
    while (s != 0)
    {
      if (s & 1)
        count++;
      s = s >> 1;
    }
    return count;
  }
};
int main()
{
  int s;
  cout << "enter the number" << endl;
  cin >> s;
  solution t;
  cout << "count of 1s " << t.hammingweight(s);
}
/*enter the number
13
count of 1s 3
PS C:\Users\DELL\OneDrive\Desktop\question\question>*/