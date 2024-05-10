// CodeStdio

/*Q. you are given two array A and B of size N and M respectively. both these array are sorted in non-decreasing
order. you have to find the intersection of these two arrays.intersection of two array is an array that contain
of all the common elements occuring in both the arrays*/

/*note :-- 1.the length of each array is greater than zero.
2. both the array are sorted in non-decreasing order.
3. the output should be in the order of elements that occur in the origanal arrays
4. if there is no intersection present then return a single integer -1*/

/* Example : input(A) : 1,2,4,5,7
             input(B) : 2,3,4,5,9
             output(A intersection B) : 2,4,5*/

// it is not optimised
#include <iostream>
#include <vector>
using namespace std;
vector<int> findarray(vector<int> &arr1, int n, vector<int> &arr2, int m)
{
    vector<int> ans;
    for (int i = 0; i < n; i++)
    {
        int element = arr1[i];
        for (int j = 0; j < m; j++)
        {
            if (element == arr2[j])
            {
                ans.push_back(element);
                arr2[j] = -1;
                break;
            }
        }
    }
    return ans;
}
int main()
{
    vector<int> a, b;
    int x, y, p, q;
    cout << "enter the size of 1 array " << endl;
    cin >> x;
    cout << "enter the size of 1 array " << endl;
    cin >> y;
    cout << "enter the 1 size array number " << endl;
    for (int i = 0; i < x; i++)
    {
        cin >> p;
        a.push_back(p);
    }
    cout << "enter the 2 size array number " << endl;
    for (int i = 0; i < y; i++)
    {
        cin >> q;
        b.push_back(q);
    }
    vector<int> arr = findarray(a, x, b, y);
    cout << "intersection of two array" << endl;
    for (int i : arr)
    {
        cout << i << " ";
    }
}
/*enter the size of 1 array
5
enter the size of 1 array
5
enter the 1 size array number
1
2
4
5
7
enter the 2 size array number
2
3
4
5
9
intersection of two array
2 4 5
PS C:\Users\DELL\OneDrive\Desktop\question\question>*/

#include <iostream>
#include <vector>
using namespace std;
vector<int> findarray(vector<int> &arr1, int n, vector<int> &arr2, int m)
{
    int i = 0, j = 0;
    vector<int> ans;
    while (i < n && j < m)
    {
        if (arr1[i] == arr2[j])
        {
            ans.push_back(arr1[i]);
            i++;
            j++;
        }
        else if (arr1[i] < arr2[j])
        {
            i++;
        }
        else
        {
            j++;
        }
    }
    return ans;
}
int main()
{
    vector<int> a, b;
    int x, y, p, q;
    cout << "enter the size of 1 array " << endl;
    cin >> x;
    cout << "enter the size of 1 array " << endl;
    cin >> y;
    cout << "enter the 1 size array number " << endl;
    for (int i = 0; i < x; i++)
    {
        cin >> p;
        a.push_back(p);
    }
    cout << "enter the 2 size array number " << endl;
    for (int i = 0; i < y; i++)
    {
        cin >> q;
        b.push_back(q);
    }
    vector<int> arr = findarray(a, x, b, y);
    cout << "intersection of two array" << endl;
    for (int i : arr)
    {
        cout << i << " ";
    }
}
/*enter the size of 1 array
6
enter the size of 1 array
4
enter the 1 size array number
1
2
2
2
3
4
enter the 2 size array number
2
2
3
3
intersection of two array
2 2 3
PS C:\Users\DELL\OneDrive\Desktop\question\question>*/