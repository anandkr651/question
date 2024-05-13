#include <iostream>
using namespace std;
class solution
{
private:
  int sum = 0, pro = 1, digit, sub;

public:
  int subtract(int s)
  {
    while (s != 0)
    {
      int digit = s % 10;
      sum = sum + digit;
      pro = pro * digit;
      s = s / 10;
    }
    sub = pro - sum;
    return sub;
  }
};

int main()
{
  int s;
  cout << "enter the number " << endl;
  cin >> s;
  solution t;
  cout << t.subtract(s);
  return 0;
}
/*enter the number
234
15
PS C:\Users\DELL\OneDrive\Desktop\question\question>*/