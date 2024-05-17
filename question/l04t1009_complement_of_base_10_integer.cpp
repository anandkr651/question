#include <iostream>
#include <cmath>
using namespace std;
class solution
{
  int sum = 0, i = 0;

public:
  int complement(int n)
  {
    if (n == 0)
    {
      return 1;
    }
    while (n > 0)
    {
      if (n % 2 == 0)
      {
        sum = sum + 1 * pow(2, i);
        i++;
        n = n / 2;
      }
      else
      {
        i++;
        n = n / 2;
      }
    }
    return sum;
  }
};
int main()
{
  int n;
  cout << "enter the number";
  cin >> n;
  solution t;
  int p = t.complement(n);
  cout << p;
}
/*enter the number7
0
PS C:\Users\DELL\OneDrive\Desktop\question\question>*/
/*enter the number5
2
PS C:\Users\DELL\OneDrive\Desktop\question\question> */