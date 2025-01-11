#include <iostream>
using namespace std;
// int count(int n)
// {
//     if (n <= 2)
//         return n;
//     long long int pre1 = 1;
//     long long int pre2 = 2;
//     long long int current = 0;
//     for (int i = 3; i <= n; i++)
//     {
//         current = pre1 + pre2;
//         pre1 = pre2;
//         pre2 = current;
//     }
//     return current;
// }
int countstairs(int n){
    if(n<0){
        return 0;
    }
    if(0==n){
        return 1;
    }
    int ans = countstairs(n-1)+countstairs(n-2);
    return ans;
}
int main()
{
    int a,count=0,ans=0;
    cout << "enter the number of strairs" << endl;
    cin >> a;
    // cout << "the number of way to reach the " << a << " stairs " << count(a);
    //OR
    cout << "the number of way to reach the " << a << " stairs " << countstairs(a);
}
/*enter the number of strairs
5
the number of way to reach the 5 stairs 8
PS C:\Users\DELL\OneDrive\Desktop\question\question>*/
/*enter the number of strairs
51
the number of way to reach the 51 stairs -1408458269
PS C:\Users\DELL\OneDrive\Desktop\question\question>*/