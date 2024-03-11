#include <iostream>
using namespace std;
void maxoccurance(string p)
{
    int arr[26] = {0};
    for (int i = 0; i < p.length(); i++)
    {
        char ch = p[i];
        int number = 0;
        number = ch - 'a';
        arr[number]++;
    }
    int maxi = -1, ans = 0;
    for (int i = 0; i < 26; i++)
    {
        if (maxi < arr[i])
        {
            ans = i;
            maxi = arr[i];
        }
    }
    char finalans = 'a' + ans;
    cout << finalans;
}
int main()
{
    string s;
    cout << "enter the string";
    cin >> s;
    maxoccurance(s);
}
/*enter the stringanandn
n
PS C:\Users\DELL\OneDrive\Desktop\dsa in c++\STL>*/