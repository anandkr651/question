/* Q.7.Reverse Integer
  given a signed 32-bit integer x,return x with its digit reversed.if reverseing x causes the value to go
  outside the signed 32-bit integer range [-2 pe power(31),2 pe power(31)-1],then return 0.

  Assume the environment does not allow you to store 64-bit integers (signed or unsigned).
  Example :-- input x=123   , output: 321
              input x=-234  , output: -432
*/

#include <iostream>
using namespace std;

class solution
{
public:
    int reverse(int x)
    {
        int ans = 0;
        while (x != 0)
        {
            int d = x % 10;
            if ((ans > INT_MAX / 10) || (ans < INT_MIN / 10))
            {
                return 0;
            }
            ans = (ans * 10) + d;
            x = x / 10;
        }
        return ans;
    }
};
// int main()
// {
//     solution t;
//     int c=t.reverse(234657890);
//     cout<<"reverse of the digit "<<c;
// }
/*reverse of the digit 98756432
PS C:\Users\DELL\OneDrive\Desktop\dsa in c++> */

int main()
{
    solution t;
    int c = t.reverse(2147483639); // because in this question the range between 2 power 31  so it can return 0
    cout << "reverse of the digit " << c;
}
/*
reverse of the digit 0
PS C:\Users\DELL\OneDrive\Desktop\dsa in c++>*/