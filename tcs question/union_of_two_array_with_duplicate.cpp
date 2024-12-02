#include <bits/stdc++.h>
using namespace std;
// int findUnion(vector<int> &a, vector<int> &b)
// {
//     int m = a.size(), n = b.size(), j = 0, count = 1;
//     a.insert(a.end(), b.begin(), b.end());
//     sort(a.begin(), a.end());
//     for (int i = 0; i < m + n - 1; i++)
//     {
//         if (a[i] != a[i + 1])
//         {
//             count++;
//         }
//     }
//     return count;
// }

//  ***************** OR ************
int findUnion(vector<int> &a, vector<int> &b){
    set<int> unionSet;
    for(auto num:a){
        unionSet.insert(num);
    }
    for(auto num:b){
        unionSet.insert(num);
    }
    return unionSet.size();

}

int main()
{
    int n, m;
    cout << "enter the size of first array ";
    cin >> n;
    vector<int> a(n);
    cout << "enter the element of an array ";
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    cout << "enter the size of second array ";
    cin >> m;
    vector<int> b(m);
    cout << "enter the element of an array ";
    for (int i = 0; i < m; i++)
    {
        cin >> b[i];
    }
    int ans = findUnion(a, b);
    cout << "Union of two array " << ans;
}
/*enter the size of first array 5
enter the element of an array 5
2
9
4
78
enter the size of second array 5
enter the element of an array 23
87
2
9
78
Union of two array 7
PS D:\question\tcs question>*/