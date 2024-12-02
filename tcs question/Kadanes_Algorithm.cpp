#include <bits/stdc++.h>
using namespace std;
int maxSubarraySum(vector<int> &arr)
{
    int currentsum = 0, maxsum = arr[0], n = arr.size();
    for (int i = 0; i < n; i++)
    {
        currentsum += arr[i];
        maxsum = max(currentsum, maxsum);
        if (currentsum < 0)
        {
            currentsum = 0;
        }
    }
    return maxsum;
}
int main()
{
    int n;
    cout << "enter the size of an array ";
    cin >> n;
    vector<int> arr(n);
    cout << "enter the element ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int ans = maxSubarraySum(arr);
    cout << "maxsubarraysum " << ans;
}
/*enter the size of an array 4
enter the element -2
1
0
-3
maxsubarraysum 1
PS D:\question\tcs question> */
/*enter the size of an array 7
enter the element 2
3
-8
7
-1
2
3
maxsubarraysum 11
PS D:\question\tcs question> 7,-1,2,3*/