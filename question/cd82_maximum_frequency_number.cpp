#include <bits/stdc++.h>
using namespace std;
int solve(vector<int> arr, int n)
{
    unordered_map<int, int> mp;
    int maxi = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        mp[arr[i]]++;
        maxi = max(maxi, mp[arr[i]]);
    }
    for (int i = 0; i < n; i++)
    {
        if (maxi == mp[arr[i]])
        {
            return arr[i];
        }
    }
    return 0;
}
int main()
{
    vector<int> arr(5);
    cout << "enter the number ";
    for (int i = 0; i < 5; i++)
    {
        cin >> arr[i];
    }
    int ans = solve(arr, 5);
    cout << "answer is " << ans;
}
/*enter the number 1
2
3
2
1
answer is 1
PS D:\question\question> */