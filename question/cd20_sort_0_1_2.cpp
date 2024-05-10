#include <iostream>
using namespace std;
#define N 10

int main()
{
    int x[N], p, i;
    cout << "enter the size of an array";
    cin >> p;
    cout << "enter the combination of 1,2,0 number";
    for (i = 0; i < p; i++)
    {
        cin >> x[i];
    }
    int left = 0, right = p - 1, mid = p - 1;
    while (left < right)
    {
        while (x[left] == 0 && left < right)
        {
            left++;
        }
        while ((x[right] == 1 || x[right] == 2) && left < right)
        {
            right--;
        }
        swap(x[left], x[right]);

        if (left == right)
        {
            while (left < mid)
            {
                while (x[left] == 1 && left < mid)
                {
                    left++;
                }
                while (x[mid] == 2 && left < mid)
                {
                    mid--;
                }
                swap(x[left], x[mid]);
            }
        }
    }
    cout << "hello" << mid << left;
    for (i = 0; i < p; i++)
    {
        cout << "\t" << x[i];
    }
    return 0;
}
/*enter the size of an array7
enter the combination of 1,2,0 number1
0
2
0
2
1
1
hello55 0       0       1       1       1       2       2
PS C:\Users\DELL\OneDrive\Desktop\new folder\array>*/

#include <iostream>
#include <array>
#include <algorithm>
using namespace std;

int main()
{
    array<int, 10> x;
    int i, p = x.size();
    cout << "enter the combination of 1,2,0 number";
    for (i = 0; i < p; i++)
    {
        cin >> x[i];
    }
    sort(x.begin(), x.end());
    cout << "sorted array" << endl;
    for (i = 0; i < p; i++)
    {
        cout << x[i];
    }
}
/*enter the combination of 1,2,0 number2
2
1
1
0
2
1
0
2
1
sorted array
0011112222
PS C:\Users\DELL\OneDrive\Desktop\dsa in c++\question>*/