#include <iostream>
using namespace std;
#include <vector>
int solve(vector<int> &v, int i, int j)
{
    if (i + 1 == j)
    {
        return 0;
    }
    int ans = INT_MAX;
    for (int k = i + 1; k < j; k++)
    {
        ans = min(ans, v[i] * v[j] * v[k] + solve(v, i, k) + solve(v, k, j));
    }
    return ans;
}
int main()
{
    int p;
    cout << "enter the size of vector ";
    cin >> p;
    vector<int> value(p);
    cout << "enter the number " << endl;
    for (int i = 0; i < p; i++)
    {
        cin >> value[i];
    }
    cout << "minimum score " << solve(value, 0, p - 1);
}
/*enter the size of vector 4
enter the number
3
7
4
5
minimum score 144
PS C:\Users\DELL\OneDrive\Desktop\question\question>*/

#include <iostream>
using namespace std;
#include <vector>
int solve(vector<int> &v, int i, int j, vector<vector<int>> &dp)
{
    if (i + 1 == j)
    {
        return 0;
    }
    if (dp[i][j] != -1)
    {
        return dp[i][j];
    }
    int ans = INT_MAX;
    for (int k = i + 1; k < j; k++)
    {
        ans = min(ans, v[i] * v[j] * v[k] + solve(v, i, k, dp) + solve(v, k, j, dp));
    }
    dp[i][j] = ans;
    return dp[i][j];
}
int main()
{
    int p;
    cout << "enter the size of vector ";
    cin >> p;
    vector<int> value(p);
    cout << "enter the number " << endl;
    for (int i = 0; i < p; i++)
    {
        cin >> value[i];
    }
    vector<vector<int>> dp(p, vector<int>(p, -1));
    cout << "minimum score " << solve(value, 0, p - 1, dp);
}
/*enter the size of vector 6
enter the number
1
3
1
4
1
5
minimum score 13
PS C:\Users\DELL\OneDrive\Desktop\question\question>*/