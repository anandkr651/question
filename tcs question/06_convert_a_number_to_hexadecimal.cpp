#include <iostream>
using namespace std;
string solve(int n)
{
    unsigned int ourNum = n; // unsigned take only positive number from 0 to (2 power 32) -1 but signed take positive and negative number from -2147483648 to 2147483648.
    cout << ourNum << " ";
    // Implicitly cast negative numbers. -1 turns to the maximum number(4294967295) representable as an unsigned int.
    // in the question --> 32 bits number.

    string ans = "";
    char arr[16] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9', 'a', 'b', 'c', 'd', 'e', 'f'};
    while (ourNum != 0)
    {
        int rem = ourNum % 16;
        ans = arr[rem] + ans;
        ourNum = ourNum / 16;
    }
    return ans;
}
int main()
{
    int n;
    cout << "enter the number ";
    cin >> n;
    string ans = solve(n);
    cout << "hexadecimal number is " << ans;
}
/*enter the number -8
4294967288 hexadecimal number is fffffff8
PS D:\question\tcs question>*/
/*enter the number -1
4294967295 hexadecimal number is ffffffff
PS D:\question\tcs question>*/