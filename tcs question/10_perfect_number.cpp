#include <bits/stdc++.h>
using namespace std;
bool isPerfectNumber(int n)
{
    int sum = 1;
    for (int i = 2; i <= sqrt(n); i++) //sqrt --> square root
    {
        if (n % i == 0)
        {
            sum += i;
            if (i != n / i)  //because of tle
            {
                sum += n / i;
            }
        }
    }
    if (sum == n)
    {
        return true;
    }
    else
    {
        return false;
    }
}
int main()
{
    int n;
    cout<<"enter the number ";
    cin>>n;
    bool ans = isPerfectNumber(n);
    cout << ans;
}
//10 -->1,2,5 = 8 so it return 0
/*enter the number 10
0
PS D:\question\tcs question>*/
//6 -->1,2,3 = 6 so return 1
/*enter the number 6
1
PS D:\question\tcs question>*/