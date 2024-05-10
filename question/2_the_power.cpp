#include <iostream>
using namespace std;
int power(int n)
{
    if (n == 0)
        return 1;

    int smaller = power(n - 1);
    int bigger = 2 * smaller;
    return bigger;
}
int main()
{
    int n;
    cout << "enter the number ";
    cin >> n;
    int s = power(n);
    cout << s;
    return 0;
}
/*enter the number 10
1024
PS C:\Users\DELL\OneDrive\Desktop\dsa in c++\recrusion>*/