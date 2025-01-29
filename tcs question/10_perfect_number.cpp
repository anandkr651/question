#include <bits/stdc++.h>
using namespace std;
bool isPerfectNumber(int n)
{
    int sum = 1;
    for (int i = 2; i <= sqrt(n); i++)
    {
        if (n % i == 0)
        {
            sum += i;
            if (i != n / i)  //bucause of tle
            {
                sum += n / i;
            }
        }
    }
    if (sum == n)
    {
        return true;
    }
    else
    {
        return false;
    }
}
int main()
{
    bool ans = isPerfectNumber(8128);
    cout << ans;
}
/*1
PS D:\question\tcs question>*/