// codestudio
/*Q. you are given an arraylist ARR consisting of N integers. your task is to find all the distinct triplete
present in the array which adds up to a given number k. an array is said to have a triplet (ARR[i],ARR[j],ARR[k])
with the sum =K .if there exist three indices i,j,k. such that i!=j,j!=i and k!=i and ARR[i]+ARR[j]+ARR[k]=k*/

/*note :--1. you can return the list of value in the order for example , if a valid triplet is (1,2,3),(2,3,1) and
(3,1,2) etc is also a valid triplet
2. the elements in the array need not be distinct*/

#include <iostream>
using namespace std;
#define N 10
int main()
{
    int x[N], p, i, j, k, s = 6;
    cout << "enter the size of an array";
    cin >> p;
    for (i = 0; i < p; i++)
    {
        cin >> x[i];
    }
    for (i = 0; i < p; i++)
    {
        for (j = i + 1; j < p; j++)
        {
            for (k = j + 1; k < p; k++)
            {
                if (x[i] + x[j] + x[k] == s)
                    cout << x[i] << x[j] << x[k] << endl;
            }
        }
    }
    return 0;
}
/*enter the size of an array10
0
4
2
1
5
3
2
4
1
3
042
042
024
015
051
033
024
411
141
213
213
231
213
132
123
321
213
PS C:\Users\DELL\OneDrive\Desktop\question\question>*/
// in the above code we can see that there are multiple value has same

//in this code we can used the two pointer approach
#include <iostream>
#include <algorithm>
#include <set>
using namespace std;
#include <vector>
vector<vector<int>> find(vector<int> qwe, int p, int k)
{
    sort(qwe.begin(), qwe.end()); // imporatnt
    vector<vector<int>> ans;
    set<vector<int>> s;
    for (int i = 0; i < p; i++)
    {
        int sum = k - qwe[i];
        int j = i + 1;
        int l = p - 1;
        while (j < l)
        {
            if (qwe[j] + qwe[l] == sum)
            {
                vector<int> temp;
                temp.push_back(qwe[i]);
                temp.push_back(qwe[j]);
                temp.push_back(qwe[l]);
                // sort(temp.begin(),temp.end());
                s.insert(temp); // important
                j++;
            }
            else if (qwe[j] + qwe[l] < sum)
            {
                j++;
            }
            else
            {
                l--;
            }
        }
    }
    for (auto d : s)
    {
        ans.push_back(d); // important
    }
    return ans;
}
int main()
{
    vector<int> qwe;
    int p = 10, c, k = 6;
    for (int i = 0; i < p; i++)
    {
        cin >> c;
        qwe.push_back(c);
    }
    vector<vector<int>> arr = find(qwe, p, k);
    for (int i = 0; i < arr.size(); i++)
    {
        for (int j = 0; j < arr[0].size(); j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}
/*0
4
2
1
5
3
2
4
1
3
0 1 5
0 2 4
0 3 3
1 1 4
1 2 3
PS C:\Users\DELL\OneDrive\Desktop\question\question>*/
// in the above case we can see that there is multiple value because of we can use the "set"