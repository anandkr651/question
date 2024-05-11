#include <iostream>
using namespace std;

int binary_search(int number, int s, int e)
{
    long long int end = e, ans = -1;
    long long int start = s, mid;
    mid = start + (end - start) / 2; // important

    while (start <= end)
    {
        long long int square = mid * mid;
        if (square == number)
        {
            return mid;
        }
        if (square < number)
        {
            ans = mid;
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
        mid = start + (end - start) / 2; // important
    }
    return ans;
}

int main()
{
    int p;
    cout << "what number you can find enter the number";
    cin >> p;
    int a = binary_search(p, 0, p);
    cout << "square root of your number " << a;
}
// if we can remove the long long int
/*what number you can find enter the number1000000
square root of your number 458753
PS C:\Users\DELL\OneDrive\Desktop\question\question>*/

/*what number you can find enter the number1000000
square root of your number 1000
PS C:\Users\DELL\OneDrive\Desktop\dsa in c++\searching>*/

/*what number you can find enter the number8
square root of your number 2
PS C:\Users\DELL\OneDrive\Desktop\question\question>*/