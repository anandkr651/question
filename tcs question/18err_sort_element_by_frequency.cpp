//something err
#include <bits/stdc++.h>
using namespace std;
vector<int> sortFrequency(vector<int> arr)
{
    map<int, int> mp;
    int n = arr.size();
    for (int i = 0; i < n; i++)
    {
        mp[arr[i]]++;
    }
    for(auto x:mp){
        cout<<x.first<<" "<<x.second<<endl;
    }
    vector<int> desc;
    for (auto x : mp)
    {
        desc.push_back(x.second);
    }
    sort(desc.rbegin(), desc.rend());
    vector<int> ans;
    for (int i = 0; i < desc.size(); i++)
    {
        for (auto x : mp)
        {
            if (x.second == desc[i])
            {
                while (x.second != 0)
                {
                    ans.push_back(x.first);
                    x.second--;
                }
                mp[x.first] = 0;
                break;
            }
        }
    }
    return ans;
}
int main()
{
    int n;
    cout << "enter the size of vector ";
    cin >> n;
    vector<int> arr(n);
    cout << "enter the number ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    vector<int> ans = sortFrequency(arr);
    for (auto x : ans)
    {
        cout << x << ",";
    }
}
/*enter the size of vector 8
enter the number 2
5
2
8
5
6
8
8
6 1
8 3
5 2
2 2
8,8,8,5,5,2,2,6,
PS D:\question\tcs question>*/
//correct output is 88822556