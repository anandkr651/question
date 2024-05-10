// CodeStdio

/* Q. you have been given an integer arraylist(ARR) of size N. where N is equal to (2M+1).
now in the given arraylist 'M' member are present twice and one number is present only once.
you need to find and return that number which is unique in the arraylist*/

/*note :-- unique element is always present in the arraylist according to the given condition.*/

/*sample input  --  2,3,1,6,3,6,2    output : 1
                    2,4,7,2,7        output :4
                    1,3,1,3,6,6,7,10,7  output : 10
*/

#include <iostream>
using namespace std;
#define N 10
int findunique(int *y, int size)
{
    int ans = 0;
    for (int i = 0; i < size; i++)
    {
        ans = ans ^ y[i]; // important
    }
    return ans;
}
int main()
{
    int x[N], p, arr, c;
    cout << "enter the size of an array";
    cin >> p;
    cout << "enter the number";
    for (c = 0; c < p; c++)
    {
        cin >> x[c];
    }
    arr = findunique(x, p);
    cout << "the unique number is " << arr;
    return 0;
}
/*enter the size of an array7      8   4   2   1                   binary number
enter the number2                          1   0
3                                          1   1 == 0   1
1                                                   0   1 ==   0  0
6                                                           1  1  0  == 1   1   0
3                                                                           1   1 == 1  0  1
6                                                                                    1  1  0 == 1   1
2                                                                                               1   0==1
the unique number is 1
PS C:\Users\DELL\OneDrive\Desktop\dsa in c++\array>*/

/*enter the size of an array5
enter the number2
4
7
2
7
the unique number is 4
PS C:\Users\DELL\OneDrive\Desktop\dsa in c++\array>*/

/*enter the size of an array9
enter the number1
3
1
3
6
6
7
10
7
the unique number is 10
PS C:\Users\DELL\OneDrive\Desktop\dsa in c++\array>*/