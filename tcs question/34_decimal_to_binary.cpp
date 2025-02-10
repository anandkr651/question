#include <iostream>
#include <cmath>
#include <vector>
using namespace std;
int main()
{
    int n;
    cout << "enter the number";
    cin >> n;
    string ans = "";
    while (n != 0)
    {
        int res = n % 2;
        ans=to_string(res)+ans;
        n = n / 2;
    }
    cout << ans;
}
/*enter the number5
101
PS C:\Users\DELL\OneDrive\Desktop\question\question> */
/*enter the number13
1101
PS D:\question\question>*/