// we can used the MOD because for the large value

#include <iostream>
#define MOD 1000000007
using namespace std;
int solve(int p)
{
    if (p == 1)
    {
        return 0;
    }
    if (p == 2)
    {
        return 1;
    }
    int ans = ((p - 1) % MOD * ((solve(p - 2) % MOD) + solve(p - 1) % MOD)) % MOD;
    return ans;
}
int main()
{
    int p;
    cout << "enter the number ";
    cin >> p;
    cout << "count the number of derangements " << solve(p);
}
/*enter the number 4
count the number of derangements 9
PS C:\Users\DELL\OneDrive\Desktop\question\question>*/
/*enter the number 3
count the number of derangements 2
PS C:\Users\DELL\OneDrive\Desktop\question\question>*/

#include <iostream>
#define MOD 1000000007
using namespace std;
#include <vector>
int solve(int p, vector<int> &dp)
{
    if (p == 1)
    {
        return 0;
    }
    if (p == 2)
    {
        return 1;
    }
    if(dp[p]!=-1)
    {
        return dp[p];
    }
    int ans = ((p - 1) % MOD * ((solve(p - 2, dp) % MOD) + solve(p - 1, dp) % MOD)) % MOD;
    dp[p] = ans;
    return dp[p];
}
int main()
{
    int p;
    cout << "enter the number ";
    cin >> p;
    vector<int> dp(p + 1, -1);
    cout << "count the number of derangements " << solve(p, dp);
}
/*enter the number 10
count the number of derangements 1334961
PS C:\Users\DELL\OneDrive\Desktop\question\question>*/