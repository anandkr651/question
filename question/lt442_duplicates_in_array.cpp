//leetcode
//Q. 442. find all duplicate in an array

/* given an integer array nums of length n where all the integer of nums are in the range [1,n] and each integer
appears once or twice, return an array of all the integer that appears twice.

you must write an algorithim that runs in o(n) time and uses only constant extra space.*/

/* Example  input : [4,3,2,7,8,2,3,1]   output : 2,3*/

// #include<iostream>
// using namespace std;
// #define N 10

// int main()
// {
//     int x[N],i,j,p,t,count;
//     cout<<"enter the size of an array";
//     cin>>p;
//     cout<<"enter the number";
//     for(i=0;i<p;i++)
//     {
//         cin>>x[i];
//     }
//     for(i=0;i<p;i++)
//     {
//         for(j=0;j<p-1-i;j++)
//         {
//             if(x[j]>x[j+1])
//             {
//                 t=x[j];
//                 x[j]=x[j+1];
//                 x[j+1]=t;
//             }
//         }
//     }
//     cout<<"your sorted data\n";
//     for(i=0;i<p;i++)
//     {
//         count=1;
//         static int a=0;
//         while(x[i]==x[i+1])
//         {
//             count++;
//             i++;
//         }
//         if(count==2)
//         {
//             cout<<x[i]<<"number in this array is "<<count<<endl;
//         }
//     }
// }
/*enter the size of an array8
enter the number4
2
3
7
8
3
2
1
your sorted data
2number in this array is 2
3number in this array is 2
PS C:\Users\DELL\OneDrive\Desktop\dsa in c++>*/

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
class solution{
    public:
    vector<int> finddup(vector<int>&s)
    {
        vector<int>ans;
        sort(s.begin(),s.end());
        for(int i=0;i<s.size()-1;i++)
        {
            int count=1;
            if(s[i]==s[i+1])
            {
               count++;
               i++;
            }
            if(count==2)
            {
                ans.push_back(s[i]);
            }
        }
        return ans;
    }
};
int main()
{
    vector<int>s(7);
    for(int i=0;i<s.size();i++)
    {
        cin>>s[i];
    }
    solution t;
    vector<int>arr=t.finddup(s);
    for(int i:arr)
    {
        cout<<i<<" ";
    }
}
/*1
2
3
4
1
2
8
1 2 
PS C:\Users\DELL\OneDrive\Desktop\question\question>*/