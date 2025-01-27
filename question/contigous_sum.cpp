/* ans comes in this form 
3 4 
3 4 -7 1 3 3
1 3 3
3 3 1 */


#include <bits/stdc++.h>
using namespace std;
vector<vector<int>> ans(vector<int> arr, int n, int sum)
{
    int currentsum = 0;
    map<int, vector<int>> un;
    vector<vector<int>> subarray;
    un[currentsum].push_back(-1);
    for (int i = 0; i < n; i++)
    {
        currentsum += arr[i];
        if (un.find(currentsum - sum) != un.end())
        {
            for (auto id : un[currentsum - sum])
            {
                subarray.push_back(vector<int>(arr.begin() + id + 1, arr.begin() + i + 1));
            }
        }
        un[currentsum].push_back(i);
    }
    return subarray;
}
int main()
{
    int n, sum;
    cout << "enter the size of an array ";
    cin >> n;
    cout << "enter the sum ";
    cin >> sum;
    vector<int> arr(n);
    cout << "enter the element of an array";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    vector<vector<int>> solve = ans(arr, n, sum);

    for (auto sub : solve)
    {
        for (int val : sub)
        {
            cout << val << " ";
        }
        cout << endl;
    }
}
/*enter the size of an array 8
enter the sum 7
enter the element of an array3
4
-7
1
3
3
1
4
3 4 
3 4 -7 1 3 3
1 3 3
3 3 1
PS D:\question\tcs question> */