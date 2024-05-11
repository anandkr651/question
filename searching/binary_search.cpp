#include <iostream>
using namespace std;
#define N 10

int binary_search(int y[], int size, int number)
{
    int end = size - 1;
    int start = 0, mid;
    mid = start + (end - start) / 2; // important
    while (start <= end)
    {
        if (y[mid] > number)
        {
            end = mid - 1;
        }
        else if (y[mid] < number)
        {
            start = mid + 1;
        }
        else
        {
            return mid;
        }
        mid = start + (end - start) / 2; // important
    }
    return -1;
}

int main()
{
    int x[N], p, i, r;
    cout << "enter the size of an array";
    cin >> p;
    for (i = 0; i < p; i++)
    {
        cin >> x[i];
    }
    cout << "what number you can find enter the number";
    cin >> r;
    int a = binary_search(x, p, r);
    cout << "index number " << a;
}
/*enter the size of an array5
1
2
3
4
5
what number you can find enter the number3
index number 2
PS C:\Users\DELL\OneDrive\Desktop\dsa in c++\searching>*/