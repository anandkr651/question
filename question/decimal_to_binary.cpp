#include<iostream>
#include<cmath>
#include<vector>
using namespace std;
int main()
{
    int n;
    cout<<"enter the number";
    cin>>n;
    int ans=0;
    int i=0;
    while(n!=0)
    {
        int bit=n&1;
        ans=(bit*pow(10,i))+ans;
        n=n>>1;
        i++;
    }
    cout<<ans;
}
/*enter the number5
101
PS C:\Users\DELL\OneDrive\Desktop\question\question> */