//CodeStdio

/*Q. you are given an array 'ARR' of size 'N' containing each number between 1 and N-1 at least once. there is a
single integer volume that is present in the array twice. you task is to find the duplicate integer value 
present in the array */

/*sample input  --  1,3,3,2,4    output : 3
                    1,2,3,2      output : 2
*/

// #include<iostream>
// using namespace std;
// #define N 5
// int duplicate(int y[],int size)
// {
//     int ans=0;
//     for(int i=0;i<size;i++)
//     {
//         ans=ans^y[i];          //important
//     }
//     for(int j=1;j<size;j++)
//     {
//         ans=ans^j;            //important
//     }
//     return ans;
// }

// int main()
// {
//     int x[N],p,c,arr;
//     cout<<"enter the size of an array";
//     cin>>p;
//     cout<<"enter the number";
//     for(c=0;c<p;c++)
//     {
//         cin>>x[c];
//     }
//     arr=duplicate(x,p);
//     cout<<"duplicate number is "<<arr;
// }
/*enter the size of an array4
enter the number1
2
3
2
duplicate number is 2
PS C:\Users\DELL\OneDrive\Desktop\dsa in c++\array>*/

/*
XOR --> 1   1 -->0
        1   0 -->1
        0   1 -->1
        0   0 -->0
*/

#include<iostream>
#include<vector>
using namespace std;
#define N 5
int duplicate(vector<int>&y)
{
    int ans=0;
    for(int i=0;i<y.size();i++)
    {
        ans=ans^y[i];          //important
    }
    for(int j=1;j<y.size();j++)
    {
        ans=ans^j;            //important
    }
    return ans;
}

int main()
{
    int c,p;
    vector<int>x;
    cout<<"enter the size of an array";
    cin>>p;
    cout<<"enter the number";
    for(c=0;c<p;c++)
    {
        cin>>c;
        x.push_back(c);
    }
   int arr=duplicate(x);
    cout<<"duplicate number is "<<arr;
}
/*enter the size of an array4
enter the number1
2
2
3
duplicate number is 2
PS C:\Users\DELL\OneDrive\Desktop\question\question>*/