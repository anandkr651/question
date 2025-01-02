//   *************** concept of dynamic programming ********************
/*    there are three approach
        1.top - down --->  recursion +  memoization
        2.bottom - up ---> tabulation
        3.space optimisation
*/
// in general we can types this code

#include <iostream>
using namespace std;
int fb(int n)
{
    if (n <= 1)
    {
        return n;
    }
    return fb(n - 1) + fb(n - 2);
}
int main()
{
    int n;
    cout << "enter the number ";
    cin >> n;
    cout << fb(n);
}
/*enter the number 6
8
PS C:\Users\DELL\OneDrive\Desktop\question\question>*/

// top-down approach

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int fb(int n, vector<int> &dp)
{
    if (n <= 1)
    {
        return n;
    }
    if (dp[n] != -1)
    {
        return dp[n];
    }
    dp[n] = fb(n - 1, dp) + fb(n - 2, dp);
    return dp[n];
}
int main()
{
    int n;
    cout << "enter the number ";
    cin >> n;
    vector<int> dp(n+1,-1);
    cout<<"size of dp "<<sizeof(dp)<<endl;
    for(auto i:dp){
        cout<<i<<endl;
    }
    cout << fb(n, dp);
}
/*enter the number 6
size of dp 24
-1
-1
-1
-1
-1
-1
-1
8
PS D:\question\question>*/

// bottom - up approach

#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int n;
    cout << "enter the number ";
    cin >> n;
    vector<int> dp(n + 1);
    dp[1] = 1;
    dp[0] = 0;
    for (int i = 2; i <= n; i++)
    {
        dp[i] = dp[i - 1] + dp[i - 2];
    }
    cout << dp[n];
}
/*enter the number 6
8
PS C:\Users\DELL\OneDrive\Desktop\question\question>*/

// space optimisation

#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "enter the number ";
    cin >> n;
    int prev1 = 1;
    int prev2 = 0;
    if (n == 0)
    {
        return prev2;
    }
    for (int i = 2; i <= n; i++)
    {
        int curr = prev1 + prev2;
        prev2 = prev1;
        prev1 = curr;
    }
    cout << prev1;
}
/*enter the number 6
8
PS C:\Users\DELL\OneDrive\Desktop\question\question>*/