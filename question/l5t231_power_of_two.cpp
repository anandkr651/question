#include <iostream>
#include <cmath>
using namespace std;
class solution
{
    int sum = 0;

public:
    bool power(int n)
    {
        for (int i = 0; i <= n / 2; i++)
        {
            sum = pow(2, i);
            if (sum == n)
            {
                return true;
            }
        }
        return 0;
    }
};
int main()
{
    int n;
    cout << "enter the number";
    cin >> n;
    solution t;
    cout << t.power(n);
}
/*enter the number1024
1
PS C:\Users\DELL\OneDrive\Desktop\question\question>*/

// it is a optimize solution
#include <iostream>
using namespace std;
bool power(int n)
{
    if (n == 0)
        return 0;
    if (n == 1)
        return 1;
    while (n % 2 == 0)
    {
        n = n / 2;
        if (n == 0 || n == 1)
            return 1;
    }
    return 0;
}
int main()
{
    int n;
    cout << "enter the number";
    cin >> n;
    cout << power(n);
}
/*enter the number0
0
PS C:\Users\DELL\OneDrive\Desktop\question\question>*/