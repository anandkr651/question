#include <iostream>
#include <vector>
using namespace std;
int solve(vector<int> &weight, vector<int> &value, int index, int capacity)
{
    if (index == 0)
    {
        if (weight[0] <= capacity)
        {
            return value[0];
        }
        else
        {
            return 0;
        }
    }
    int inclu = 0;
    if (weight[index] <= capacity)
    {
        inclu = value[index] + solve(weight, value, index - 1, capacity - weight[index]);
    }
    int exclu = 0 + solve(weight, value, index - 1, capacity);
    int ans = max(inclu, exclu);
    return ans;
}
int main()
{
    int n, w;
    cout << "enter the number of item ";
    cin >> n;
    cout << "enter the number of weight that can be carry by the theif ";
    cin >> w;
    vector<int> weight(n), value(n);
    cout << "enter the number of weight and these value" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << "weight ";
        cin >> weight[i];
        cout << "value ";
        cin >> value[i];
    }
    cout << "when the theif sell the product get the maximum profit " << solve(weight, value, n - 1, w);
}
/*enter the number of item 4
enter the number of weight that can be carry by the theif 10
enter the number of weight and these value
weight 6
value 3
weight 1
value 6
weight 5
value 1
weight 3
value 4
when the theif sell the product get the maximum profit 13
PS C:\Users\DELL\OneDrive\Desktop\question\question>*/

#include <iostream>
#include <vector>
using namespace std;
int solve(vector<int> &weight, vector<int> &value, int index, int capacity, vector<vector<int>> &dp)
{
    if (index == 0)
    {
        if (weight[0] <= capacity)
        {
            return value[0];
        }
        else
        {
            return 0;
        }
    }
    if (dp[index][capacity] != -1)
    {
        return dp[index][capacity];
    }
    int inclu = 0;
    if (weight[index] <= capacity)
    {
        inclu = value[index] + solve(weight, value, index - 1, capacity - weight[index], dp);
    }
    int exclu = 0 + solve(weight, value, index - 1, capacity, dp);
    dp[index][capacity] = max(inclu, exclu);
    return dp[index][capacity];
}
int main()
{
    int n, w;
    cout << "enter the number of item ";
    cin >> n;
    cout << "enter the number of weight that can be carry by the theif ";
    cin >> w;
    vector<int> weight(n), value(n);
    cout << "enter the number of weight and these value" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << "weight ";
        cin >> weight[i];
        cout << "value ";
        cin >> value[i];
    }
    vector<vector<int>> dp(n, vector<int>(w + 1, -1));
    cout << "when the theif sell the product get the maximum profit " << solve(weight, value, n - 1, w, dp);
}
/*enter the number of item 4
enter the number of weight that can be carry by the theif 5
enter the number of weight and these value
weight 1
value 5
weight 2
value 4
weight 4
value 8
weight 5
value 6
when the theif sell the product get the maximum profit 13
PS C:\Users\DELL\OneDrive\Desktop\question\question>*/