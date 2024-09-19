#include <iostream>
using namespace std;
int first_occurance(int y[], int size, int number)
{
    int end = size - 1;
    int start = 0, mid, ans;
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
            ans = mid;
            end = mid - 1;
        }
        mid = start + (end - start) / 2; // important
    }
    return ans;
}

int last_occurance(int y[], int size, int number)
{
    int end = size - 1;
    int start = 0, mid, ans;
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
            ans = mid;
            start = mid + 1;
        }
        mid = start + (end - start) / 2; // important
    }
    return ans;
}
int main()
{
    int x[10] = {1, 2, 3, 3, 3, 3, 3, 3, 3, 6};
    cout << "index of first " << first_occurance(x, 10, 3) << endl;
    cout << "index of last " << last_occurance(x, 10, 3);
}
/*index of first 2
index of last 8
PS C:\Users\DELL\OneDrive\Desktop\dsa in c++\searching> */

#include <iostream>
#include <vector>
using namespace std;
int first_occurance(vector<int> &y, int r, int num)
{
    int start = 0, end = r - 1, po = -1;
    int mid = start + (end - start) / 2;
    while (start <= end)
    {
        if (y[mid] > num)
        {
            end = mid - 1;
        }
        else if (y[mid] < num)
        {
            start = mid + 1;
        }
        else
        {
            po = mid;
            end = mid - 1;
        }
        mid = start + (end - start) / 2;
    }
    return po;
}
int last_occurance(vector<int> &x, int r, int num)
{
    int start = 0, end = r - 1, pi = -1;
    int mid = start + (end - start) / 2;
    while (start <= end)
    {
        if (x[mid] > num)
        {
            end = mid - 1;
        }
        else if (x[mid] < num)
        {
            start = mid + 1;
        }
        else
        {
            pi = mid;
            start = mid + 1;
        }
        mid = start + (end - start) / 2;
    }
    return pi;
}
pair<int, int> firstandlast(vector<int> &ans, int r, int num)
{
    pair<int, int> p;
    p.first = first_occurance(ans, r, num);
    p.second = last_occurance(ans, r, num);
    return p;
}
int main()
{
    vector<int> ans;
    int p, num, r;
    cout << "enter the the number in ascending order ";
    for (int i = 0; i < 10; i++)
    {
        cin >> p;
        ans.push_back(p);
    }
    r = ans.size();
    num = 3;
    pair<int, int> a = firstandlast(ans, r, num);
    cout << a.first << " " << a.second << endl;
}
/*enter the the number in ascending order 1
2
3
3
3
4
5
7
7
9
2 4
PS C:\Users\DELL\OneDrive\Desktop\dsa in c++\question>*/