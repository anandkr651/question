#include <iostream>
using namespace std;

int binary_search(int y[], int s, int e, int number)
{
    int end = e;
    int start = s, mid;
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
    return false;
}

int pivot(int y[], int size)
{
    int end = size - 1, start = 0, mid;
    mid = start + (end - start) / 2; // complexity is O(log n)
    while (start < end)
    {
        if (y[mid] > y[0])
        {
            start = mid + 1;
        }
        else
        {
            end = mid;
        }
        mid = start + (end - start) / 2;
    }
    return start;
}
int main()
{
    int x[5] = {3, 8, 10, 1, 2};
    int p, c;
    cout << "pivot elements of index number " << pivot(x, 5) << " number is " << x[pivot(x, 5)] << endl;
    cout << "enter the number you want to search";
    cin >> p;
    if (x[pivot(x, 5)] <= p && x[5 - 1] >= p)
    {
        c = binary_search(x, pivot(x, 5), 4, p);
        if (x[c] == p)
        {
            cout << "number is found in the lower line of the graph " << x[c];
        }
        else
        {
            cout << "number is not found ";
        }
    }
    else
    {
        c = binary_search(x, 0, pivot(x, 5) - 1, p);
        if (x[c] == p)
        {
            cout << "number is found in the upper line of the graph " << x[c];
        }
        else
        {
            cout << "number is not found ";
        }
    }
}
/*pivot elements of index number 3 number is 1
enter the number you want to search2
number is found in the lower line of the graph 2
PS C:\Users\DELL\OneDrive\Desktop\dsa in c++\searching>

pivot elements of index number 3 number is 1
enter the number you want to search8
number is found in the upper line of the graph 8
PS C:\Users\DELL\OneDrive\Desktop\dsa in c++\searching>

pivot elements of index number 3 number is 1
enter the number you want to search11
number is not found 
PS C:\Users\DELL\OneDrive\Desktop\dsa in c++\searching>*/