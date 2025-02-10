// *************************** in this code we can use the STL function(lcm,gcd) to find the lcm and hcf **********************
// the function lcm and gcd are not working in the gfg because this function are support c++17 ownward .so this function is use in only vscode .

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