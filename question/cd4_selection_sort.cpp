#include <iostream>
#include <vector>
using namespace std;
void selectionsort(vector<int> &ans,int s)
{
    for(int i=0;i<s;i++)
    {
        int minindex=i;
        for(int j=i+1;j<s;j++)
        {
            if(ans[minindex]>ans[j])
            {
                minindex=j;
            }
        }
        swap(ans[i],ans[minindex]);
    }
}
int main()
{
    int p,s=10;
    vector<int> ans;
    cout<<"enter the number"<<endl;
    for (int i = 0; i < 10; i++)
    {
        cin >> p;
        ans.push_back(p);
    }
    selectionsort(ans,s);
    for(int i:ans)
    {
        cout<<i<<" ";
    }
}
/*enter the number
29
72
98
13
87
66
52
51
36
1
1 13 29 36 51 52 66 72 87 98 
PS C:\Users\DELL\OneDrive\Desktop\dsa in c++\question>*/