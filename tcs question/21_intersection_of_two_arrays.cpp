// in this code the time complexites is 16ms

#include <bits/stdc++.h>
using namespace std;
vector<int> intersection(vector<int> &nums1, vector<int> &nums2)
{
    set<int> ans;
    sort(nums1.begin(), nums1.end());
    int n = nums1.size();
    int m = nums2.size();
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (nums1[i] == nums2[j])
            {
                ans.insert(nums1[i]);
            }
        }
    }
    vector<int> arr;
    for (auto x : ans)
    {
        arr.push_back(x);
    }
    return arr;
}

int main()
{
    int n, m;
    cout << "enter the size of first array ";
    cin >> n;
    vector<int> arr1(n);
    cout << "enter the data ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr1[i];
    }
    cout << "enter the size of second array ";
    cin >> m;
    vector<int> arr2(m);
    cout << "enter the data ";
    for (int i = 0; i < m; i++)
    {
        cin >> arr2[i];
    }
    vector<int> ans = intersection(arr1, arr2);
    cout<<"intersection "<<endl;
    for (auto x : ans)
    {
        cout << x << " ";
    }
}
/*enter the size of first array 4
enter the data 1
2
2
1
enter the size of second array 2
enter the data 2
2
intersection 
2 
PS D:\question\tcs question>*/

// this code is optimise code the time complexites is 0ms.
#include <bits/stdc++.h>
using namespace std;
vector<int> intersection(vector<int> &nums1, vector<int> &nums2)
{
    int n=nums1.size();
        int m=nums2.size();
        set<int>ans;
        vector<int>answer;
        for(int i=0;i<n;i++){
            ans.insert(nums1[i]);
        }
        for(int i=0;i<m;i++){
            if(ans.find(nums2[i])!=ans.end()){
                answer.push_back(nums2[i]);
                ans.erase(nums2[i]);
            }
        }
        return answer;
}

int main()
{
    int n, m;
    cout << "enter the size of first array ";
    cin >> n;
    vector<int> arr1(n);
    cout << "enter the data ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr1[i];
    }
    cout << "enter the size of second array ";
    cin >> m;
    vector<int> arr2(m);
    cout << "enter the data ";
    for (int i = 0; i < m; i++)
    {
        cin >> arr2[i];
    }
    vector<int> ans = intersection(arr1, arr2);
    cout<<"intersection "<<endl;
    for (auto x : ans)
    {
        cout << x << " ";
    }
}
/*enter the size of first array 3
enter the data 4
9
5
enter the size of second array 5
enter the data 9
4
9
8
4
intersection 
9 4
PS D:\question\tcs question>*/