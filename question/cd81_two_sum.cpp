#include <bits/stdc++.h>
using namespace std;
vector<pair<int, int>> twoSum(vector<int> arr, int target, int n)
{
    sort(arr.begin(), arr.end());
    int start = 0, end = n - 1;
    vector<pair<int, int>> ans;
    while (start < end)
    {
        if (arr[start] + arr[end] == target)
        {
            ans.push_back({arr[start], arr[end]});
            start++;
            end--;
        }
        else if (arr[start] + arr[end] > target)
        {
            end--;
        }
        else
        {
            start++;
        }
    }
    return ans;
}
int main()
{
    int target;
    vector<int> arr(5);
    cout << "enter the data ";
    for (int i = 0; i < 5; i++)
    {
        cin >> arr[i];
    }
    cout << "enter the target ";
    cin >> target;
    vector<pair<int, int>> ans = twoSum(arr, target, 5);
    cout << "pair of element of the target ";
    for (auto i : ans)
    {
        cout << "( " << i.first << "," << i.second << " )" << endl;
    }
}
/*enter the data 1
-1
-1
2
2
enter the target 1
pair of element of the target ( -1,2 )
( -1,2 )
PS D:\question\question>*/