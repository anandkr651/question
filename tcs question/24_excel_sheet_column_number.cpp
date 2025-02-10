#include <bits/stdc++.h>
using namespace std;
int titleToNumber(string columnTitle)
{
    int n = columnTitle.length();
    int total = 0, sqt = n - 1;
    for (int i = 0; i < n; i++)
    {
        total = total + pow(26, sqt) * ( 1+columnTitle[i] - 'A');
        sqt--;
    }
    return total;
}
int main()
{
    string columnTitle;
    cout << "enter the string only in the upper case letter ";
    getline(cin, columnTitle);
    int ans = titleToNumber(columnTitle);
    cout << ans;
}
/*enter the string only in the upper case letter AAA
703
PS D:\question\tcs question>*/
/*enter the string only in the upper case letter AA
27
PS D:\question\tcs question>*/