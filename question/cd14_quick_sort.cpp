#include <iostream>
using namespace std;
int partition(int arr[], int s, int e)
{
    int pivot = arr[s];
    int count = 0;
    for (int i = s + 1; i <= e; i++)
    {
        if (arr[i] <= pivot)
        {
            count++;
        }
    }
    int index = s + count;
    swap(arr[s], arr[index]);
    int i = s, j = e;
    while (i < index && j > index)
    {
        while (arr[i] <= pivot)
        {
            i++;
        }
        while (arr[j] > pivot)
        {
            j--;
        }
        if (i < index && j > index)
        {
            swap(arr[i++], arr[j--]);
        }
    }
    return index;
}
void quicksort(int *arr, int start, int end)
{
    if (start >= end)
        return;
    int p = partition(arr, start, end);

    quicksort(arr, start, p - 1);
    quicksort(arr, p + 1, end);
}
int main()
{
    int arr[7] = {0, 9, -4, -9, -9, -7, 9};
    int s = 0, n = 7;
    quicksort(arr, s, n - 1);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}
/*-9 -9 -7 -4 0 9 9
PS C:\Users\DELL\OneDrive\Desktop\dsa in c++\question>*/