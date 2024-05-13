#include <iostream>
using namespace std;
int factorial(int n)
{
    if (n == 0)
        return 1;
    return n * factorial(n - 1);
}
int main()
{
    int n;
    cout << "enter the number ";
    cin >> n;
    int s = factorial(n);
    cout << "factorial of the number is " << s;
    return 0;
}
/*enter the number 5
factorial of the number is 120
PS C:\Users\DELL\OneDrive\Desktop\dsa in c++\recrusion>*/