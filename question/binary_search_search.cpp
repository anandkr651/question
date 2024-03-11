#include <iostream>
using namespace std;
bool bsearch(int *arr, int s, int start, int end)
{
    if (start > end)
        return false;

    int mid = start + (end - start) / 2;
    if (arr[mid] == s)
        return true;
    if (arr[mid] > s)
    {
        return bsearch(arr,s,start,mid-1);
    }
    else
    {
       return bsearch(arr,s,mid+1,end);
    }

}
int main()
{
    int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int s = 1, start = 0;
    int end = 9;
    bool ans = bsearch(arr, s, start, end);
    if (ans == 1)
    {
        cout << "elements is present";
    }
    else
    {
        cout << "elements is not present";
    }
}
/*elements is present
PS C:\Users\DELL\OneDrive\Desktop\dsa in c++\recrusion>*/