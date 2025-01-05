// #include <iostream>
// using namespace std;
// #include <vector>
// int houserobber(vector<int> &nums, int a)
// {
//     if (a < 0)
//     {
//         return 0;
//     }
//     int inclu = houserobber(nums, a - 2) + nums[a];
//     int exclu = houserobber(nums, a - 1) + 0;
//     int ans = max(inclu, exclu);
//     return ans;
// }
// int solve(vector<int> &x)
// {
//     int n = x.size();
//     if (n == 1)
//     {
//         return x[0];
//     }
//     vector<int> first, second;
//     for (int i = 0; i < n; i++)
//     {
//         if (i != n - 1)
//         {
//             first.push_back(x[i]);
//         }
//         if (i != 0)
//         {
//             second.push_back(x[i]);
//         }
//     }
//     int a = first.size() - 1;
//     int maxi = max(houserobber(first, a), houserobber(second, a));
//     return maxi;
// }
// int main()
// {
//     int p;
//     cout << "enter the size of vector ";
//     cin >> p;
//     vector<int> x(p);
//     cout << "enter the number";
//     for (int i = 0; i < p; i++)
//     {
//         cin >> x[i];
//     }
//     cout << "maximum money has been stolen by the thief " << solve(x);
// }
/*enter the size of vector 4
enter the number1
2
3
1
maximum money has been stolen by the thief 4
PS C:\Users\DELL\OneDrive\Desktop\question\question>*/
/*enter the size of vector 5
enter the number1
5
1
2
6
maximum money has been stolen by the thief 11
PS C:\Users\DELL\OneDrive\Desktop\question\question>*/

#include <iostream>
using namespace std;
#include <vector>
int houserobber(vector<int> &nums, int a, vector<int> &dp)
{
    if (a >= nums.size())
    {
        return 0;
    }
    if (dp[a] != -1)
    {
        return dp[a];
    }
    int inclu = houserobber(nums, a + 2, dp) + nums[a];
    int exclu = houserobber(nums, a + 1, dp) + 0;
    return dp[a] = max(inclu, exclu);
}
int solve(vector<int> &x)
{
    int n = x.size();
    if (n == 1)
    {
        return x[0];
    }
    vector<int> first, second;
    for (int i = 0; i < n; i++)
    {
        if (i != n - 1)
        {
            first.push_back(x[i]);
        }
        if (i != 0)
        {
            second.push_back(x[i]);
        }
    }
    vector<int> dp(n, -1);
    int maxi = max(houserobber(first, 0, dp), houserobber(second, 0, dp));
    return maxi;
}
int main()
{
    int p, q;
    cout << "enter the size of vector ";
    cin >> p;
    vector<int> x(p);
    cout << "enter the number ";
    for (int i = 0; i < p; i++)
    {
        cin >> x[i];
    }
    cout << "how much money has been stolen by the thief " << solve(x);
}
/*enter the size of vector 4
enter the number 1
3
2
0
how much money has been stolen by the thief 3
PS C:\Users\DELL\OneDrive\Desktop\question\question>*/