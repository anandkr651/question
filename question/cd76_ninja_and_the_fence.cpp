#include <iostream>
using namespace std;
int add(int a, int b)
{
    return (a + b);
}
int mul(int a, int b)
{
    return (a * b);
}
int solve(int n, int k)
{
    if (n == 1)
    {
        return k;
    }
    if (n == 2)
    {
        return add(k, mul(k, k - 1));
    }
    int ans = add(mul(solve(n - 2, k), k - 1), mul(solve(n - 1, k), k - 1));
    return ans;
}
int main()
{
    int n, k;
    cout << "enter the number of fence or wall ";
    cin >> n;
    cout << "enter the number of color ";
    cin >> k;
    cout << "not more than two adjacent post have the same color " << endl;
    cout << "how many number of ways the ninja can paint the fence " << solve(n, k);
}
/*enter the number of fence or wall 3
enter the number of color 2
not more than two adjacent post have the same color
how many number of ways the ninja can paint the fence 6
PS C:\Users\DELL\OneDrive\Desktop\question\question>*/

#include <iostream>
#include <vector>
#define MOD 1000000007
using namespace std;
int add(int a, int b)
{
    return (a % MOD + b % MOD) % MOD;
}
int mul(int a, int b)
{
    return ((a % MOD) * 1LL * (b % MOD)) % MOD;
}
int solve(int n, int k, vector<int> &dp)
{
    if (n == 1)
    {
        return k;
    }
    if (n == 2)
    {
        return add(k, mul(k, k - 1));
    }
    if (dp[n] != -1)
    {
        return dp[n];
    }
    int ans = add(mul(solve(n - 2, k, dp), k - 1), mul(solve(n - 1, k, dp), k - 1));
    dp[n] = ans;
    return dp[n];
}
int main()
{
    int n, k;
    cout << "enter the number of fence or wall ";
    cin >> n;
    cout << "enter the number of color ";
    cin >> k;
    vector<int> dp(n + 1, -1);
    cout << "not more than two adjacent post have the same color " << endl;
    cout << "how many number of ways the ninja can paint the fence " << solve(n, k, dp);
}
/*enter the number of fence or wall 2
enter the number of color 4
not more than two adjacent post have the same color
how many number of ways the ninja can paint the fence 16
PS C:\Users\DELL\OneDrive\Desktop\question\question>*/