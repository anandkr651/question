#include <iostream>
using namespace std;
#include <vector>
#include <stack>
vector<int> smallerelement(vector<int> &arr, int n)
{
    vector<int> ans(n);
    stack<int> s;
    s.push(-1);
    for (int i = n - 1; i >= 0; i--)
    {
        int c = arr[i];
        while (s.top() >= c)
        {
            s.pop();
        }
        ans[i] = s.top();
        s.push(c);
    }
    return ans;
}
int main()
{
    vector<int> s(4);
    cout << "enter the element" << endl;
    for (int i = 0; i < s.size(); i++)
    {
        cin >> s[i];
    }
    vector<int> ans = smallerelement(s, 3);
    for (int i : ans)
    {
        cout << i << " ";
    }
}
/*enter the element
2
1
4
3
1 -1 3 -1
PS C:\Users\DELL\OneDrive\Desktop\question\question> */