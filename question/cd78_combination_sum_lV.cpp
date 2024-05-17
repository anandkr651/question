#include <iostream>
using namespace std;
#include <vector>
int solve(int tar, vector<int> &num)
{
    if (tar < 0)
    {
        return 0;
    }
    if (tar == 0)
    {
        return 1;
    }
    int ans = 0;
    for (int i = 0; i < num.size(); i++)
    {
        ans = ans + solve(tar - num[i], num);
    }
    return ans;
}
int main()
{
    int tar, p;
    cout << "enter the target ";
    cin >> tar;
    cout << "enter the size of the vector ";
    cin >> p;
    vector<int> num(p);
    cout << "enter the number ";
    for (int i = 0; i < p; i++)
    {
        cin >> num[i];
    }
    cout << "how many different ways of selecting an element from an array is equal to target " << solve(tar, num);
}
/*enter the target 5
enter the size of the vector 3
enter the number 1
2
5
how many different ways of selecting an element from an array is equal to target 9
PS C:\Users\DELL\OneDrive\Desktop\question\question>*/

#include <iostream>
using namespace std;
#include <vector>
int solve(int tar, vector<int> &num, vector<int> &dp)
{
    if (tar < 0)
    {
        return 0;
    }
    if (tar == 0)
    {
        return 1;
    }
    if (dp[tar] != -1)
    {
        return dp[tar];
    }
    int ans = 0;
    for (int i = 0; i < num.size(); i++)
    {
        ans = ans + solve(tar - num[i], num, dp);
    }
    dp[tar] = ans;
    return dp[tar];
}
int main()
{
    int tar, p;
    cout << "enter the target ";
    cin >> tar;
    cout << "enter the size of the vector ";
    cin >> p;
    vector<int> num(p);
    cout << "enter the number ";
    for (int i = 0; i < p; i++)
    {
        cin >> num[i];
    }
    vector<int> dp(tar + 1, -1);
    cout << "how many different ways of selecting an element from an array is equal to target " << solve(tar, num, dp);
}
/*enter the target 4
enter the size of the vector 3
enter the number 12
1
3
how many different ways of selecting an element from an array is equal to target 3
PS C:\Users\DELL\OneDrive\Desktop\question\question>*/