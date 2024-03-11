#include<iostream>
using namespace std;
#define N 10

int main()
{
    int x[N],p,i;
    cout<<"enter the size of an array";
    cin>>p;
    cout<<"enter the binary number";
    for(i=0;i<p;i++)
    {
        cin>>x[i];
    }
    int left=0,right=p-1;
    while(left<right)
    {
        while(x[left]==0 &&left<right)
        {
            left++;
        }
        while(x[right]==1&&left<right)
        {
            right--;
        }
        swap(x[left],x[right]);
        left++;
        right--;
    }
    for(i=0;i<p;i++)
    {
        cout<<x[i];
    }
    return 0;
}
/*enter the size of an array8
enter the binary number1
1
0
0
0
0
1
0
00000111
PS C:\Users\DELL\OneDrive\Desktop\dsa in c++\array>*/