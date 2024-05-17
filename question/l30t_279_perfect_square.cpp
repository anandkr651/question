#include <iostream>
using namespace std;
int solve(int n)
{
    if (n <= 0)
    {
        return 0;
    }
    int ans = n;
    for (int i = 1; i * i <= n; i++)
    {
        ans = min(ans, 1 + solve(n - i * i));
    }
    return ans;
}
int main()
{
    int p;
    cout << "enter the number ";
    cin >> p;
    cout << "return the least number of perfect square number that sum to p " << solve(p);
}
/*enter the number 12
return the least number of perfect square number that sum to p 3
PS C:\Users\DELL\OneDrive\Desktop\question\question>*/

#include <iostream>
#include <vector>
using namespace std;
int solve(int n, vector<int> &dp)
{
    if (n <= 0)
    {
        return 0;
    }
    if (dp[n] != -1)
    {
        return dp[n];
    }
    int ans = n;
    for (int i = 1; i * i <= n; i++)
    {
        ans = min(ans, 1 + solve(n - i * i, dp));
    }
    dp[n] = ans;
    return dp[n];
}
int main()
{
    int p;
    cout << "enter the number ";
    cin >> p;
    vector<int> dp(p + 1, -1);
    cout << "return the least number of perfect square number that sum to p " << solve(p, dp);
}
/*enter the number 13
return the least number of perfect square number that sum to p 2
PS C:\Users\DELL\OneDrive\Desktop\question\question>*/