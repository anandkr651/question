#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int solve(vector<int> &dp, vector<int> &cost, int n)
{
    if (n == 0)
    {
        return cost[0];
    }
    if (n == 1)
    {
        return cost[1];
    }
    if (dp[n] != -1)
    {
        return dp[n];
    }
    dp[n] = cost[n] + min(solve(dp, cost, n - 1), solve(dp, cost, n - 2));
    return dp[n];
}
int mincostclimbing(vector<int> &cost)
{
    int n = cost.size();
    vector<int> dp(n + 1, -1);
    int ans = min(solve(dp, cost, n - 1), solve(dp, cost, n - 2));
    return ans;
}
int main()
{
    vector<int> cost(10);
    cout << "enter the cost of stairs" << endl;
    for (int i = 0; i < 10; i++)
    {
        cin >> cost[i];
    }
    cout << "we can pay the amount " << mincostclimbing(cost);
}
/*enter the cost of stairs
1 100 1 1 1 100 1 1 100 1
we can pay the amount 6
PS C:\Users\DELL\OneDrive\Desktop\question\question>*/

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int solve(vector<int> &cost, int n)
{
    if (n == 0)
    {
        return cost[0];
    }
    if (n == 1)
    {
        return cost[1];
    }
    int ans = cost[n] + min(solve(cost, n - 1), solve(cost, n - 2));
    return ans;
}
int mincostclimbing(vector<int> &cost)
{
    int n = cost.size();
    int ans = min(solve(cost, n - 1), solve(cost, n - 2));
    return ans;
}
int main()
{
    vector<int> cost(10);
    cout << "enter the cost of stairs" << endl;
    for (int i = 0; i < 10; i++)
    {
        cin >> cost[i];
    }
    cout << "we can pay the amount " << mincostclimbing(cost);
}
// 1 100 1 1 1 100 1 1 100 1
/*enter the cost of stairs
1 100 1 1 1 100 1 1 100 1
we can pay the amount 6
PS C:\Users\DELL\OneDrive\Desktop\question\question>*/

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int solve(vector<int> &cost, int n)
{
    vector<int> dp(n + 1, -1);
    dp[0] = cost[0];
    dp[1] = cost[1];
    for (int i = 2; i < n; i++)
    {
        dp[i] = cost[i] + min(dp[i - 1], dp[i - 2]);
    }
    return min(dp[n - 1], dp[n - 2]);
}
int mincostclimbing(vector<int> &cost)
{
    int n = cost.size();
    return solve(cost, n);
}
int main()
{
    vector<int> cost(10);
    cout << "enter the cost of stairs" << endl;
    for (int i = 0; i < 10; i++)
    {
        cin >> cost[i];
    }
    int n = cost.size();
    cout << "we can pay the amount " << mincostclimbing(cost);
}
/*enter the cost of stairs
1 100 1 1 1 100 1 1 100 1
we can pay the amount 6
PS C:\Users\DELL\OneDrive\Desktop\question\question>*/

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int solve(vector<int> &cost, int n)
{
    int prev0 = cost[0];
    int prev1 = cost[1];
    for (int i = 2; i < n; i++)
    {
        int curr = cost[i] + min(prev0, prev1);
        prev0 = prev1;
        prev1 = curr;
    }
    return min(prev1, prev0);
}
int mincostclimbing(vector<int> &cost)
{
    int n = cost.size();
    return solve(cost, n);
}
int main()
{
    vector<int> cost(10);
    cout << "enter the cost of stairs" << endl;
    for (int i = 0; i < 10; i++)
    {
        cin >> cost[i];
    }
    int n = cost.size();
    cout << "we can pay the amount " << mincostclimbing(cost);
}
/*enter the cost of stairs
1 100 1 1 1 100 1 1 100 1
we can pay the amount 6
PS C:\Users\DELL\OneDrive\Desktop\question\question>*/