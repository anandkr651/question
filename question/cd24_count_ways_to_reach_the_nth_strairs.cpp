#include <iostream>
using namespace std;
int count(int n)
{
    if (n <= 2)
        return n;
    long long int pre1 = 1;
    long long int pre2 = 2;
    long long int current = 0;
    for (int i = 3; i <= n; i++)
    {
        current = pre1 + pre2;
        pre1 = pre2;
        pre2 = current;
    }
    return current;
}
int main()
{
    int a;
    cout << "enter the number of strairs" << endl;
    cin >> a;
    cout << "the number of way to reach the " << a << " stairs " << count(a);
}
/*enter the number of strairs
5
the number of way to reach the 5 stairs 8
PS C:\Users\DELL\OneDrive\Desktop\question\question>*/
/*enter the number of strairs
51
the number of way to reach the 51 stairs -1408458269
PS C:\Users\DELL\OneDrive\Desktop\question\question>*/