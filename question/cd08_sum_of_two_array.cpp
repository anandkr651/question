#include <iostream>
using namespace std;
#include <vector>
#include <algorithm>
vector<int> reverse(vector<int> ans)
{
    int s = 0, e = ans.size() - 1;
    while (s < e)
        swap(ans[s++], ans[e--]);
    return ans;
}
vector<int> findarraysum(vector<int> &x, int n, vector<int> &y, int m)
{
    vector<int> ans;
    int i = n - 1, j = m - 1, sum = 0, carry = 0;
    while (i >= 0 && j >= 0)
    {
        sum = x[i] + y[j] + carry;
        carry = sum / 10;
        sum = sum % 10;
        ans.push_back(sum);
        i--;
        j--;
    }
    while (i >= 0)
    {
        sum = x[i] + carry;
        carry = sum / 10;
        sum = sum % 10;
        ans.push_back(sum);
        i--;
    }
    while (j >= 0)
    {
        sum = y[j] + carry;
        carry = sum / 10;
        sum = sum % 10;
        ans.push_back(sum);
        j--;
    }
    while (carry != 0)
    {
        sum = carry;
        carry = sum / 10;
        sum = sum % 10;
        ans.push_back(sum);
    }
    return reverse(ans);
}
int main()
{
    vector<int> x, y;
    x.push_back(2);
    x.push_back(3);
    x.push_back(5);
    x.push_back(8);
    x.push_back(9);

    y.push_back(2);
    y.push_back(4);
    y.push_back(6);
    int n = x.size(), m = y.size();

    vector<int> p = findarraysum(x, n, y, m);

    for (int r : p)
    {
        cout << r << " ";
    }
    cout << endl;
}
/*2 3 8 3 5
PS C:\Users\DELL\OneDrive\Desktop\dsa in c++\question>*/
