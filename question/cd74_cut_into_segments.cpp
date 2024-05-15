#include <iostream>
using namespace std;
int solve(int n, int x, int y, int z)
{
    if (n == 0)
    {
        return 0;
    }
    if (n < 0)
    {
        return INT_MIN;
    }
    int a = solve(n - x, x, y, z) + 1;
    int b = solve(n - y, x, y, z) + 1;
    int c = solve(n - z, x, y, z) + 1;
    int ans = max(a, max(b, c));
    return ans;
}
int main()
{
    int n, x, y, z;
    cout << "enter the size of the rod ";
    cin >> n;
    cout << "enter the three cuts of the rod ";
    cin >> x >> y >> z;
    cout << "the maximum number of cuts " << solve(n, x, y, z);
}
/*enter the size of the rod 7
enter the three cuts of the rod 5
2
2
the maximum number of cuts 2
PS C:\Users\DELL\OneDrive\Desktop\question\question>*/

#include <iostream>
#include <vector>
using namespace std;
int solve(int n, int x, int y, int z, vector<int> &dp)
{
    if (n == 0)
    {
        return 0;
    }
    if (n < 0)
    {
        return INT_MIN;
    }
    if (dp[n] != -1)
    {
        return dp[n];
    }
    int a = solve(n - x, x, y, z, dp) + 1;
    int b = solve(n - y, x, y, z, dp) + 1;
    int c = solve(n - z, x, y, z, dp) + 1;
    int ans = max(a, max(b, c));
    dp[n] = ans;
    return dp[n];
}
int main()
{
    int n, x, y, z;
    cout << "enter the size of the rod ";
    cin >> n;
    cout << "enter the three cuts of the rod ";
    cin >> x >> y >> z;
    vector<int> dp(n + 1, -1);
    cout << "the maximum number of cuts " << solve(n, x, y, z, dp);
}
/*enter the size of the rod 8
enter the three cuts of the rod 1
4
4
the maximum number of cuts 8
PS C:\Users\DELL\OneDrive\Desktop\question\question>*/