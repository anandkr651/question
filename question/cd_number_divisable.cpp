#include<iostream>
using namespace std;
void divisible(int n)
{
     for(int i=1;i<=n;i++)
     {
        if(n%i==0)
        {
            cout<<i<<" ";
        }
     }
}
int main()
{
    int n;
    cout<<"enter the number";
    cin>>n;
    divisible(n);
}
/*enter the number10
1 2 5 10
PS C:\Users\DELL\OneDrive\Desktop\dsa in c++\STL>*/

#include<iostream>
#include<vector>
using namespace std;
vector<int> divisble(int n)
{
    vector<int> ans;
     for(int i=1;i<=n;i++)
     {
        if(n%i==0)
        {
              ans.push_back(i);
        }
     }
     return ans;
}
int main()
{
    int n;
    cout<<"enter the number";
    cin>>n;
    vector<int> p=divisble(n);
      for(int i:p)
      {
        cout<<i<<" ";
      }
}
/*enter the number10
1 2 5 10
PS C:\Users\DELL\OneDrive\Desktop\dsa in c++\STL>*/

#include <iostream>
using namespace std;
int* divisible(int n, int &q)
{
    int *ans = new int[n];
    q = 0;
    for (int i = 1; i <= n; i++)
    {
        if (n % i == 0)
        {
            ans[q++] = i;
        }
    }
    return ans;
}
int main()
{
    int n, p = 0;
    cout << "enter the number";
    cin >> n;
    int *an = divisible(n, p);
     for(int i=0;i<p;i++)
     {
        cout<<an[i]<<" ";
     }
     delete[] an;
}
/*enter the number10
1 2 5 10 
PS C:\Users\DELL\OneDrive\Desktop\dsa in c++\STL>*/