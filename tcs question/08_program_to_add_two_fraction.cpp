// **************** in this code we got TLE ***********************

#include <bits/stdc++.h>
using namespace std;
void addFraction(int num1, int den1, int num2, int den2)
{
    int small1, small2;
    small1=min(num1,den1);
    small2=min(num2,den2);
    while (small1 != 1)
    {
        for (int i = 2; i <= small1; i++)
        {
            if ((num1 % i == 0) && (den1 % i == 0))
            {
                num1 = num1 / i;
                den1 = den1 / i;
                num1 > den1 ? small1 = den1 : small1 = num1;
                break;
            }
        }
    }
    while (small2 != 1)
    {
        for (int i = 2; i <= small2; i++)
        {
            if ((num2 % i == 0) && (den2 % i == 0))
            {
                num2 = num2 / i;
                den2 = den2 / i;
                num2 > den2 ? small2 = den2 : small2 = num2;
                break;
            }
        }
    }

    vector<int> vden1;
    vector<int> vden2;
    int denominator1 = den1;
    int denominator2 = den2;
    while (denominator1 != 1)
    {
        for (int i = 2; i <= denominator1; i++)
        {
            if (denominator1 % i == 0)
            {
                vden1.push_back(i);
                denominator1 = denominator1 / i;
                break;
            }
        }
    }
    while (denominator2 != 1)
    {
        for (int i = 2; i <= denominator2; i++)
        {
            if (denominator2 % i == 0)
            {
                vden2.push_back(i);
                denominator2 = denominator2 / i;
                break;
            }
        }
    }
    vector<int> ans;
    int i = 0, j = 0;
    while (i < vden1.size() && j < vden2.size())
    {
        if (vden1[i] == vden2[j])
        {
            ans.push_back(vden1[i]);
            i++;
            j++;
        }
        else if (vden1[i] > vden2[j])
        {
            ans.push_back(vden2[j]);
            j++;
        }
        else
        {
            ans.push_back(vden1[i]);
            i++;
        }
    }
    while (j < vden2.size())
    {
        ans.push_back(vden2[j]);
        j++;
    }
    while (i < vden1.size())
    {
        ans.push_back(vden1[i]);
        i++;
    }
    int pro = 1;
    for (auto i : ans)
    {
        pro = pro * i;
    }
    int first = num1 * (pro / den1);
    int second = num2 * (pro / den2);

    cout << (first + second) << "/" << pro;
}
int main()
{
    addFraction(1, 6, 1, 8);
}
/*7/24
PS D:\question\tcs question> */

// *************************** in this code we can use the STL function(lcm,gcd) to find the lcm and hcf **********************
// the function lcm and gcd are not working because this function are use in c++17 ownward.so this function is use in only vscode .

#include <bits/stdc++.h>
using namespace std;
void addFraction(int num1, int den1, int num2, int den2)
{
    int deno = lcm(den1, den2);
    cout << "lcm of two number " << deno << endl;
    int num = num1 * (deno / den1) + num2 * (deno / den2);
    int divisable = gcd(num, deno);
    cout << "hcf of two number " << divisable << endl;
    num = num / divisable;
    deno = deno / divisable;
    cout << num << "/" << deno << endl;
}
int main()
{
    addFraction(1, 6, 1, 8);
}
/*lcm of two number 24
hcf of two number 1
7/24
PS D:\question\tcs question>*/

#include <bits/stdc++.h>
using namespace std;
int hcf(int a, int b)
{
    if (a == 0)
    {
        return b;
    }
    else
    {
        hcf(b % a, a);
    }
}
int lcm1(int a, int b)
{
    return a * b / hcf(a, b);
}
void addFraction(int num1, int den1, int num2, int den2)
{
    // note lcm is a function in the STL so we can not use this name.
    int deno = lcm1(den1, den2);
    int num = num1 * (deno / den1) + num2 * (deno / den2);
    int divisable = hcf(num, deno);
    num = num / divisable;
    deno = deno / divisable;
    cout << num << "/" << deno << endl;
}

int main()
{
    addFraction(384, 887, 778, 916);
    return 0;
}
/*520915/406246
PS D:\question\tcs question> */