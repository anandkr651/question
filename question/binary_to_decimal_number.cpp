#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int i = 0, num, ans = 0;
    cout << "enter the number";
    cin >> num;
    while (num != 0)
    {
        int digit = num % 10;
        if (digit == 1)
        {
            ans = ans + pow(2, i);
        }
        num = num / 10;
        i++;
    }
    cout << ans;
}
/*enter the number111
7
PS C:\Users\DELL\OneDrive\Desktop\question\question>*/