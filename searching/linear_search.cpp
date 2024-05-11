// function call

#include <iostream>
using namespace std;
#define N 10
// int l_search(int[], int, int);
int l_search(int y[], int r, int s)
{
    int c, p = 0;
    for (c = 0; c < s; c++)
    {
        if (r == y[c])
        {
            p = 1;
            break;
        }
    }
    return p;
}
int main()
{
    int x[N], p, q, i, w;
    cout << "enter the size of an array";
    cin >> p;
    for (i = 0; i < p; i++)
    {
        cin >> x[i];
    }
    cout << "enter the number you want to search";
    cin >> q;
    w = l_search(x, q, p);
    if (w == 1)
        cout << "number is found";
    else
        cout << "number is not found";
}
/*enter the size of an array5
3
5
2
9
3
enter the number you want to search2
number is found
PS C:\Users\DELL\OneDrive\Desktop\dsa in c++>*/

// return s==1

#include <iostream>
using namespace std;
#define N 10
int main()
{
    int x[N], p, i, r, s;
    cout << "enter the size of an array";
    cin >> p;
    for (i = 0; i < p; i++)
    {
        cin >> x[i];
    }
    cout << "enter the number you want to search";
    cin >> r;
    for (i = 0; i < p; i++)
    {
        if (r == x[i])
        {
            s = 1;
            break;
        }
    }
    if (s == 1)
        cout << "index number of that number is " << i << x[i];
    else
        cout << r << " is not found in this array";
    return 0;
}
/*enter the size of an array6
1
2
3
4
5
7
enter the number you want to search9
9 is not found in this array
PS C:\Users\DELL\OneDrive\Desktop\dsa in c>*/

// p and array of that number

#include <iostream>
using namespace std;
#define N 10
int main()
{
    int x[N], p, i, r;
    cout << "enter the size of an array";
    cin >> p;
    for (i = 0; i < p; i++)
    {
        cin >> x[i];
    }
    cout << "enter the number you want to search";
    cin >> r;
    for (i = 0; i < p; i++)
    {
        if (r == x[i])
        {
            break;
        }
    }
    if (i == p)
        cout << r << " is not found in this array";
    else
        cout << "index number of that number is " << i << x[i];
    return 0;
}
/*enter the size of an array4
2
7
4
9
enter the number you want to search5
5 is not found in this array
PS C:\Users\DELL\OneDrive\Desktop\dsa in c>*/