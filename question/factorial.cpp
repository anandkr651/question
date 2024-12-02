#include <iostream>
using namespace std;
int factorial(int n)
{
    if (n == 0)
        return 1;
    return n * factorial(n - 1);
}
int main()
{
    int n;
    cout << "enter the number ";
    cin >> n;
    int s = factorial(n);
    cout << "factorial of the number is " << s;
    return 0;
}
/*enter the number 5
factorial of the number is 120
PS C:\Users\DELL\OneDrive\Desktop\dsa in c++\recrusion>*/

#include<bits/stdc++.h>
using namespace std;
vector<int>factoral(int n){
    vector<int>ans;
    ans.push_back(1);
    int carry=0;
    for(int i=2;i<=n;i++){
        for(int j=0;j<ans.size();j++){
            int x = ans[j]*i+carry;
             ans[j]=x%10;
             carry=x/10;
        }
        while(carry){
            ans.push_back(carry%10);
            carry=carry/10;
        }
    }
    reverse(ans.begin(),ans.end());
    return ans;
}
int main()
{
    int n;
    cout<<"enter the number ";
    cin>>n;
    vector<int>fact = factoral(n);
    for(int i:fact){
        cout<<i<<" ";
    }
}
/*enter the number 88
1 8 5 4 8 2 6 4 2 2 5 7 3 9 8 4 3 9 1 1 4 7 9 6 8 4 5 6 4 5 5 4 6 2 8 4 3 8 0 2 2 0 9 6 8 9 4 9 3 9 9 3 4 6 6 8 4 4 2 1 5 8 0 9 8 6 8 8 9 5 6 2 
1 8 4 0 2 8 1 9 9 3 1 9 1 0 0 1 4 1 2 4 4 8 0 4 5 0 1 8 2 8 4 1 6 6 3 3 5 1 6 8 5 1 2 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 
PS D:\question\question>*/