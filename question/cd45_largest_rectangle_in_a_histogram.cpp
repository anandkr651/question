#include <iostream>
#include <vector>
#include <stack>
using namespace std;
vector<int> nextsmaller(vector<int> &arr, int n)
{
    vector<int> ans(n);
    stack<int> s;
    s.push(-1);
    for (int i = n - 1; i >= 0; i--)
    {
        int c = arr[i];
        while (s.top() != -1 && arr[s.top()] >= c)
        {
            s.pop();
        }
        ans[i] = s.top();
        s.push(i);
    }
    return ans;
}
vector<int> prevsmaller(vector<int> &arr, int n)
{
    vector<int> ans(n);
    stack<int> s;
    s.push(-1);
    for (int i = 0; i < n; i++)
    {
        int c = arr[i];
        while (s.top() != -1 && arr[s.top()] >= c)
        {
            s.pop();
        }
        ans[i] = s.top();
        s.push(i);
    }
    return ans;
}
int largestarea(vector<int> &height)
{
    int n = height.size();

    vector<int> next(n);
    next = nextsmaller(height, n);

    vector<int> prev(n);
    prev = prevsmaller(height, n);

    int area = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        int l = height[i];
        if (next[i] == -1)
        {
            next[i] = n;
        }
        int b = next[i] - prev[i] - 1;
        int newarea = l * b;
        area = max(area, newarea);
    }
    return area;
}
int main()
{
    vector<int> s(6);
    cout << "enter the data" << endl;
    for (int i = 0; i < s.size(); i++)
    {
        cin >> s[i];
    }
    cout << "largest area in the histogram " << largestarea(s);
}
/*enter the data
2
1
5
6
2
3
largest area in the histogram 10
PS C:\Users\DELL\OneDrive\Desktop\question\question>*/